#include <iostream>

using namespace std;

int main()
{

    int vetor1[10],vetor2[10];

    for(int i =0; i < 10; i++)
    {
        cout << "digite o valor do  " << i << " ";
        cin >> vetor1[i];
        if(i % 2 == 0)
        {
            vetor2[i] = vetor1[i] * 5;

        }
        else
        {
            vetor2[i] = vetor1[i] + 5;
        }


    }

    for(int i =0; i < 10; i++)
    {
        cout << "Valor do Vetor 1 posicao " << i << "= " << vetor1[i]<< "\n";

    }
    for(int i =0; i < 10; i++)
    {
        cout << "Valor do Vetor 2 posicao " << i << "= " << vetor2[i]<< "\n";

    }


    return 0;
}
