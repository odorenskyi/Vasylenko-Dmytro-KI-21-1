#include <iostream>
#include "ModulesVasylenko.h"
#include <limits>
#include <locale.h>

using namespace std;

void j_s_calculation()
{
    int x, y, z;

    cout << "����i�� ����� �: ";
    cin >> x;
    cout << "� � �i�����������i� ������i ��������: " << hex << x << dec << endl;
    cout << "����i�� ����� �: ";
    cin >> y;
    cout << "y � �i�����������i� ������i ��������: " << hex << y << dec << endl;
    cout << "����i�� ����� z: ";
    cin >> z;
    cout << "z � �i�����������i� ������i ��������: " << hex << z << dec << endl;
    cout << "S = " << s_calculation(x,y, z);
}

void z_task_9_1()
{
    double price;
    cout << "����i�� ���� ������� � �������: ";
    cin >> price;
    cout << "�i���i��� ����������� �����i�: " << Bonus9_1(price).bonus << "\n���� �� ������: " << Bonus9_1(price).pay << " ���." << endl;
}

void x_task_9_2()
{
    float t;
    cout << "����i�� �i���i��� ������i� �� ������ ����������: ";
    cin >> t;
    cout << "�����������i ������� � ����� �����i�: " << Temperature9_2(t) << endl;
}

void c_task_9_3()
{
    int n;
    cout << "����i�� �i�� ����� �� 0 �� 51950: ";
    do
    {
        cin >> n;
        if (n>51950 || n<0)
                 cout << "���������� ������i ���i, ����� ������� ���� �i��� �� �� 0 �� 51950. ��������� �� ���!" << endl;
    }while (n>51950 || n<0);
   if((n>>4)&1)
        cout <<"�i���i��� ��i������ ������� � ����i "<< n << ": " << Binary9_3(n) << endl;
    else
        cout <<"�i���i��� ��i������ ���i� � ����i "<< n << ": " << Binary9_3(n) << endl;
}

int main()
{
    char *locale=setlocale(LC_ALL, "");
    cout << "������� ������� ����� ʲ-21-1 ��������� �.�.\n"
            "--------------------------------------------\n" << endl;

    char symbol;
    char command;
    do
    {
    cout << "\n����i�� ������ (���������):\n"
            "j - ��� ������� �����i� s_calculation;\n"
            "z - ��� �i������� �i���i��� ����������� �����i� �� ���� �� ������ (�����i� �� �����i 9.1);\n"
            "x - ��� ������������ ������� �� ������ ���������� � ����� �����i� (�����i� �� �����i 9.2);\n"
            "� - ��� �i������� �i���i��� �������� ������� ��� ���i� � ����i (�����i� �� �����i 9.3);\n" << endl;
    cin >> command;
    switch (command)
    {
        case 'j':
            j_s_calculation();
            break;
        case 'z':
            z_task_9_1();
            break;
        case '�':
        case 'x':
            x_task_9_2();
            break;
        case 'c':
        case '�':
            c_task_9_3();
            break;
        default: cout << "\a";
    }
    cout << "\n��� ������ � �������� ����i�� v, ��� V, ��� A, i����� ����������� ��������� ��������." << endl;
    cin >> symbol;
    }while (!(symbol == 'v' || symbol == 'V' || symbol == 'A'));

    return 0;
}
