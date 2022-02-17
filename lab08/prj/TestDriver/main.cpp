#include <iostream>
#include <iomanip>
#include <cmath>
#include "ModulesVasylenko.h"
#include <locale.h>
#include <windows.h>

using namespace std;

int main()
{
    double num[10][3] = {0,    0,    0,
                           1,    0,    0,
                           0,    1,    0,
                           0,    0,    1,
                           -2.5, 3,    0,
                           -2.5, 0,    -3.12,
                           0,    4,    -1,
                           4.65, 1.1,  0,
                           2,    5,    6,
                           -11,  2.28, -9};
    double res[10] = {3.141593,         3.141593, 0.000000,  29.274334,          1.120708,
                         81.769521, -9.655613, 2.481082, 534.671308, 898.219779};


    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "||=======================||" << endl
         << "|| TestDriver was created||" <<endl;
 wcout<<   L"|| by Dima Vasylenko \x00A9   || ";
    cout << endl
          <<"||=======================||" << endl;

    for (int i = 0; i < 10; i++) {

        if((round(s_calculation(num[i][0], num[i][1], num[i][2])*1000000)/1000000.0 == res[i]) )
        {
            cout  << "TC#" << '0'  << i  << setfill(' ')<<" passed"<<endl;
        }
        else
        {
            cout  << "TC#" << '0'  << i  << setfill(' ')<<" failed"<<endl;
        }
    }
    system("pause");
    return 0;
}
