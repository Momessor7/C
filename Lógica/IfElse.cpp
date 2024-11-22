#include <stdio.h>

int main() {
	int X, Y, A, B;
	
	scanf("%d", &X);
	scanf("%d", &Y);
	scanf("%d", &A);
	scanf("%d", &B);
	
	if(X*Y == A/B) {
		printf("Igualzin");
	} else(X*Y != A/B); {
		printf("No");
	}
}
