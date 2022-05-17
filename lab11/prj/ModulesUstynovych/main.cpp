#include "ModulesUstynovych.h"

using namespace std;

string inputData(string msg)
{
    string data = "";
    cout << msg;
    getline(cin, data);
    return data;
}


void addUnit(Settings *&root)
{
    Settings * buff = nullptr;
    if(root == nullptr)
    {
        root = new Settings;
        buff = root;
    }
    else
    {
        buff = root;
        while (buff->next != nullptr)
        {
            buff = buff->next;
        }
        buff->next = new Settings();
        buff = buff->next;
    }
    strcpy(buff->numSelection, inputData("Уведіть номер розділу: ").c_str());
    strcpy(buff->nameSelection, inputData("Уведіть назву розділу: ").c_str());
    strcpy(buff->codeUnit, inputData("Уведіть номер товару: ").c_str());
    strcpy(buff->nameUnit, inputData("Уведіть назву товару: ").c_str());

}

void deleteUnit(Settings *&root)
{
    Settings *buff = nullptr;
    Settings *find = root;

    char searchCode[4] = "";
    cout << endl << "Уведіть код запису, запис якого хочете видалити: ";
    cin >> searchCode;

    while(find != nullptr)
    {
        if (strcmp(searchCode, find->codeUnit) == 0)
        {
            if (find == root)
                root = root->next;
            else
                buff->next = find->next;
            delete(find);
            break;
        }
        buff = find;
        find = find->next;
    }
}
