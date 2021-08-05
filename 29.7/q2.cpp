#include <bits/stdc++.h>
using namespace std;

#define fri(i,a,b) for(int i = a; i<=b; i++)
#define frd(i,a,b) for(int i = a; i>=b; i--)

int main()
{
    int n;
    cin>>n;
    int arr[n];
    fri(i, 0, n - 1)
            cin >> arr[i];
    fri( i , 0 , n-2){
        int flag = 0;
        fri( j , i , n-1){
            if(arr[i] < arr[j]){
                arr[i] = arr[j];
                flag = 1;
            }
        }
        if(flag == 0 ){
            arr[i] = -1;
        }
    }
    arr[n-1] = -1;

    fri(i, 0, n - 1)
            cout<<  arr[i]<< " ";

    return 0;
}