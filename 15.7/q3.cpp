#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k=1;
	cin>>n;
	int *p= new int[n];

	for(int i=0;i<n;i++)
	{
		cin>>p[i];
		k*=p[i];
	}

	for(int i=0;i<n;i++)
	{
		cout<<k/p[i]<<" ";
	}


	return 0;
}