#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
    char str1[50], str2[50];
    int mod=0;

    cout << "Digite uma string: ";
    cin >> str1;
    strcpy(str2,str1);

    for(int i = 0; i <= 50; i++)
    {
        if(str1[i] == 65)
        {
            str2[i] = 66;
            mod++;
        }
        else if(str1[i] == 97)
        {
            str2[i] = 98;
            mod++;
        }



    }
    cout << "String normal: " << str1 <<"\n String modificada: " << str2 <<"\n Caracteres modificados" << mod;
    return 0;
}
