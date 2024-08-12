#include <iostream>

using namespace std;

int main()
{
    int matrix[20][25],trasposta[20][25], matrix2[20][25],matrix3[20][25];
    int m,n;

    cout << "Digite o valor da posicao da matrix: ";
    cin >> m;
    cout << "Digite o valor da coluna da matrix: ";
    cin >> n;
    if(m > 20){
        cout << "erro posicao nao pode ser maior que 20 ";
        return 0;
    }
    else  if(n > 25){
        cout << "erro coluna nao pode ser maior que 25 ";
        return 0;
    }

    matrix[20][25] = matrix[m][n];

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {

            cout << "Digite o valor da marix posicao " << i << " coluna "<< j <<" ";
            cin >> matrix[j][i];
        }
    }
    for(int i =0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "posicao " << i <<" coluna " << j <<"= " << matrix[j][i] <<"\n";
        }

    }
    if(m > n)
    {
        for(int i =0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                trasposta[j][i] = matrix[i][j];

            }
        }

        cout << "Marix transposta: \n";
        for(int i =0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cout << "posicao " << i <<" coluna " << j <<"= " << trasposta[j][i] <<"\n";
            }

        }
    }
    else if( n > m)
    {
        for(int i =0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                trasposta[j][i] = matrix[i][j];

            }
        }

        cout << "Marix transposta: \n";
        for(int i =0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cout << "posicao " << i <<" coluna " << j <<"= " << trasposta[j][i] <<"\n";
            }

        }
    }
    float k;
    cout << "digite um valor para multiplicar a matrix ";
    cin >> k;
    cout << "matrix multiplicada por " << k << "\n";
        {
        for(int i =0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {

                cout << "posicao " << i <<" coluna " << j <<"= " << matrix[j][i] * k <<"\n";

            }
        }
        }
    cout << "Digite uma segunda matrix" <<"\n";
    for(int i =0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {

            cout << "Digite o valor da marix posicao " << i << " coluna "<< j <<" ";
            cin >> matrix2[j][i];
        }
    }
        for(int i =0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            matrix3[j][i] = matrix[j][i] + matrix2[j][i];
        }

    }
      cout <<" Soma das duas matrixes\n";
        for(int i =0; i < m; i++){
        for(int j = 0; j < n; j++)
        {
            cout << "posicao " << i <<" coluna " << j <<"= " << matrix3[j][i] <<"\n";
        }

    }

    return 0;
}
