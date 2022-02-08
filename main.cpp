#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str1[10] = "Ali"; // const char
    char str2[10] = "Veli";
    char str3[10];

    char *str4;

    //  strcpy

    strcpy(str3, str1);

    // cout << "strcpy for str3 to str1 : " << str3 << endl;
    cout << "strcpy for str3 to str1 : " << strcpy(str3, str1) << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "str3[" << i << "] : " << str3[i] << endl;
    }

    cout << endl;

    for (int i = 0; i < 15; i++)
    {
        cout << "str1[" << i << "] : " << *(str1 + i) << endl;
    }

    //  strcat

    strcat(str1, "");
    strcat(str1, str2);

    cout << "strcat result : " << str1 << endl;

    //  strlen

    int len = strlen(str1);

    cout << "Length of str : " << len << endl;

    //  strcmp

    int cmpValue = strcmp(str1, str2);

    if (cmpValue == 0)
    {
        cout << "Str1 is equal to str2" << endl;
    }
    else
    {
        cout << "Str1 is not equal to str2" << endl;
    }

    return 0;
}
