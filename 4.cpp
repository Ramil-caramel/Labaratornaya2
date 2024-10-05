#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  setlocale(LC_ALL, "Russian");
  long long int pro,a,b;
  cout << "Введите a и b в предлах от 2 до 19, так что b >= a " << endl;
  cin >> a >> b;



  pro = 8;
  for (int i = 9; i < 16; ++i) {
    pro *= i;
  }
  cout << pro << endl;



  if (a <= 1 or a >= 20 or b <= 1 or b >= 20 or b < a) {
    cout << "не допустимые значения a или b";
  }

  else {


    pro = a;
    for (int i = a + 1; i < 21; ++i) {
      pro *= i;
    }
    cout << pro << endl;


    pro = 1;
    for (int i = 1; i < b + 1; ++i) {
      pro *= i;
    }
    cout << pro << " why" << endl;


    pro = a;
    for (int i = a + 1; i < b + 1; ++i) {
      pro *= i;
    }
    cout << pro << endl;


  }
}
