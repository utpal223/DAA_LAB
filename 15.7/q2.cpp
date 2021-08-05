#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    cout<<endl;
    int a[n];
    int pro=1;
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    int temp;
    for(int i=0;i<(n-n%2);i+=2)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    cout<<"Output:"<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}