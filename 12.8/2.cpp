#include <bits/stdc++.h>
using namespace std;


void swap(int* a, int* b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

int partition (int a[], int low, int high)
{
  int pivot = a[low]; 
  int i = (low - 1); 

  for (int j = low+1; j <= high; j++)
  {
    
    if (a[j] < pivot)
    {
      i++; 
      swap(&a[i], &a[j]);
    }
  }
  swap(&a[i + 1], &a[high]);
  return (i + 1);
}


void quickSort(int a[], int low, int high)
{
  if (low < high)
  {
  
    int pi = partition(a, low, high);
    quickSort(a, low, pi - 1);
    quickSort(a, pi + 1, high);
  }
}


void printArray(int a[], int size)
{
  int i;
  for (i = 0; i < size; i++)
    cout << a[i] << " ";
  cout << endl;
}


int main(){
        int n,e;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
                cin>>a[i];
        quickSort(a, 0, n - 1);
        cout << "Sorted array: \n";
        printArray(a, n);
        return 0;
}