#ifndef MODULESIVANOV_H_INCLUDED
#define MODULESIVANOV_H_INCLUDED

#include "struct_type_project_4.h"

#include <iostream>
#include <fstream>

using namespace std;

void readFromDat(char * fileName, Settings * root);
void writeToDat(char * fileName, Settings * root);

#endif // MODULESIVANOV_H_INCLUDED
