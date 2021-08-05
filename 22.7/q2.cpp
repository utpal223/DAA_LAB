#include <bits/stdc++.h>
using namespace std;
  
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n/2; i++)
        if (n % i == 0)
            return false;
    return true;
}
  
int main()
{
    int n;
    cout<<"enter the number:\n";
    cin>>n;
    isPrime(n) ? cout << "prime\n" : cout << "not prime\n";
    return 0;
}