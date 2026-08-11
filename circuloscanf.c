#include <stdio.h>
#include <stdlib.h>
#include <math.h> 



int main(int argc, char *argv[]) {

	float raio, areacirculo;
	
	printf("Insira o raio do circulo\n");
	scanf("%f", &raio);


	areacirculo = M_PI* pow(raio,2); // pow = elevar o numero
	printf("A area do circulo de raio %f eh %f\n \n", raio, areacirculo);
	
	float altura, basemaior, basemenor, areatrapezio;
	
	printf("Agora, insira a altura, base maior e base menor do trapezio\n");
	scanf("%f, %f, %f", &altura, &basemaior, &basemenor);
	
	
	areatrapezio = ((basemaior+basemenor)*altura)/2;
	printf("A area do trapezio eh %f", areatrapezio);
	
	
	
	
	
	return 0;
}
