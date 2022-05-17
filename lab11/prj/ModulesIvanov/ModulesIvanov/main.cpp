#include "ModulesIvanov.h"

using namespace std;

void readFromDat(char * fileName, Settings * root)
{
    fstream file(fileName,  ios::binary | ios::in);
    file.close();

    file.open(fileName,  ios::binary | ios::in);

    Settings * buff = root;
    file.read((char*)&*buff, sizeof(Settings));
    while(file.peek() != -1)
    {
        buff->next = new Settings;
        buff = buff->next;
        file.read((char*)&*buff, sizeof(Settings));

    }
    file.close();
}
void writeToDat(char * fileName, Settings * root)
{
    fstream file(fileName, ios::binary | ios::out);
//    file.close();
//    file.open(fileName, ios::binary | ios::out);
    file.seekg(0);
    Settings *buff = root;

    while (buff != nullptr)
    {
        file.write((char*)&*buff, sizeof(Settings));
        buff = buff->next;
    }
    file.close();
}
