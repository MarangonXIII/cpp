#include <iostream>
#include <locale.h>

using namespace std;

int fibonacci(int n){
    if(n<=1){
        return n;
    }else{
        int fib_prev = 0;
        int fib_current = 1;
        int fib_next;
        for(int i=2;i<=n;++i){int
            fib_next=fib_prev+fib_current;
            fib_prev=fib_current;
            fib_current=fib_next;
        }
        return fib_current;
    }
}

int main(){

    setlocale(LC_ALL,"portuguese");

    int index;

    cout<<"Digite o índice do elemento da sequência Fibonacci: ";
    cin>>index;

    int fib_number=fibonacci(index);

    cout<<"O elemento da sequência Fibonacci de índice "<<index<<" é: "<< fib_number<<endl;

    return 0;
}
