#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int X, Y, Z;
    cin >> X >> Y >> Z;
    if (X % 2 == 1 and Y % 2 == 1) 
    {
        cout << "condition is true" << endl;
    }
    else if ((X < 20 and Y >= 20) or (X >= 20 and Y < 20))
    {
        cout << "condition is true" << endl;
    }
    else if (X * Y == 0)
    {
        cout << "condition is true" << endl;
    }
    else if (X < 0 and Y < 0 and Z < 0)
    {
        cout << "condition is true" << endl;
    }
    else if ((X % 5 == 0 and Y % 5 != 0 and Z % 5 != 0) or (X % 5 != 0 and Y % 5 == 0 and Z % 5 != 0) or (X % 5 != 0 and Y % 5 != 0 and Z % 5 == 0))
    {
        cout << "condition is true" << endl;
    }   
    else if (X > 100 or Y > 100 or Z > 100)
    {
        cout << "condition is true" << endl;
    }
    else 
    {
        cout << "condition is false" << endl;
    }
    
}
