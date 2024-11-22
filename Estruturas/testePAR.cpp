#include <stdio.h>
#include <math.h>
 
int main() {
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    double delta = pow(B, 2) - 4 * A * C;
    double R1, R2;
    
    if(A == 0 || delta < 0) {
        printf("Impossivel calcular\n");
    } else {
        R1 = (-B + sqrt(delta)) / (2 * A);
        R2 = (-B - sqrt(delta)) / (2 * A);
    }
    printf("R1 = %.5lf\n", R1);
    printf("R2 = %.5lf\n", R2);
    return 0;
}
