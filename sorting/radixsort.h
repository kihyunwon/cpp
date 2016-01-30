#ifndef RADIXSORT_H_
#define RADIXSORT_H_

namespace sorting {

template<class T>
void countsort(std::vector<T>& data, int base, int exp)
{
  int len = data.size();
  T result[len];
  int i, count[base];
  memset(count, 0, base*sizeof(int));
  
  for (i = 0; i < len; i++)
  {
    count[(data[i] / exp) % base]++;
  }
  for (i = 1; i < base; i++)
  {
    count[i] += count[i-1];
  }
  for (i = len - 1; i >= 0; i--)
  {
  	result[--count[(data[i] / exp) % base]] = data[i];
  }
  for (i = 0; i < len; i++)
  {
  	data[i] = result[i];
  }
}

template<class T>
void radixsort(std::vector<T>& data, int base=10)
{
  T max = *std::max_element(data.begin(), data.end());
  for (int i = 1; max / i > 0; i *= base)
  {
  	countsort(data, base, i);
  }
}

}

#endif