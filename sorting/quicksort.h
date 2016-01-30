#ifndef QUICKSORT_H_
#define QUICKSORT_H_

namespace sorting {

template<class T>
size_t partition(std::vector<T>& data, size_t low, size_t high)
{
  int mid = low + (high - low) / 2;
  T pivot = data[mid];
  std::swap(data[mid], data[low]);
  size_t i = low + 1;
  size_t j = high;
  
  while (i <= j)
  {
  	while(i <= j && data[i] <= pivot) 
  	{
      i++;
    }
    while(i <= j && data[j] > pivot) 
   	{
   	  j--;
    }
	  if (i < j) 
	  {
      std::swap(data[i], data[j]);
    }
  }
  
  std::swap(data[i - 1], data[low]);

  return i - 1;
}

template<class T>
void quick_helper(std::vector<T>& data, size_t low, size_t high)
{
  if (low >= high)
  {
  	return;
  }

  size_t p = partition(data, low, high);
  quick_helper(data, low, p - 1);
  quick_helper(data, p + 1, high);
}

template<class T>
void quicksort(std::vector<T>& data)
{
  size_t len = data.size() - 1;
  quick_helper(data, 0, len);
}

}

#endif
