#include <iostream>
#include <locale.h>
#include <math.h>
#include "sismografico.h"

using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");

    int vop;
    double mag,amp,ene,dist;

    while(vop!=2){
        system("cls");
        cout<<"\t\t\t\t\t     Bem-vindo ao sism�grafo"<<endl;
        cout<<"\n\n 1-Entrar\n 2-Sair\n";
        cout<<"\n Op��o: ";
        cin>>vop;

        switch(vop){

            case 1:
                system("cls");
                cout<<" Digite o valor da amplitude: ";
                cin>>amp;
                cout<<" Digite o valor da dist�ncia das ondas: ";
                cin>>dist;
                cout<<"\n"<<endl;
                system("pause");

                sismografo(amp,dist,mag,ene);

                if(mag<3.5){
                    system("cls");
                    cout<<" Terremotos menores de 3.5 geralmente n�o s�o sentidos, por�m s�o gravados.\n"<<endl;
                    cout<<" Terremoto de Magnitude: "<<mag<<endl;
                    cout<<" Energia liberada durante o terremoto: "<<ene<<endl;
                }else if(mag<=5.4){
                    system("cls");
                    cout<<" Terremotos de 3.5 a 5.4 as vezes s�o sentidos, mas raramente causam danos.\n"<<endl;
                    cout<<" Terremoto de Magnitude: "<<mag<<endl;
                    cout<<" Energia liberada durante o terremoto: "<<ene<<endl;
                }else if(mag<=6.0){
                    system("cls");
                    cout<<" Terremotos de 5.5 a 6.0 no m�ximo causa danos a pr�dios bem construidos, mas pode danificar seriamente casas mal \n constru�das em regi�es pr�ximas.\n"<<endl;
                    cout<<" Terremoto de Magnitude: "<<mag<<endl;
                    cout<<" Energia liberada durante o terremoto: "<<ene<<endl;
                }else if(mag<=6.9){
                    system("cls");
                    cout<<" Terremotos de 6.1 a 6.9 podem ser destrutivos em �reas em torno de at� 100km do epicentro.\n"<<endl;
                    cout<<" Terremoto de Magnitude: "<<mag<<endl;
                    cout<<" Energia liberada durante o terremoto: "<<ene<<endl;
                }else if(mag<=7.9){
                    system("cls");
                    cout<<" Terremotos de 7.0 a 7.9 s�o grandes terremotos. Podem causar s�rios danos numa grande faixa.\n"<<endl;
                    cout<<" Terremoto de Magnitude: "<<mag<<endl;
                    cout<<" Energia liberada durante o terremoto: "<<ene<<endl;
                }else{
                    system("cls");
                    cout<<" Terremotos de 8.0 ou mais s�o enormes terremotos. Podem causar graves danos em muitas �reas mesmo que estejam \n a centenas de quil�metros.\n"<<endl;
                    cout<<" Terremoto de Magnitude: "<<mag<<endl;
                    cout<<" Energia liberada durante o terremoto: "<<ene<<endl;
                }
                cout<<"\n"<<endl;
                system("pause");
                break;

            case 2:
                cout<<"\n\n Voc� escolheu sair do programa!"<<endl;
                return 0;

            default:
                system("cls");
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tN�mero escolhido inv�lido, escolha outro n�mero.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<endl;
                system("pause");
                system("cls");
                break;
        }
    }
    return 0;
}
