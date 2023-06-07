#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");

    int vop;
    double T,tempoCorpo,tempoAmb,tempo1,tempo2;

    while(vop!=2){
        system("cls");
        cout<<"\t\t\t\t\tBem-vindo ao programa de resfriamento"<<endl;
        cout<<"\n\n 1-Entrar\n 2-Sair\n";
        cout<<"\n Opção: ";
        cin>>vop;

        switch(vop){
            case 1:
                system("cls");
                cout<<"Insira o valor da temperatura ambiente: ";
                cin>>tempoAmb;
                cout<<"Insira o valor da temperatura do corpo: ";
                cin>>tempoCorpo;
                cout<<"Insira o valor do tempo 1: ";
                cin>>tempo1;
                cout<<"Insira o valor do tempo 2: ";
                cin>>tempo2;
                T=tempoAmb+(54*(pow(3,((-1/90)*tempo1))));
                tempo1=tempo1+0.1;
                cout<<T<<endl;
                system("pause");
                break;

            case 2:
                cout<<"\n\n Você escolheu sair do programa!"<<endl;
                return 0;

            default:
                system("cls");
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tNúmero escolhido inválido, escolha outro número.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<endl;
                system("pause");
                system("cls");
                break;
        }
    }
    return 0;
}
