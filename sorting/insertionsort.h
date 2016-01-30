#ifndef INSERTIONSORT_H_
#define INSERTIONSORT_H_

namespace sorting {

template<class T>
void insertionsort(std::vector<T>& data)
{
  T temp;
  size_t j;
  size_t len = data.size();

  for (size_t i = 1; i < len; i++)
  {
    temp = data[i];
    j = i - 1;

    while (j >= 0 && data[j] > temp)
    {
      data[j+1] = data[j];
      j--;
    }
    data[j+1] = temp;
  }
}

}

#endif
