#include <iostream>
using namespace std;

  int power(int x,int y)
  {
    if (y == 0)
      return 1;
    else if (y % 2 == 0)
      return power(x, y / 2) * power(x, y / 2);
    else
      return x * power(x, y / 2) * power(x, y / 2);
  }


int main()
{
 
  int x = 2;
  int y = 3;

  cout << power(x, y)<<endl;
  return 0;
}
