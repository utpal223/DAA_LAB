#include<bits/stdc++.h>

using namespace std;


int main()
{
    map<int, int>m;
    int n,x;
    cout<<"Enter number of elements:";
    cin>>n;
    cout<<endl<<"Enter elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        m[x]=m[x]+1;
        if(m[x]>1)
        m.erase(x);
    }
    for(auto &pr:m)
    cout<<"Non repeating element is:"<<pr.first<<endl;




	return 0;
}
