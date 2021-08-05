#include <bits/stdc++.h>
using namespace std;
  
 

int main()
{
   int n;
   cout<<"Enter number of elements:";
    cin>>n;
    int *arr=new int[n];
    cout<<endl<<"Enter elements:"<<endl;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }

   sort(arr, arr+n);

   
   int diff = INT_MAX;
   for (int i=0; i<n-1; i++)
      if (arr[i+1] - arr[i] < diff)
          diff = arr[i+1] - arr[i];


   cout << "Minimum difference is " << diff<<endl;
   return 0;
}