#include <iostream>
using namespace std;
int quicksort(int arr[], int low, int high)
{
  if (low >= high)
    return 0;

  int mid = (low + high) / 2;
  int pivot = arr[mid];
  int i = low, j = high;
  int temp;
  while (i < j)
  {
    if (arr[i] >= pivot && arr[j] <= pivot)
    {
      temp = arr[j];
      arr[j] = arr[i];
      arr[i] = temp;
      i++;
      j--;
    }
    else
    {
      i++;
    }
  }
  quicksort(arr, low, mid);
  quicksort(arr, mid + 1, high);
}
int main()
{
  int t;
  cin >> t;
  if (t <= 0)
    return 0;
  int arr[t];
  for (int i = 0; i < t; i++)
    cin >> arr[i];
  quicksort(arr, 0, t - 1);
  for (int i = 0; i < t; i++)
    cout << arr[i] << endl;
  return 0;
}