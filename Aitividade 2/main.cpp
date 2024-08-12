#include <iostream>

using namespace std;

int main()
{
    int  quantidade[5];
    float valor[5];
    float total[5];

    for(int i = 0; i < 5; i++){
     cout << "digite a quantidade comprada do " << i + 1 << " produto ";
     cin >> quantidade[i];
     cout << " digite o valor ";
     cin >> valor[i];
     cout << "\n";
     total[i] = quantidade[i] * valor[i];

    }
        for(int i = 0; i < 5; i++){
     cout << "Valor da " << i << " compra " << total[i] << "\n";

    }

    return 0;
}
