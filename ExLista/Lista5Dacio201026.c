#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maior(int a, int b){
	return (a+b+abs(a-b))/2;
}

int par (int a){
	if (a %2 == 0){
		return 1;
	} else return 0;
}

int primo (int a){
	int resultado = 0;
	if (a <= 1){
		return 0;
	}
	
	for (int i = 2; i <= a/2; i++){
		if (a%i == 0){
			resultado++;
			break;
		}
	}
	if (resultado == 0){
		return 1;
	} else return 0;
}






int main(int argc, char *argv[]) {
//ex1
printf("\n\n#EX1\n");
int valor_ex1[10], i;
for (i=0; i<10; i++){
	printf("Insira o numero %d: ", i+1);
	scanf("%d", &valor_ex1[i]);
} printf("-----------------------------------------------------\n");

for (i=10; i>0; i--){
	printf("Numero %d: %d\n", i, valor_ex1[i-1]);
} printf("-----------------------------------------------------\n");

for (i=10; i>0; i=i-2){
	double aux;
	if (valor_ex1[i] > valor_ex1[i+1]){
		aux = valor_ex1[i+1];
		valor_ex1[i+1] = valor_ex1[i];
		valor_ex1[i] = aux;
	}
	else if (valor_ex1[i+1] > valor_ex1[i]){
		aux = valor_ex1[i];
		valor_ex1[i] = valor_ex1[i+1];
		valor_ex1[i+1] = aux;
	}
	printf("Numero %d: %d\nNumero %d: %d\n", i, valor_ex1[i], i-1, valor_ex1[i+1]);

}
//



	
//ex2
printf("\n\n#EX2\n");
double valor_ex2;
int expoente = 0;
printf("Insira um valor para ser convertido em notacao cientifica: ");
scanf("%lf", &valor_ex2);

	
	while (valor_ex2 >= 10.0){
		valor_ex2 = valor_ex2/10.0;
		expoente++;
	}
	while (valor_ex2 < 1.0){
		valor_ex2 = valor_ex2*10.0;
		expoente--;
	}
	if (valor_ex2 == 0.0){	
		valor_ex2 = 0.0;
		expoente = 0;
	}

printf("Numero em notacao cientifica: %.3lf x 10^%d\n", valor_ex2, expoente);
//




	

//ex4
int valor_d[10], maior_valor;
printf("#EX4\n");
for(i=0; i<10; i++){
	printf("Insira o numero: ");
	scanf("%d", &valor_d[i]);
}
for (i=0, maior_valor = valor_d[i]; i<10; i++){
	maior_valor = maior(maior_valor, valor_d[i]);
}	
printf("%d eh o maior\n\n", maior_valor);	
//




//ex5
int vetor_ex5[100];
printf("#EX5#\n");
for (i=0; i<100; i++){
	printf("Ensira o %d numero: ", i+1);
	scanf("%d", &vetor_ex5[i]);
}

for (i=0; i<100; i++){
	if ( par(vetor_ex5[i]) == 1){
	printf("O %d valor: %d eh par\n", i+1, vetor_ex5[i]);
	} else if (par(vetor_ex5[i]) == 0) {
		printf("O %d valor: %d nao eh par\n", i+1, vetor_ex5[i]);
	}
}

printf("------------------------------------------\n");

for (i=0; i<100; i++){
	if ( primo(vetor_ex5[i]) == 1){
		printf("O %d valor: %d eh primo\n", i+1, vetor_ex5[i]);
	} else if (primo(vetor_ex5[i]) == 0){
		printf("O %d valor: %d nao eh primo\n", i+1, vetor_ex5[i]);
	}
}
//

	
	
	
	return 0;
}
