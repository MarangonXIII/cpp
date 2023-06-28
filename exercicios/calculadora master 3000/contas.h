#ifndef CONTAS_H_INCLUDED
#define CONTAS_H_INCLUDED

void soma(double &x,double &y,double &total){
    total=x+y;
}

void sub(double &x,double &y,double &total){
    total=x-y;
}

void mult(double &x,double &y,double &total){
    total=x*y;
}

void div(double &x,double &y,double &total){
    total=x/y;
}

void potencia(double &x,double &y,double &total){
    total=pow(x,y);
}

void grau2(double &x,double &y,double &z,double &total){
    total=pow(x,2)+(y*x)+z;
}

void bhaskara(double &x,double &y,double &z,double &total,double &delta,double &total1,double &total2){
    if(x!=0){
        delta=(y*y)-(4*x*z);

        if(delta<0){

        }else if(delta==0){
        total=(-y)/(2*x);

        }else{
            total1=((-y)+(sqrt(delta)))/(2*x);
            total2=((-y)-(sqrt(delta)))/(2*x);
    }
    }
}

void fatorial(double &x,double &total){
    total=1;
    for(int i=1;i<=x;++i){
        total=total*i;
    }
}

#endif // CONTAS_H_INCLUDED
