#include <iostream>
#include "ModulesVasylenko.h"
#include <fstream>
#include <string>
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
   int amoun = 0;
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
    char *locale=setlocale(LC_ALL, "");
    //Тестування функції до задачі 10.1
    cout << "Тестування функцiї до задачi 10.1\n";
    string test_cases_out[2][6] ={
                                   {{"Розробник: Василенко Д.М."},
                                   {"м. Кропивницький, Україна"},
                                   {"ЦНТУ, 2022"},
                                   {""},
                                   {"Кількість приголосних літер у слові \"Ого\": 1"},
                                   {"Cлово \"Ого\" відсутнє в краплинці Віталія Іващенка."}},
                                   {{"Розробник: Василенко Д.М."},
                                   {"м. Кропивницький, Україна"},
                                   {"ЦНТУ, 2022"},
                                   {""},
                                   {"Кількість приголосних літер у слові \"слово\": 3"},
                                   {"Cлово \"слово\" відсутнє в краплинці Віталія Іващенка."}}
                                };
    string test_cases_in[2] = {{"Ого"},
                              {"слово"}};
    // Test case#1
    ofstream create_file("InPut1.txt");
    create_file << test_cases_in[0];
    create_file.close();
    char OutFile1[] = "OutPut1.txt";
    char InFile1[] = "InPut1.txt";
    task_10_1(OutFile1,InFile1);
    ifstream read_from_file;
    read_from_file.open("OutPut1.txt");
    string for_compare;
    int fail = 0;
    for (int i = 0; i<6; i++)
    {
        getline(read_from_file, for_compare);
        if (test_cases_out[0][i] == for_compare)
            continue;
        else
            fail++;
    }
    read_from_file.close();
    if(fail==0)
        cout << "Test case #1 is passed!\n";
    else
        cout << "Test case #1 is failed...\n";
    // Test case#2
    fail = 0;
    ofstream create_file2("InPut2.txt");
    create_file2 << test_cases_in[1];
    create_file2.close();
    char OutFile2[] = "OutPut2.txt";
    char InFile2[] = "InPut2.txt";
    task_10_1(OutFile2,InFile2);
    ifstream read_from_file2;
    read_from_file2.open("OutPut2.txt");
    string for_compare2;
    for (int i = 0; i<6; i++)
    {
        getline(read_from_file2, for_compare2);
        if (test_cases_out[1][i] == for_compare2)
            continue;
        else
            fail++;
    }
    read_from_file2.close();
    if(fail==0)
      cout << "Test case #2 is passed!\n";
    else
      cout << "Test case #2 is failed...\n";

    //Тестування функції до задчі 10.2
    cout << "Тестування функцiї до задачi 10.2\n";
    string test_cases2[2][2] = {{{"Ого"},
                                {" Перша і остання літери слова: [О] [о]"},
                                },
                                {{"слово"},
                                {" Перша і остання літери слова: [с] [о]"},
                                }};
   // Test case#1
   string from_file2;
   task_10_2(InFile1,"Ого");
   ifstream read_file;
    read_file.open("InPut1.txt");
    fail = 0;
    for (int i = 0; i<2; i++)
    {
        getline(read_file, from_file2);
        if (test_cases2[0][i] == from_file2)
            continue;
        else
            fail++;
    }
    read_file.close();
    if(fail==0)
        cout << "Test case #1 is passed!\n";
    else
        cout << "Test case #1 is failed...\n";

    // Test case#2

    string from_file2_2;
   task_10_2(InFile2,"слово");
   ifstream read_file2;
    read_file2.open("InPut2.txt");
    fail = 0;
    for (int i = 0; i<2; i++)
    {
        getline(read_file2, from_file2_2);
        if (test_cases2[1][i] == from_file2_2)
            continue;
        else
            fail++;
    }
    read_file2.close();
    if(fail==0)
        cout << "Test case #2 is passed!\n";
    else
        cout << "Test case #2 is failed...\n";

    //Тестування функції до задчі 10.3
    cout << "Тестування функцiї до задачi 10.3\n";
    string test_cases3[2][9] = {{{"Розробник: Василенко Д.М."},
                                {"м. Кропивницький, Україна"},
                                {"ЦНТУ, 2022"},
                                {""},
                                {"Кількість приголосних літер у слові \"Ого\": 1"},
                                {"Cлово \"Ого\" відсутнє в краплинці Віталія Іващенка."},
                                {""},
                                {"Результат виконання функції s_calculation: S = 155.674"},
                                {"Число 3 у двійковому коді: 00000000000000000000000000000011"},
                                },
                                {{"Розробник: Василенко Д.М."},
                                {"м. Кропивницький, Україна"},
                                {"ЦНТУ, 2022"},
                                {""},
                                {"Кількість приголосних літер у слові \"слово\": 3"},
                                {"Cлово \"слово\" відсутнє в краплинці Віталія Іващенка."},
                                {""},
                                {"Результат виконання функції s_calculation: S = 79.6486"},
                                {"Число 2 у двійковому коді: 00000000000000000000000000000010"},
                                }};
    // Test case#1

    string from_file3_1;
   task_10_3(2, 2, 3, OutFile1);
   ifstream read_file3;
    read_file3.open("OutPut1.txt");
    fail = 0;
    for (int i = 0; i<9; i++)
    {
        getline(read_file3, from_file3_1);
        if (test_cases3[0][i] == from_file3_1)
            continue;
        else
            fail++;
    }
    read_file3.close();
    if(fail==0)
        cout << "Test case #1 is passed!\n";
    else
        cout << "Test case #1 is failed...\n";

    // Test case#2

    string from_file3_2;
   task_10_3(5, 3, 2, OutFile2);
   ifstream read_file4;
    read_file4.open("OutPut2.txt");
    fail = 0;
    for (int i = 0; i<9; i++)
    {
        getline(read_file4, from_file3_2);
        if (test_cases3[1][i] == from_file3_2)
            continue;
        else
            fail++;
    }
    read_file4.close();
    if(fail==0)
        cout << "Test case #2 is passed!\n";
    else
        cout << "Test case #2 is failed...\n";
    cin.get();
    return 0;
}
