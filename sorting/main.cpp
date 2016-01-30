#include<iostream>
#include<vector>
#include "sorting.h"

using namespace std;

template<class T>
void print(vector<T> const& data)
{
  if (!data.empty())
  {
    copy(data.begin(), data.end(), ostream_iterator<T>(cout, " "));
    cout << endl;
  }
}

int main()
{
  int a[] = {123, 6, -24, 4567, 45, 98, 9012, 2312, 23, 8, 0};
  vector<int> data(a, a + sizeof(a)/sizeof(int));
  int b[] = {123, 6, 4567, 45, 98, 9012, 2312, 23, 8, 0};
  vector<int> data_r(b, b + sizeof(b)/sizeof(int));
  
  //bubble sort
  sorting::bubblesort(data);
  print(data);

  data.push_back(-1);
  //insertion sort
  sorting::insertionsort(data);
  print(data);

  data.push_back(-2);
  //selection sort
  sorting::selectionsort(data);
  print(data);

  data.push_back(-3);
  //merge sort
  sorting::mergesort(data);
  print(data);
  
  data.push_back(-4);
  //quick sort
  sorting::quicksort(data);
  print(data);
  
  //radix sort
  sorting::radixsort(data_r);
  print(data_r);
  
  data.push_back(-5);
  //heap sort
  sorting::heapsort(data);
  print(data);

  data.push_back(-6);
  //heap sort
  sorting::shellsort(data);
  print(data);
}

