#include <iostream>
#include <stdio.h>
#include <bitset>

using std::cin;
using std::cout;

int main()
{
    //task1
    std::cout << "1. \nYurova Olga Alexandrovna, 221-331" << std::endl;
    //task2
    std::cout << "2." << std::endl;
    cout << "min int=" << int(0b10000000000000000000000000000000);
    cout << "\tmax int=" << int(0b01111111111111111111111111111111);
    cout << "\tsize of int=" << sizeof(int) << std::endl;
    cout << "min unsigned int= 0";
    cout << "\tmax unsigned int=" << unsigned int(0b01111111111111111111111111111111);
    cout << "\tsize of unsigned int=" << sizeof(unsigned int) << std::endl;
    cout << "min short=" << short(0b1000000000000000);
    cout << "\tmax short=" << short(0b0111111111111111);
    cout << "\tsize of short=" << sizeof(short) << std::endl;
    cout << "min unsigned short=0";
    cout << "\tmax unsigned short=" << unsigned short(0b0111111111111111);
    cout << "\tsize of unsigned short=" << sizeof(unsigned short) << std::endl;
    cout << "min long=" << long(0b10000000000000000000000000000000);
    cout << "\tmax long=" << long(0b01111111111111111111111111111111);
    cout << "\tsize of long=" << sizeof(long) << std::endl;
    cout << "min long long=" << long long(0b1000000000000000000000000000000000000000000000000000000000000000);
    cout << "\tmax long long=" << long long(0b0111111111111111111111111111111111111111111111111111111111111111);
    cout << "\tsize of long long=" << sizeof(long long) << std::endl;
    cout << "min double=" << double(0b1000000000000000000000000000000000000000000000000000000000000000);
    cout << "\tmax double=" << double(0b0111111111111111111111111111111111111111111111111111111111111111);
    cout << "\tsize of double=" << sizeof(double) << std::endl;
    cout << "min char=" << char(0b00000000);
    cout << "\tmax char=" << char(0b11111111);
    cout << "\tsize of char=" << sizeof(char) << std::endl;
    cout << "min bool=" << bool(0b10000000);
    cout << "\tmax bool=" << bool(0b01111111);
    cout << "\tsize of bool=" << sizeof(bool) << std::endl;
    //task3
    setlocale(LC_ALL, "Rus");
    int num1;
    std::cout << "3.\nВведите число: ";
    cin >> num1;
    cout << "В бинарном виде " << std::bitset<8 * sizeof(num1)>(num1) << std::endl;
    cout << "В шестнадцатиричном виде " << std::hex << num1 << std::endl;
    cout << "bool " << bool(num1) << std::endl;
    cout << "double " << double(num1) << std::endl;
    cout << "char " << char(num1) << std::endl;
    //task4
    int a, b;
    std::cout << "4. \nВведите коэффиценты a*x=b: ";
    cin >> a >> b;
    cout << std::dec << a << "*x=" << std::dec << b << std::endl;
    cout << "x=" << b << "/" << a << std::endl;
    cout << "x=" << float(b) / float(a) << std::endl;
    //task5
    int x1, x2;
    std::cout << "5. \nВведите координаты отрезка на прямой: ";
    cin >> x1 >> x2;
    cout << "Середина отрезка находится в точке с координатой " << ((float)x1 + (float)x2) / 2 << std::endl;
}