#include <iostream>
#include <locale.h>
#include <cmath>
//ED4

using namespace std;

struct Vector3D{
    double x,y,z;
};

double dotProduct(const Vector3D& v1,const Vector3D& v2){
    return v1.x*v2.x+v1.y*v2.y+v1.z*v2.z;
}

double norm(const Vector3D& v) {
    return sqrt(v.x*v.x+v.y*v.y+v.z*v.z);
}

double angleBetweenVectors(const Vector3D& v1,const Vector3D& v2){
    double dot=dotProduct(v1,v2);
    double norm1=norm(v1);
    double norm2=norm(v2);
    
    double cosTheta=dot/(norm1*norm2);
    double theta=acos(cosTheta);

    return theta*180.0/M_PI;
}

int main(){

    setlocale(LC_ALL,"portuguese");

    Vector3D v1,v2;

    cout<<"Digite as coordenadas do vetor 1 (x, y, z): ";
    cin>>v1.x>>v1.y>>v1.z;
    cout<<"Digite as coordenadas do vetor 2 (x, y, z): ";
    cin>>v2.x>>v2.y>>v2.z;

    double angle=angleBetweenVectors(v1,v2);
    cout<<"O ângulo entre os vetores é: "<<angle<<" graus"<<endl;

    return 0;
}
