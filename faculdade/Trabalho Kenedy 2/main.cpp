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
        cout<<"\t\t\t\t\t     Bem-vindo ao sismôgrafo"<<endl;
        cout<<"\n\n 1-Entrar\n 2-Sair\n";
        cout<<"\n Opção: ";
        cin>>vop;

        switch(vop){

            case 1:
                system("cls");
                cout<<" Digite o valor da amplitude: ";
                cin>>amp;
                cout<<" Digite o valor da distância das ondas: ";
                cin>>dist;
                cout<<"\n"<<endl;
                system("pause");

                sismografo(amp,dist,mag,ene);

                if(mag<3.5){
                    system("cls");
                    cout<<" Terremotos menores de 3.5 geralmente não são sentidos, porém são gravados.\n"<<endl;
                    cout<<" Terremoto de Magnitude: "<<mag<<endl;
                    cout<<" Energia liberada durante o terremoto: "<<ene<<endl;
                }else if(mag<=5.4){
                    system("cls");
                    cout<<" Terremotos de 3.5 a 5.4 as vezes são sentidos, mas raramente causam danos.\n"<<endl;
                    cout<<" Terremoto de Magnitude: "<<mag<<endl;
                    cout<<" Energia liberada durante o terremoto: "<<ene<<endl;
                }else if(mag<=6.0){
                    system("cls");
                    cout<<" Terremotos de 5.5 a 6.0 no máximo causa danos a prédios bem construidos, mas pode danificar seriamente casas mal \n construídas em regiões próximas.\n"<<endl;
                    cout<<" Terremoto de Magnitude: "<<mag<<endl;
                    cout<<" Energia liberada durante o terremoto: "<<ene<<endl;
                }else if(mag<=6.9){
                    system("cls");
                    cout<<" Terremotos de 6.1 a 6.9 podem ser destrutivos em áreas em torno de até 100km do epicentro.\n"<<endl;
                    cout<<" Terremoto de Magnitude: "<<mag<<endl;
                    cout<<" Energia liberada durante o terremoto: "<<ene<<endl;
                }else if(mag<=7.9){
                    system("cls");
                    cout<<" Terremotos de 7.0 a 7.9 são grandes terremotos. Podem causar sérios danos numa grande faixa.\n"<<endl;
                    cout<<" Terremoto de Magnitude: "<<mag<<endl;
                    cout<<" Energia liberada durante o terremoto: "<<ene<<endl;
                }else{
                    system("cls");
                    cout<<" Terremotos de 8.0 ou mais são enormes terremotos. Podem causar graves danos em muitas áreas mesmo que estejam \n a centenas de quilômetros.\n"<<endl;
                    cout<<" Terremoto de Magnitude: "<<mag<<endl;
                    cout<<" Energia liberada durante o terremoto: "<<ene<<endl;
                }
                cout<<"\n"<<endl;
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
