#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int i,j,total1,total2;

    cout<<"Valor de i: ";
    cin>>i;
    cout<<"Valor de j: ";
    cin>>j;

    total1=i+j;

    cout<<"\nTotal1: "<<total1<<endl;

    if(total1%2==0){
        total2=pow(i,i)-pow(j,j);
    }else{
        total2=pow(i,i)+pow(j,j);
    }
    cout<<"Total2: "<<total2<<endl;
    return 0;
}
