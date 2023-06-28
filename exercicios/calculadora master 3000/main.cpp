#include <iostream>
#include <iomanip>
#include <locale.h>
#include <math.h>
#include "contas.h"

using namespace std;

int main(){
    
    setlocale(LC_ALL,"portuguese");

    int vop;
    double x,y,z,total,delta,total1,total2;

    while(vop!=9){

        system("cls");
        cout<<"Bem-vindo a calculadora!"<<endl;
        cout<<"\n1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n5-Pot~encia\n6-2º grau\n7-Bhaskara\n8-Fatorial\n9-Sair"<<endl;
        cout<<"\nSelecione uma opção: ";
        cin>>vop;

        switch(vop){
            case 1:
                system("cls");
                cout<<"Digite o valor de X: ";
                cin>>x;
                cout<<"Digite o valor de Y: ";
                cin>>y;
                soma(x,y,total);
                if(y<0){
                    cout<<"\n"<<x<<"+("<<y<<")="<<total;
                }else{
                    cout<<"\n"<<x<<"+"<<y<<"="<<total;
                }
                cout<<"\n"<<endl;
                system("pause");
                break;
            case 2:
                system("cls");
                cout<<"Digite o valor de X: ";
                cin>>x;
                cout<<"Digite o valor de Y: ";
                cin>>y;
                sub(x,y,total);
                if(y<0){
                    cout<<"\n"<<x<<"-("<<y<<")="<<total;
                }else{
                    cout<<"\n"<<x<<"-"<<y<<"="<<total;
                }
                cout<<"\n"<<endl;
                system("pause");
                break;
            case 3:
                system("cls");
                cout<<"Digite o valor de X: ";
                cin>>x;
                cout<<"Digite o valor de Y: ";
                cin>>y;
                mult(x,y,total);
                if(y<0){
                    cout<<"\n"<<x<<"*("<<y<<")="<<total;
                }else{
                    cout<<"\n"<<x<<"*"<<y<<"="<<total;
                }
                cout<<"\n"<<endl;
                system("pause");
                break;
            case 4:
                system("cls");
                cout<<"Digite o valor de X: ";
                cin>>x;
                cout<<"Digite o valor de Y: ";
                cin>>y;
                div(x,y,total);
                if(y<0){
                    cout<<"\n"<<x<<"/("<<y<<")="<<total;
                }else{
                    cout<<"\n"<<x<<"/"<<y<<"="<<total;
                }
                cout<<"\n"<<endl;
                system("pause");
                break;
            case 5:
                system("cls");
                cout<<"Digite o valor de X: ";
                cin>>x;
                cout<<"Digite o valor de Y: ";
                cin>>y;
                potencia(x,y,total);
                cout<<"\n"<<x<<"^"<<y<<"="<<total;
                cout<<"\n"<<endl;
                system("pause");
                break;
            case 6:
                system("cls");
                cout<<"Digite o valor de X: ";
                cin>>x;
                cout<<"Digite o valor de Y: ";
                cin>>y;
                cout<<"Digite o valor de Z: ";
                cin>>z;
                grau2(x,y,z,total);
                if(x<0 && z<0){
                    cout<<"\n"<<"("<<x<<"^2)+("<<y<<"*("<<x<<"))+("<<z<<")="<<total;
                }else if(x<0){
                    cout<<"\n"<<"("<<x<<"^2)+("<<y<<"*("<<x<<"))+"<<z<<"="<<total;
                }else if(z<0){
                    cout<<"\n"<<"("<<x<<"^2)+("<<y<<"*"<<x<<")+("<<z<<")="<<total;
                }else{
                    cout<<"\n"<<"("<<x<<"^2)+("<<y<<"*"<<x<<")+"<<z<<"="<<total;
                }
                cout<<"\n"<<endl;
                system("pause");
                break;
            case 7:
                system("cls");
                cout<<"Digite o valor de X: ";
                cin>>x;
                cout<<"Digite o valor de Y: ";
                cin>>y;
                cout<<"Digite o valor de Z: ";
                cin>>z;
                bhaskara(x,y,z,total,delta,total1,total2);
                if(x!=0){
                    if(delta<0){
                        system("cls");
                        cout<<"Delta = "<<delta<<endl;
                        cout<<"\nDelta < 0"<<endl;
                        cout<<"Não exite solução real.";
                    }else if(delta==0){
                        system("cls");
                        cout<<"Delta == 0"<<endl;
                        cout<<"A conta terá uma raiz real.\n"<<endl;
                        system("pause");
                        system("cls");
                        cout<<"Delta = "<<delta<<endl;
                        cout<<"Raiz real: "<<total;
                    }else{
                        system("cls");
                        cout<<"Delta > 0"<<endl;
                        cout<<"A conta terá duas raizes reais.\n"<<endl;
                        system("pause");
                        system("cls");
                        cout<<"Delta = "<<delta<<endl<<endl;
                        cout<<"Raiz 1: "<<total1<<endl;
                        cout<<"Raiz 2: "<<total2;
                    }
                }else{
                    cout<<"\nNão é uma equação do segundo grau.";
                }
                cout<<"\n"<<endl;
                system("pause");
                break;
            case 8:
                system("cls");
                cout<<"Digite o valor de X: ";
                cin>>x;
                fatorial(x,total);
                if(x<0){
                    cout<<"\nErro: O número deve ser positivo.\n"<<endl;
                }else{
                    cout<<"\n"<<x<<"!="<<total<<endl;
                    cout<<endl;
                }
                system("pause");
                break;
            case 9:
                cout<<"\n\nVocê escolheu sair do programa."<<endl;
                cout<<"\n"<<endl;
                return 0;
            default:
                system("cls");
                cout<<"Opção invalida, escolha outro número.";
                cout<<"\n"<<endl;
                system("pause");
                break;
        }
    }
}