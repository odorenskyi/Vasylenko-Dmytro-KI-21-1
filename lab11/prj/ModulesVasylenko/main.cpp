#include "ModulesVasylenko.h"
using namespace std;

void searchByCode(Settings *root)
{
    Settings * buff = root;
    string buffCode;

    cout << "Уведіть код товару для пошуку: ";
    cin >> buffCode;

    while(buff != nullptr)
    {
        string compareUnit = buff->codeUnit;

        if (buffCode == buff->codeUnit)
        {
            cout << buff->numSelection << " " << buff->nameSelection << endl
                 << buff->codeUnit << " " << buff->nameUnit << endl;
            break;
        }
        else
            buff = buff->next;
        if(buff == nullptr)
            cout << "Товар відсутній" << endl;
    }
}


void printToFile(Settings * root, char * fileName)
{
    fstream file(fileName, ios::app);
    Settings * buff = root;
    while(buff != nullptr)
    {
        file << buff->numSelection << " " << buff->nameSelection << endl
             << buff->codeUnit << " " << buff->nameUnit << endl
             << "=================================================" << endl;
        buff = buff->next;
    }
    file.close();
}
