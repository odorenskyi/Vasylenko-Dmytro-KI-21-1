#include <iostream>
#include "ModulesVasylenko.h"
#include <locale>
#include <locale.h>
#include <windows.h>
using namespace std;


void Begin()
{
    cout << "|====================|" << endl
         << "|Vasylenko Dima ";
    wcout << L"\x00A9  |";
    cout << endl
         << "|====================|" << endl;
}

void Comparison(char a, char b)
{
    if (a+1 >= b)
        cout << "a+1 >= b is true" << endl;
    else
        cout << "a+1 >= b is false" << endl;
}

double Change(int value)
{
   int k = 1, b = 0;
    while (value != 0)
    {
        b += value%16*k;
        value/=16;
        k*=10;
    }
    return b;
}

void Changed(int val)
{
    cout << val << "x10: " << val << "   " << val << "x16: 0" << Change(val) << endl;
}

double S (int x, int y, int z)
{
    double x1 = x/1;
    double y1 = y/1;
    double z1 = z/1;
    double S;
    S = s_calculation(x1, y1, z1);
    return S;

}


int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x, y, z;
    char a, b;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter z: ";
    cin >> z;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    Begin();
    Comparison(a,b);
    Changed(x);
    Changed(y);
    Changed(z);
    cout << "S: " << S(x, y, z)<<endl;
    system("pause");
    return 0;
}
