#include <iostream>
#include <fstream>
#include <string>
#include <ModulesVasylenko.h>
#include <windows.h>
#include <locale.h>
#include <ctime>

void task_10_2(char *OutInFile, string slovo)
{
   ifstream inFile;
   inFile.open(OutInFile);
   string fromFile;
   inFile >> fromFile;
   inFile.close();
   ofstream in_File;
   in_File.open(OutInFile, ios::app);
   char lastChar;
   lastChar = slovo.back();
    in_File << "\n ����� � ������� ����� �����: " << "[" << slovo[0] << "]" << " [" << lastChar << "]" << endl;
    time_t times = time(NULL);
    in_File << "��� �������� :"  << asctime (localtime( &times )) << endl;
    in_File.close();

}
using namespace std;

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char in_file[] = "InPut.txt";
    char out_file[] = "OutPut.txt";

    cout << "������ ����� ���������� �����: ";
    string slovo;
    cin >> slovo;
    ofstream in_slovo("InPut.txt");
    in_slovo << slovo;
    in_slovo.close();
    task_10_1(out_file, in_file);
    task_10_2(in_file, slovo);
    float x, y, z, b;
    cout << "������ ����� �:";
    cin >> x;
    cout << "������ ����� y:";
    cin >> y;
    cout << "������ ����� z:";
    cin >> z;
    cout << "������ ����� b:";
    cin >> b;
    task_10_3(x, z, b, out_file);
    cout << "�������� ���� ����� \"InPut.txt\" �� \"OutPut.txt\"!";
    cin.get();
    cin.get();
    return 0;
}

