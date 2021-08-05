#include <bits/stdc++.h>
using namespace std;

#define fri(i,a,b) for(int i = a; i<=b; i++)

bool prime(int n){
    if (n == 0 || n == 1){
        return false;
    }
    fri(i, 2, n / 2){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;

    bool val = prime(n);

    if(val){
        cout << "Prime Number\n";
    }
    else{
        cout << "Not a Prime Number\n";
    }
    return 0;
}