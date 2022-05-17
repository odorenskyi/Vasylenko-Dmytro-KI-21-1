#include <iostream>

#include "ModulesIvanov.h"
#include "ModulesVasylenko.h"
#include "ModulesUstynovych.h"

using namespace std;
void dataCheck(char * fileName, Settings * root)
{
    fstream file(fileName, ios::binary | ios::in);
    if(file.peek() == std::ifstream::traits_type::eof())
    {
        cout << "���� �������..." << endl
             << "����������� ��������� ������ ������ ������..." << endl;
        addUnit(root);
    }
    else
        readFromDat(fileName, root);
    file.close();
}

int menu(Settings * root, char * fileName)
{
    short ask;
    cout << "========����=======" << endl
         << "(1)������ �������  " << endl
         << "(2)�������� �������" << endl
         << "(3)�������� � txt  " << endl
         << "(4)������ �����    " << endl
         << "(5)����� � ��������" << endl
         << endl
         << "������ ��������: ";
    cin >> ask;
    cin.ignore();
    switch(ask)
    {

    case 1:
        addUnit(root);
        break;
    case 2:
        deleteUnit(root);
        break;
    case 3:
        printToFile(root, fileName);
        break;
    case 4:
        searchByCode(root);
        break;
    case 5:
        return 1;
        break;
    }
}
void printList(Settings *root)
{
    Settings * buff = root;
    int t = 0;
    while(buff != nullptr)
    {
        cout << t+1 << endl
             << buff->numSelection << " " << buff->nameSelection << endl
             << buff->codeUnit << " " << buff->nameUnit << endl
             << "=================================================" << endl;
        buff = buff->next;
        t++;
    }
}
int main()
{
    system("chcp 1251 & cls");
    Settings * Head = new Settings;
    char dataName[] = "DataFile.dat";
    char * pDataName = dataName;
    char textName[] = "TextFile.txt";
    char * pTextName = textName;
    fstream dataFile(pDataName, ios::app);
    dataFile.close();
    fstream textFile(pTextName, ios::out);
    textFile.close();
    dataCheck(pDataName, Head);
    while(menu(Head, pTextName) != 1);
    writeToDat(pDataName, Head);
    printList(Head);

}
