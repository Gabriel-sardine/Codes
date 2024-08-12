#include <iostream>

using namespace std;

int main()
{
    int par[10];
    int res = 0, maior1 = 0, maior2 =-1 ;

    for(int i = 0; i < 10; i++)
    {

        cout << " Digite o " << i << " valor " ;
        cin >> par[i];
        cout << "\n";


    }
    for(int i = 0; i < 10; i++)
    {
        if( par[i] % 2 == 0 && i % 2 != 0)
        {
            res =res + par[i];
        }
    }
    for(int i = 0; i < 10; i++)
    {
        if(par[i] > maior1 )
        {
            maior1 = par[i];
        }
            if(par[i] < maior1 && par[i] > maior2 )
        {
            maior2 = par[i];
        }
    }

    cout << "Soma dos numeros pares em posicoes impapres " << res << "\n";


        if(maior1 == 0 )
        {
            cout <<"maior valor = 0"  << "\n";
        }else{
            cout<<"maior valor = " << maior1 << "\n";
        }
            if(maior2 == -1 )
        {
            cout <<"Segundo maior valor = -1"  << "\n";
        }else{
            cout<<"Segundo maior valor = " << maior2 << "\n";
        }



    return 0;
}
