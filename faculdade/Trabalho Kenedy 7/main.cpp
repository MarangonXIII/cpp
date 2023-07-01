#include <iostream>
#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
//ED1

using namespace std;

int main(){

    setlocale(LC_ALL,"portuguese");

    int i,j;
    int contador=0,linha,coluna,somaprod;
    int matriz[5][5],matriz3[5][5],matriz4[5][5];
    int numero[25];
    int matlin=5,matcol=5;
    char frase[25],frasegrande[25];

    cout<<"Digite uma frase para criptografar: ";
    gets(frase);
    cout<<endl;

    for(i=0;i<25;i++){
        frasegrande[i]=toupper(frase[i]);
    }
    for(i=0;i<strlen(frasegrande); i++){
        numero[i] = ((int)frasegrande[i])-64;
        if(numero[i]==-32){
            numero[i]=0;
        }
        cout<<"A letra ["<<frasegrande[i]<<"] corresponde ao número: "<<numero[i]<<endl;
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            matriz[i][j]=numero[contador];
            contador++;
        }
    }

    cout<<endl;
    system("pause");
    system("cls");

    cout<<"Mensagem não Descriptografada: "<<endl;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            numero[contador]=((int)frasegrande[contador]);
            if(numero[contador]==-32){
                numero[contador]=0;
            }
            cout<<"["<<matriz[i][j]<<"]"<<endl;
        }
        cout<<endl;
    }

    cout<<endl;
    system("pause");
    system("cls");

    double matriz1[][5]={
        {1,0,0,0,0},
        {2,1,0,0,0},
        {0,3,1,0,0},
        {0,0,4,1,0},
        {0,0,0,5,1}
    };
    double matriz2[][5]={
        {1,0,0,0,0},
        {-2,1,0,0,0},
        {6,-3,1,0,0},
        {-24,12,-4,1,0},
        {120,-60,20,-5,1}
    };

    for(linha=0; linha<matlin; linha++){
        for(coluna=0;coluna<matcol;coluna++){
            somaprod=0;
            for(i=0; i<matlin; i++) {
                somaprod+=((matriz[linha][i])*matriz1[i][coluna]);
                matriz3[linha][coluna]=somaprod;
            }
        }
    }

    cout<<"Matriz Criptografada: "<<endl;
    for(linha=0; linha<matlin; linha++){
        for(coluna=0;coluna<matcol;coluna++){
            cout<<"["<<matriz3[linha][coluna]<<"]"<<endl;
        }
        cout<<endl;
    }

    cout<<endl;
    system("pause");
    system("cls");

    for(linha=0; linha<matlin; linha++){
        for(coluna=0; coluna<matcol; coluna++){
            somaprod=0;
            for(i=0; i<matlin; i++){
                somaprod+=((matriz3[linha][i])*matriz2[i][coluna]);
                matriz4[linha][coluna]=somaprod;
            }
        }
    }

    cout<<"Matriz Descriptografada: "<<endl;
    for(linha=0; linha<matlin; linha++){
        for(coluna=0; coluna<matcol; coluna++){
            cout<<"["<<matriz4[linha][coluna]<<"]"<<endl;
        }
        cout<<endl;
    }
    return 0;
}