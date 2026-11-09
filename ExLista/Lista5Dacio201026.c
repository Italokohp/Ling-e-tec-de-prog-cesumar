#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maior(int a, int b){
	return ( a + b + (abs (a-b)) / 2);
}


int main(int argc, char *argv[]) {
int valor_a[10], i;

//ex1
/*
for (i=0; i<10; i++){
	printf("Insira o numero %d: ", i+1);
	scanf("%d", &valor_a[i]);
} printf("-----------------------------------------------------\n");

for (i=10; i>0; i--){
	printf("Numero %d: %d\n", i, valor_a[i-1]);
} printf("-----------------------------------------------------\n");

for (i=10; i>0; i=i-2){
	double aux;
	if (valor_a[i] > valor_a[i+1]){
		aux = valor_a[i+1];
		valor_a[i+1] = valor_a[i];
		valor_a[i] = aux;
	}
	else if (valor_a[i+1] > valor_a[i]){
		aux = valor_a[i];
		valor_a[i] = valor_a[i+1];
		valor_a[i+1] = aux;
	}
	printf("Numero %d: %d\nNumero %d: %d\n", i, valor_a[i], i-1, valor_a[i+1]);

}
*/

//ex4
int valor_d[10], maior_valor;
for(i=0; i<10; i++){
	printf("Insira o numero: ");
	scanf("%d", &valor_d[i]);
}
for (i=0, maior_valor = valor_d[i]; i<10; i++){
	maior_valor = maior(maior_valor, valor_d[i]);
}	
printf("%d eh o maior", maior_valor);	
	
	
	return 0;
}
