#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char str1[50], str2[50], str3[50];

    cout << "Digite o primeiro nome ";
    cin >> str1;

    cout << "Digite o segundo nome ";
    cin >> str2;
    cout << "Digite o terceiro nome ";
    cin >> str3;

    if( strcasecmp(str2, str1) >= 1 && strcasecmp(str3, str1) >= 0)
    {

        cout << "O primeiro nome e lexigraficamente menor";
    }
    else if( strcasecmp(str1, str2) >= 1 && strcasecmp(str3, str2) >= 0)
    {

        cout << "O segundo nome e lexigraficamente menor";
    }
    else if( strcasecmp(str1, str3) >= 1 && strcasecmp(str2, str3) >= 0)
    {

        cout << "O terceiro nome e lexigraficamente menor";
    }
    else
    {
        cout << "os tres nomes sao lexigrafigamente iguais";

    }


    return 0;
}
