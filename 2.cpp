#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");


    using byte = unsigned char;
    std::pair<byte, byte> positionA;
    std::cin >> positionA.first >> positionA.second;


    using byte = unsigned char;
    std::pair<byte, byte> positionB;
    std::cin >> positionB.first >> positionB.second;


    if (positionA.first == positionB.first or positionA.second == positionB.second)
    {
        cout << "ладья угрожает фигуре" << endl;
    }
    else {
        cout << "ладья не угрожает фигуре" << endl;
    }



    if (abs(positionA.first - positionB.first) == abs(positionA.second - positionB.second)) {
        cout << "слон угродает фигуре" << endl;
    }
    else {
        cout << "слон неугродает фигуре" << endl;
    }



    if (abs(positionB.first - positionA.first) <= 1 and abs(positionB.second - positionA.second) <= 1) {
        cout << "король может сделать ход" << endl;
    }
    else {
        cout << "король неможет сделать ход" << endl;
    }



    if ((abs(positionB.first - positionA.first) <= 1 and abs(positionB.second - positionA.second) <= 1) or (abs(positionA.first - positionB.first) == abs(positionA.second - positionB.second))) {
        cout << "ферзь может сделать ход" << endl;
    }
    else {
        cout << "ферзь неможет сделать ход" << endl;
    }



    if (positionA.first == positionB.first and positionB.second - positionA.second == 1) {
        cout <<"пешка может сделать ход вперед" << endl;
    }
    else if (abs(positionA.first - positionB.first) == 1 and positionB.second - positionA.second == 1 and positionA.first != positionB.first) {
        cout << "пешка может \"побить\" фигуру" << endl;
    }
    else {
        cout << "пешка неможет сделать ход" << endl;
    }
}
