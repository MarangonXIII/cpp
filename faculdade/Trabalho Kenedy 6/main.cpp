#include <iostream>
#include <locale.h>
#include <iomanip>
#include <math.h>

using namespace std;

float determinante(float m[3][3])
{
    float det =  m[0][0]*(m[1][1]*m[2][2]-m[2][1]*m[1][2])
               - m[0][1]*(m[1][0]*m[2][2]-m[2][0]*m[1][2])
               + m[0][2]*(m[1][0]*m[2][1]-m[2][0]*m[1][1]);
    return det;
}

int main(){

    setlocale(LC_ALL,"portuguese");

    float A[3][3];
    float B[3];
    float X[3];

    cout<<"Entre com os coeficientes do sistema de equações lineares: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"A["<<i+1<<"]["<<j+1<<"] = ";
            cin>>A[i][j];
        }
    }
    cout<<"Entre com os termos independentes do sistema: "<<endl;
    for(int i=0;i<3;i++){
        cout<<"B["<<i+1<<"] = ";
        cin>>B[i];
    }
    float detA=determinante(A);

    if(detA==0){
        cout << "A Regra de Cramer nao pode ser aplicada, pois det(A) = 0."<<endl;
        return 0;
    }
    for(int i=0;i<3;i++){
        float Ai[3][3];
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(k==i){
                    Ai[j][k]=B[j];
                }else{
                    Ai[j][k]=A[j][k];
                }
            }
        }
        X[i]=determinante(Ai)/detA;
    }

    cout<<"As soluções do sistema são: "<<endl;
    cout<<"X1 = "<<X[0]<<endl;
    cout<<"X2 = "<<X[1]<<endl;
    cout<<"X3 = "<<X[2]<<endl;

    return 0;
}
