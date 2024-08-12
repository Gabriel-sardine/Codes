#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
    char cargo[1];
    float salario1,salario2, dif;


    cout << "Informe o seu cargo.\n G para gerente,\n E para engenheiro,\n T para tecnico\n ";
    cin >> cargo;
    cout << "Informe seu salario: ";
    cin >> salario1;

    if( cargo[0] == 71 || cargo[0] == 103)
    {
        salario2 = salario1 + salario1 * 0.1;
        dif = salario2 - salario1;
        cout << "Antigo salario: " << salario1 << "\n";
        cout << "Valor do novo salario: " << salario2 << "\n";
        cout << "Diferenca dos salarios: "<< dif;
    }
    else if( cargo[0] == 69 || cargo[0] == 101)
    {
        salario2 = salario1 + 0.2 * salario1;
        dif = salario2 - salario1;
        cout << "Antigo salario: " << salario1 << "\n";
        cout << "Valor do novo salario: " << salario2 << "\n";
        cout << "Diferenca dos salarios: "<< dif;
    }
    else if( cargo[0] == 84 || cargo[0] == 116)
    {
        salario2 = salario1 + 0.3 * salario1;
        dif = salario2 - salario1;
        cout << "Antigo salario: " << salario1 << "\n";
        cout << "Valor do novo salario: " << salario2 << "\n";
        cout << "Diferenca dos salarios: "<< dif;
    }
    else
    {
        salario2 = salario1 +  0.05 * salario1;
        dif = salario2 - salario1;
        cout << "Antigo salario: " << salario1 << "\n";
        cout << "Valor do novo salario: " << salario2 << "\n";
        cout << "Diferenca dos salarios: "<< dif;
    }
    return 0;
}
