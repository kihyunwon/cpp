#ifndef SELECTIONSORT_H_
#define SELECTIONSORT_H_

namespace sorting {

template<class T>
void selectionsort(std::vector<T>& data)
{
  T min;
  size_t idx;
  size_t len = data.size();

  for (size_t i = 0; i < len; i++)
  {
    idx = i;
    min = data[i];

    for (size_t j = i + 1; j < len; j++)
    {
      if (data[j] < min)
      {
        idx = j;
        min = data[j];
      }
    }

    std::swap(data[i], data[idx]);
  }
}

}

#endif
