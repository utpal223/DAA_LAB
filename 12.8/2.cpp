#include <stdio.h>
#include <stdlib.h>
#define max 10001

void quickSort(int a[], int l, int r, int *count);
int partition(int a[], int l, int r);

int main()
{
  int size, i, a[max], count = 0;
  printf("Enter the array size: ");
  scanf("%d", &size);

  printf("Enter the array elements:\n ");
  for (i = 0; i < size; i++)
    scanf("%d ", &a[i]);

  quickSort(a, 0, size, &count);

  printf("After quick sorting the array:\n ");

  printf("%d ", count);
  return 0;
}

//quickSort function definition
void quickSort(int a[], int l, int r, int *count)
{
  if (l < r - 1)
  {
    *count = *count + r - l - 1;
    int q = partition(a, l, r);
    quickSort(a, l, q - 1, count);
    quickSort(a, q + 1, r, count);
  }
}

int partition(int a[], int l, int r)
{
  int j, temp, i = l + 1;

  for (j = l + 1; j < r; j++)
  {
    if (a[j] <= a[l])
    {
      temp = a[j];
      a[j] = a[i];
      a[i] = temp;
      i++;
    }
  }
  temp = a[i - 1];
  a[i - 1] = a[l];
  a[l] = temp;
  return i;
}