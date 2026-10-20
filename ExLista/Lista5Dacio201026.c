#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
double valor[10];
int i;


for (i=0; i<10; i++){
	printf("Insira o numero %d: ", i+1);
	scanf("%lf", &valor[i]);
} printf("-----------------------------------------------------\n");

for (i=10; i>0; i--){
	printf("Numero %d: %lf\n", i, valor[i-1]);
} printf("-----------------------------------------------------\n");

for (i=10; i>0; i=i-2){
	double aux;
	if (valor[i] > valor[i+1]){
		aux = valor[i+1];
		valor[i+1] = valor[i];
		valor[i] = aux;
	}
	else if (valor[i+1] > valor[i]){
		aux = valor[i];
		valor[i] = valor[i+1];
		valor[i+1] = aux;
	}
	printf("Numero %d: %lf\nNumero %d: %lf\n", i, valor[i], i-1, valor[i+1]);

}



















	return 0;
}