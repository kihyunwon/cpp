#ifndef MERGESORT_H_
#define MERGESORT_H_

namespace sorting {

template<class T>
void merge(std::vector<T>& data, size_t low, size_t mid, size_t high)
{
  std::vector<T> result;
  size_t i = low, j = mid + 1;
  
  while (i <= mid && j <= high)
  {      
    if (data[i] <= data[j])
      result.push_back(data[i++]);
    else
      result.push_back(data[j++]);
  }

  while (i <= mid)
  {
    result.push_back(data[i++]);
  }
  while (j <= high)
  {
    result.push_back(data[j++]);
  }

  size_t len = result.size();
  for (i = 0; i < len; i++) 
  {
    data[i+low] = result[i];
  }
}

template<class T>
void merge_helper(std::vector<T>& data, size_t low, size_t high)
{
  if (low >= high)
  {
    return;
  }

  size_t mid = low + (high - low) / 2;
  merge_helper(data, low, mid);
  merge_helper(data, mid+1, high);
  merge(data, low, mid, high);
}

template<class T>
void mergesort(std::vector<T>& data)
{
  size_t len = data.size();
  merge_helper(data, 0, len-1);
}

}

#endif
