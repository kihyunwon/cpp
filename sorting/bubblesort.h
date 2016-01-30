#ifndef BUBBLESORT_H_
#define BUBBLESORT_H_

namespace sorting {

template<class T>
void bubblesort(std::vector<T>& data)
{
  size_t len = data.size();
  for (size_t i = 0; i < len; i++)
  {
    for (size_t j = 0; j < len; j++)
    {
      if (data[j] > data[j+1])
      {
        std::swap(data[j], data[j+1]);
      }
    }
  }
}
}

#endif
