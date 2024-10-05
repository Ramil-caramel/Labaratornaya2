#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (int i = 1; i < 10; ++i) 
  {
    cout << i << " * 7 = " << 7 * i << endl;
  }
  cout << endl;
  for (int a = 1; a < 10; ++a)
  {
    cout << a << " * " << n << " = " << n * a << endl;
  }
}
