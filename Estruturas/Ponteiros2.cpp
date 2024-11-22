#include <stdlib.h>
#include <stdio.h>

int main(){
    int a=10, b=20;           //Declara a e b como variaveis do tipo inteiro
    int *p, *q;         //Declara p e q como variaveis do tipo ponteiro

    p=&a;       //p recebe endereco valor 10
    q=&b;       //q recebe endereco valor 20
    

    printf("%p %d \n", &a, a);   //Mostra o endere�o de "a" depois o valor  "10"
    printf("%p %d \n", &b, b);  //Mostra o endere�o de "b" depois o valor  "20"
    printf("%p %p %d \n", &p, p, *p);   //Mostra endere�o de "p" ,  printa o endere�o alocado em *p e depois o valor "20";
    printf("%p %p %d \n", &q, q, *q);   //Mostra endere�o de "q", printa o endere�o alocado em *q e depois o valor "20";

    return 0;
}
