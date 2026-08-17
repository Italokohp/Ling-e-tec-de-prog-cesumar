#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int base, altura;
	float area;
	
	
	printf("Insira o valor da base do triangulo\n");
	scanf("%d", &base);
	
	printf("Insira o valor da altura do triangulo\n");
	scanf("%d", &altura);

	area = (base*altura)/2;
	printf("A area do triangulo eh %f\n", area);

	return 0;
}
