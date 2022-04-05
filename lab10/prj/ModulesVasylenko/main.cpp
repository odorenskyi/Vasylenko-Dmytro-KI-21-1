#include "ModulesVasylenko.h"
#include <cmath>
#include <fstream>
#include <string>
#include <ctime>
#include <bitset>
#include <vector>
#include <math.h>
#include <cmath>
#ifndef M_PI
#define M_PI (3.14159265358979323846)
#endif

using namespace std;

double s_calculation(double x, double y, double z)
{
    double S;
    S = z + M_PI*((pow((2*z + 1), 2) - sqrt(abs(y - 0.5*z))/sqrt(cos(z + y*z)+ pow(x, 2))));
    return S;
}


float Temperature9_2(float t)
   {
       return (5*(t-32))/9;
   }

int Binary9_3(int N)
{
    int result = 0;
    bool flag = false;
    for (int n=sizeof(int)*8-1; n>-1; n--)
    {
        if((N>>n)&1)
            if(!flag)
                flag = true;
        if (flag)
        {
            if((N>>4)&1)
                result += ((N>>n)&1)? 1 : 0;
            else
                result += ((N>>n)&1)? 0 : 1;
        }
    }
    return result;
}
void task_10_1(char *OutFile,char *InFile)
{
   ofstream outFile;
   outFile.open(OutFile);
   outFile << "Розробник: Василенко Д.М.\n"
              "м. Кропивницький, Україна\n"
              "ЦНТУ, 2022\n";

   ifstream inFile;
   inFile.open(InFile);
   string fromFile;
   inFile >> fromFile;
   inFile.close();
   int amount = 0;
   for (int i=0; i<fromFile.length(); i++)
   {
        if (!(fromFile[i] == 'А' || fromFile[i] == 'а' || fromFile[i] == 'Е' || fromFile[i] == 'е' || fromFile[i] == 'Є' || fromFile[i] == 'є' || fromFile[i] == 'І' || fromFile[i] == 'і' || fromFile[i] == 'Ї' || fromFile[i] == 'ї' || fromFile[i] == 'О' || fromFile[i] == 'о' || fromFile[i] == 'У' || fromFile[i] == 'у' || fromFile[i] == 'Ю' || fromFile[i] == 'ю' || fromFile[i] == 'И' || fromFile[i] == 'и'))
       amount++;
   }
   outFile << "\nКількість приголосних літер у слові \"" << fromFile << "\": " << amount << endl;

   string kraplina = "Про себе не кажи недобрих слів,"
                     "Бо має сказане таємну силу."
                     "Кажи:""Я сильний, впевнений, щасливий!"
                     "І буде сам так, як ти хотів!";

    if(kraplina.find(fromFile) != string::npos)
        outFile << "Cлово \"" << fromFile << "\" є в краплинці Віталія Іващенка." << endl;
    else
        outFile << "Cлово \"" << fromFile << "\" відсутнє в краплинці Віталія Іващенка." << endl;
    outFile.close();
}

void task_10_3(float x, float z, float b, char *OutFile)
{
   ofstream outFile;
   outFile.open(OutFile, ios::app);

   outFile << "\nРезультат виконання функції s_calculation: S = " << s_calculation(x,z,b) << endl;


   if (b>0)
        outFile<< "Число " << b << " у двійковому коді: " << bitset<32>(b) << endl;
    else
        outFile<< "Число " << b << " не натуральне." << endl;
   outFile.close();
}

