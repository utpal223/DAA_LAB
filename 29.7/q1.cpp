#include <bits/stdc++.h>
using namespace std;
#define fri(i,a,b) for(int i = a; i<=b; i++)

void On2(int arr[], int n)
{
	int maxCount = 0;
	int index = -1; 
	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (arr[i] == arr[j])
				count++;
		}

	
		if (count > maxCount) {
			maxCount = count;
			index = i;
		}
	}

	if (maxCount > n / 2)
		cout << arr[index] << endl;

	else
		cout << "No Majority Element" << endl;
}

void On(int ar[] , int n){
    int arr[10001] = {0};
    fri(i , 0 , n-1){
        arr[ar[i]]++;
    }
    fri( i , 0  , 10000){
        if(arr[i] > n/2){
            cout<<i<<endl;
            break;
        }}}
  

int main()
{
	int arr[] = { 5, 5, 2, 1, 3, 5, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);

	On2(arr, n);
	On(arr,n);

	return 0;
}
