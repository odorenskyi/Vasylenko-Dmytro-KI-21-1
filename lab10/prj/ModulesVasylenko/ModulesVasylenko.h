#ifndef MODULESVASYLENKO_H_INCLUDED
#define MODULESVASYLENKO_H_INCLUDED
#include <string>


using namespace std;
using byte = unsigned char;

double s_calculation(double x, double y, double z);

void task_22();

struct task_9_1
{
    short bonus = 0;
    double pay = 0;
};

task_9_1 Bonus9_1(double price);
float Temperature9_2(float t);
int Binary9_3(int N);

void task_10_1(char *OutFile,char *InFile);
void task_10_2(char *OutInFile, string slovo);
void task_10_3(float x, float z, float b, char *OutFile);

#endif // MODULESVASYLENKO_H_INCLUDED
