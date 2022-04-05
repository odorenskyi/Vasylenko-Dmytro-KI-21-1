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
    in_File << "\n Перша і остання літери слова: " << "[" << slovo[0] << "]" << " [" << lastChar << "]" << endl;
    time_t times = time(NULL);
    in_File << "Час дозапису :"  << asctime (localtime( &times )) << endl;
    in_File.close();

}
using namespace std;

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char in_file[] = "InPut.txt";
    char out_file[] = "OutPut.txt";

    cout << "Введіть слово українською мовою: ";
    string slovo;
    cin >> slovo;
    ofstream in_slovo("InPut.txt");
    in_slovo << slovo;
    in_slovo.close();
    task_10_1(out_file, in_file);
    task_10_2(in_file, slovo);
    float x, y, z, b;
    cout << "Введіть число х:";
    cin >> x;
    cout << "Введіть число y:";
    cin >> y;
    cout << "Введіть число z:";
    cin >> z;
    cout << "Введіть число b:";
    cin >> b;
    task_10_3(x, z, b, out_file);
    cout << "Перевірте вміст файлів \"InPut.txt\" та \"OutPut.txt\"!";
    cin.get();
    cin.get();
    return 0;
}

