#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	float a, b, c , media;
	
	printf("Digite o primeiro numero\n");
	scanf("%f", &a);
	
	printf("Digite o segundo numero\n");
	scanf("%f", &b);
	
	printf("Digite o terceiro numero\n");
	scanf("%f", &c);
	
	media = (a+b+c)/3;	
	
	printf("A media aritimetica dos tres numeros eh %f", media);
	
	
	
	return 0;
}
