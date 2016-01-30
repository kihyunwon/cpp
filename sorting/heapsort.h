#ifndef HEAPSORT_H_
#define HEAPSORT_H_

namespace sorting {

template<class T>
void max_heap(std::vector<T>& data, int idx)
{
  for (int i = 1; i < idx; i++)
  {
  	T temp = data[i];
  	int child = i;
  	int parent = (child - 1) / 2;
  	while (child > 0 && data[parent] < temp)
  	{
  	  data[child] = data[parent];
  	  child = parent;
  	  parent = (child - 1) / 2;
  	}
  	data[child] = temp;
  }
}

template<class T>
void heapsort(std::vector<T>& data)
{
  int len = data.size();
  max_heap(data, len);
  for (int i = len - 1; i > 0; i--)
  {
  	std::swap(data[i], data[0]);
  	max_heap(data, i);
  }
}

}

#endif
