#ifndef SHELLSORT_H_
#define SHELLSORT_H_

namespace sorting {

template<class T>
void shellsort(std::vector<T>& data)
{
  T temp;
  int i, j, len = data.size();
  for (int gap = len / 2; gap > 0; gap /= 2)
  {
    for (i = gap; i < len; i++) 
    {
      temp = data[i];
  	  for (j = i; j >= gap && temp < data[j-gap]; j -= gap)
  	  {
  	  	data[j] = data[j-gap];
  	  }
  	  data[j] = temp;
  	}
  }
}

}

#endif
