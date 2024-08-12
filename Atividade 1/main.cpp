#include <iostream>

using namespace std;

int main()
{
   int vetor[5];
    int soma[5];
    int par;
   for( int i; i < 5; i++ ){
     cout << i << " Numero ";
     cin >> vetor[i];
     cout << "\n";
        if(vetor[i]  % 2 == 0){
            soma[i] = vetor[i];
        }else{
            soma[i] = 0;
        }
   }
    par = soma[0] + soma[1] + soma[2] + soma[3] + soma[4];

    cout << "Soma dos numeros pares " << par;

    return 0;
}
