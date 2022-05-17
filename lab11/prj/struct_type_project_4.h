#ifndef STRUCT_TYPE_PROJECT_4_H_INCLUDED
#define STRUCT_TYPE_PROJECT_4_H_INCLUDED


struct Settings
{
    char nameUnit[256] = "";
    char numSelection[4] = "";
    char nameSelection[256] = "";
    char codeUnit[4] = "";
    Settings *next = nullptr;
};


#endif // STRUCT_TYPE_PROJECT_4_H_INCLUDED
