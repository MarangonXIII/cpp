#include <iostream>
#include <locale.h>
#include <iomanip>
#include <math.h>

/*Elabore uma planilha eletrônica ou um programa de computador que possibilite a execução
das operações matemáticas básicas com números descritos em notação cientí­fica.

O programe deve executar as seguintes operações:

    1) Permitir que o usuário insira dois valores no formato de notação científica;
    2) Permitir que o usuário escolha qual operação será realizada entre os valores informados;
    2.1) Adição
    2.2) Subtração
    2.3) Multiplicação
    2.4) Divisão
    3) Calcular e apresentar o resultado correto da operação selecionada.

O que será avaliado:
    1) Organização das ideias e sequências de cálculos;
    2) Resultados corretos;
    3) O funcionamento correto do programa computacional.
*/
using namespace std;

double num1(double x,double x1,double x2,double x3){
    if(x3==0){
        return 1;
    }else{
        return x1*pow(x2,x3);
    }
}

double num2(double y,double y1,double y2,double y3){
    if(y3==0){
        return 1;
    }else{
        return y1*pow(y2,y3);
    }
}

int main(){
    setlocale(LC_ALL,"portuguese");

    system("cls");

    double x,x1,x2=10,x3;
    double y,y1,y2=10,y3;
    double soma,sub,mult,div;
    int vop;

    cout<<"X1*10^X3\n"<<endl;
    cout<<"Digite o valor de X1: ";
    cin>>x1;

    system("cls");
    cout<<x1<<"*10^X3\n"<<endl;
    cout<<"Digite o valor da elevação para X3: ";
    cin>>x3;
    system("cls");
    cout<<x1<<"*10^"<<x3<<"\n"<<endl;
    system("pause");

    system("cls");
    cout<<"Y1*10^Y3\n"<<endl;
    cout<<"Digite o valor de Y1: ";
    cin>>y1;

    system("cls");
    cout<<y1<<"*10^Y3\n"<<endl;
    cout<<"Digite o valor da elevação para Y3: ";
    cin>>y3;
    system("cls");
     cout<<y1<<"*10^"<<y3<<"\n"<<endl;
    system("pause");

    system("cls");
    cout<<"Valores capturados com sucesso!\n"<<endl;
    system("pause");

    while(vop!=5){

        system("cls");
        cout<<"Menu:\n1 - Soma\n2 - Subtração\n3 - Multiplacação\n4 - Divisão\n5 - Sair do programa\n\nQual a sua escolha? Digite ela aqui: ";
        cin>>vop;

        switch(vop){

            case 1:
                system("cls");
                x=x1*pow(x2,x3);
                cout<<"O Valor de X será: "<<x<<endl;
                y=y1*pow(y2,y3);
                cout<<"O Valor de Y será: "<<y<<endl;
                soma=x+y;
                cout<<"O Valor de X+Y será: "<<soma<<endl;
                cout<<"O Valor de X+Y será: "<<scientific<<setprecision(2)<<soma<<endl<<endl;
                system("pause");
                system("cls");
                break;

            case 2:
                system("cls");
                x=x1*pow(x2,x3);
                cout<<"O Valor de X será: "<<x<<endl;
                y=y1*pow(y2,y3);
                cout<<"O Valor de Y será: "<<y<<endl;
                sub=x-y;
                cout<<"O Valor de X-Y será: "<<sub<<endl;
                cout<<"O Valor de X-Y será: "<<scientific<<setprecision(2)<<sub<<endl<<endl;
                system("pause");
                system("cls");
                break;

            case 3:
                system("cls");
                x=x1*pow(x2,x3);
                cout<<"O Valor de X será: "<<x<<endl;
                y=y1*pow(y2,y3);
                cout<<"O Valor de Y será: "<<y<<endl;
                mult=x*y;
                cout<<"O Valor de X*Y será: "<<mult<<endl;
                cout<<"O Valor de X*Y será: "<<scientific<<setprecision(2)<<mult<<endl<<endl;
                system("pause");
                system("cls");
                break;

            case 4:
                system("cls");
                x=x1*pow(x2,x3);
                cout<<"O Valor de X será: "<<x<<endl;
                y=y1*pow(y2,y3);
                cout<<"O Valor de Y será: "<<y<<endl;
                div=x/y;
                cout<<"O Valor de X/Y será: "<<div<<endl;
                cout<<"O Valor de X/Y será: "<<scientific<<setprecision(2)<<div<<endl<<endl;
                system("pause");
                system("cls");
                break;
        }
    }
    return 0;
}