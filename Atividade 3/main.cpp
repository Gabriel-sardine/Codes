#include <iostream>

using namespace std;

int main()
{
    float nota[5], media, desvio[5], quadrado[5];

    for( int i; i < 5; i++ ){
        cout << "Digite a nota do " << i << " aluno ";
        cin >> nota[i];
        cout << "\n";
    }

   media = (nota[0] + nota[1] + nota[2] + nota[3] + nota[4])/5;
   cout <<"media " << media << "\n" ;

  for( int i = 0 ; i < 5; i++ ){
        desvio[i] = media - nota[i];
        quadrado[i] = desvio[i] * nota[i];
    }
     for( int i = 0; i < 5; i++ ){
       cout << "desvio padrao do " << i << " aluno " << desvio[i] << "\n";
    }
     for( int i = 0; i < 5; i++ ){
       cout << "desvio ao quadrado do " << i << " aluno " << quadrado[i] << "\n";
    }

    return 0;
}
