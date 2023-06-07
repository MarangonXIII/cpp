#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Passo 1: Criar uma string com as letras do alfabeto em ordem.
    string letras = "abcdefghijklmnopqrstuvwxyz";

    // Passo 2: Criar um array com os numeros de 1 a 26 em ordem.
    int numeros[26];
    for (int i = 0; i < 26; i++) {
        numeros[i] = i + 1;
    }

    // Passo 3: Criar uma matriz com as letras do alfabeto nas linhas e os numeros correspondentes nas colunas.
    int matriz[26][2];
    for (int i = 0; i < 26; i++) {
        matriz[i][0] = letras[i];
        matriz[i][1] = numeros[i];
    }

    // Exibir a matriz
    for (int i = 0; i < 26; i++) {
        cout << matriz[i][0] << " " << matriz[i][1] << endl;
    }

    return 0;
}
