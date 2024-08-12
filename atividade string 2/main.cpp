#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str1[50],str2[50];

    cout << "Digite a primeira string ";
    cin >> str1;
    cout << "Digite a segunda string ";
    cin >> str2;
    cout << "primeira sting " << str1 << "\n";
    cout << "segunda srting " << str2 << "\n";
    cout << "segunda letra da primeira string " << str1[1] <<"\n";
    cout << "penultima letra da segunda string " << str2[strlen(str2) - 2];


    return 0;
}

