#define f(i, n) for (int i = 0; i < n; i++)
#include <bits/stdc++.h>
using namespace std;

int count(int **ar, int n)
{
    int c = 0;
    f(i, n)
        f(j, n) if (ar[i][j] != 0) c++;
    return c;
}

int s1(int **ar, int n)
{
    int s = 0;
    f(i, n)
    {
        for (int j = i + 1; j < n; j++)
            s += ar[i][j];
    }
    return s;
}

int s2(int **ar, int n)
{

    int s = 0;
    f(i, n)
    {
        for (int j = 0; j < i; j++)
            s += ar[i][j];
    }
    return s;
}

int p(int **ar, int n)
{
    int p = 1;
    f(i, n)
    {
        p *= ar[i][i];
    }
    return p;
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements:\n";
    int **ar = new int *[n];
    f(i, n) ar[i] = new int[n];
    f(i, n)
            f(j, n) cin >>
        ar[i][j];

    cout << "Count : " << count(ar, n) << endl;
    cout << "Sum 1 : " << s1(ar, n) << endl;
    cout << "Sum 2 : " << s2(ar, n) << endl;
    cout << "Product : " << p(ar, n) << endl;
    return 0;
}