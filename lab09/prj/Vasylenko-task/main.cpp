#include <iostream>
#include "ModulesVasylenko.h"
#include <limits>
#include <locale.h>

using namespace std;

void j_s_calculation()
{
    int x, y, z;

    cout << "Enter х: ";
    cin >> x;
    cout << "х in 16 number system: " << hex << x << dec << endl;
    cout << "Enter у: ";
    cin >> y;
    cout << "y in 16 number system: " << hex << y << dec << endl;
    cout << "Enter z: ";
    cin >> z;
    cout << "z in 16 number system: " << hex << z << dec << endl;
    cout << "S = " << s_calculation(x,y, z);
}

void z_task_9_1()
{
    double price;
    cout << "Enter the purchase amount in UAH: ";
    cin >> price;
    cout << "Number of accrued bonuses: " << Bonus9_1(price).bonus << "\nAmount to be paid: " << Bonus9_1(price).pay << " UAH " << endl;
}

void x_task_9_2()
{
    float t;
    cout << "Enter the number of degrees on the Fahrenheit scale: ";
    cin >> t;
    cout << "Converted degrees to Celsius: " << Temperature9_2(t) << endl;
}

void c_task_9_3()
{
    int n;
    cout << "Enter an integer from 0 to 51950: ";
    do
    {
        cin >> n;
        if (n>51950 || n<0)
                 cout << "Incorrectly entered data, the number must be an integer from 0 to 51950. Please try again!" << endl;
    }while (n>51950 || n<0);
   if((n>>4)&1)
        cout <<"Number of binary units in the number "<< n << ": " << Binary9_3(n) << endl;
    else
        cout <<"The number of binary zeros in the number "<< n << ": " << Binary9_3(n) << endl;
}

int main()
{
    char *locale=setlocale(LC_ALL, "");
    cout << "Created by Dima Vasylenko, a student of the KI-21-1 group\n"
            "--------------------------------------------\n" << endl;

    char symbol;
    char command;
    do
    {
    cout << "\nEnter a character:\n"
            "j - to call a function s_calculation;\n"
            "z - to find out the number of accrued bonuses and the amount to be paid (function to 9.1);\n"
            "x - to convert degrees on the Fahrenheit scale to the Celsius scale (function to 9.2);\n"
            "с - to find out the number of binary ones or zeros in the number (function to 9.3);\n" << endl;
    cin >> command;
    switch (command)
    {
        case 'j':
            j_s_calculation();
            break;
        case 'z':
            z_task_9_1();
            break;
        case 'х':
        case 'x':
            x_task_9_2();
            break;
        case 'c':
        case 'с':
            c_task_9_3();
            break;
        default: cout << "\a";
    }
    cout << "\nTo exit the program, enter v, or V, or A, otherwise the program will run again." << endl;
    cin >> symbol;
    }while (!(symbol == 'v' || symbol == 'V' || symbol == 'A'));

    return 0;
}
