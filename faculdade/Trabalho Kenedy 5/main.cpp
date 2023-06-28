#include <iostream>
#include <string>

using namespace std;

int main(){

    string letras="abcdefghijklmnopqrstuvwxyz";

    int numeros[26];
    for(int i=0;i<26;i++){
        numeros[i]=i+1;
    }

    int matriz[26][2];
    for(int i=0;i<26;i++){
        matriz[i][0]=letras[i];
        matriz[i][1]=numeros[i];
    }

    for(int i = 0; i < 26; i++){
        cout<<matriz[i][0]<<" "<<matriz[i][1]<<endl;
    }
    return 0;
}
