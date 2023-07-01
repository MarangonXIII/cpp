#include <iostream>
#include <locale.h>
#include <cmath>
//ED3

using namespace std;

struct Vector3D{
    double x,y,z;
};

Vector3D rotateAroundX(const Vector3D& v,double angle){
    Vector3D result;
    double cosTheta=cos(angle);
    double sinTheta=sin(angle);

    result.x=v.x;
    result.y=v.y*cosTheta-v.z*sinTheta;
    result.z=v.y*sinTheta+v.z*cosTheta;

    return result;
}

int main(){

    setlocale(LC_ALL,"portuguese");

    double angle;
    Vector3D inputVector;

    cout<<"Digite o valor do ângulo em radianos: ";
    cin>>angle;

    cout<<"\nDigite as coordenadas tridimensionais x1: ";
    cin>>inputVector.x;
    cout<<"Digite as coordenadas tridimensionais x2: ";
    cin>>inputVector.y;
    cout<<"Digite as coordenadas tridimensionais x3: ";
    cin>>inputVector.z;
    
    system("pause");
    system("cls");

    Vector3D rotatedVector=rotateAroundX(inputVector,angle);

    cout<<"As novas coordenadas tridimensionais são: "<<endl;
    cout<<"x1 = "<<rotatedVector.x<<endl;
    cout<<"x2 = "<<rotatedVector.y<<endl;
    cout<<"x3 = "<<rotatedVector.z<<endl;

    return 0;
}
