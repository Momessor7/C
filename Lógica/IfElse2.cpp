#include <stdio.h>
 
int main() {
    float X;
    scanf("%f", &X);
    
    if(X >= 0.00 && X <= 2000.00) {
        printf("Isento\n");
    }else if(X >= 2000.01 && X <= 3000.00) {
        int imposto1 = X * 0.08;
        printf("R$ %.2f", imposto1);
    }else if(X >= 3000.01 && X <= 4500.00) {
        int imposto2 = X * 0.18;
        printf("R$ %.2f", imposto2);
    }else if(X > 4500.00) {
        int imposto3 = X * 0.28;
        printf("R$ %.2f", imposto3);
    }
    return 0;
}
