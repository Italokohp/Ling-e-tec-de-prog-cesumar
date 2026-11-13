#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//
int ordenacao(int valor_ex1[]) {
    int a, i, j, aux;

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            if (valor_ex1[j] < valor_ex1[j + 1]) {
                aux = valor_ex1[j];
                valor_ex1[j] = valor_ex1[j + 1];
                valor_ex1[j + 1] = aux;
            	a++;
			}
        }
    }
    
    return a;
}
//







//
int binario_calculo(int a){
	int binario = 0, resto, base = 1;
	if (a == 0) {
        return 0;
    } else {
        while (a > 0) {
            resto = a % 2;
            binario = binario + resto * base;
            base = base * 10;
            a = a / 2;
        } 
        return binario;
    }

}
//








//
int notacao_cientifica(double aa, double *resultadoa, int *resultadob){
int expoente = 0;
	while (aa >= 10.0){
		aa = aa/10.0;
		expoente++;
	}
	while (aa < 1.0){
		aa = aa*10.0;
		expoente--;
	}
	if (aa == 0.0){	
		aa = 0.0;
		expoente = 0;
	}

     *resultadoa = aa;
     *resultadob = expoente;
}
//






//
int maior(int a, int b){
	return (a+b+abs(a-b))/2;
}
//






//
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
	
	int i;
	for (i = 2; i <= a/2; i++){
		if (a%i == 0){
			resultado++;
			break;
		}
	}
	if (resultado == 0){
		return 1;
	} else return 0;
}
//







//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(int argc, char *argv[]) {


//ex1
printf("#EX1\n");
int valor_ex1[10], i, a;
for (i=0; i<10; i++){
	printf("Insira o numero %d: ", i+1);
	scanf("%d", &valor_ex1[i]);
} printf("-----------------------------------------------------\n");

for (i=10; i>0; i--){
	printf("Numero %d: %d\n", i, valor_ex1[i-1]);
} printf("-----------------------------------------------------\n");

a = ordenacao(valor_ex1);


for (i = 0; i < 10; i++){
	printf("Numero %d: %d\n", i+1, valor_ex1[i] );
}
//




//ex2
printf("\n\n#EX2\n");
int expoente;
double valor_ex2, valor_novo;
printf("Insira um valor para ser convertido em notacao cientifica: ");
scanf("%lf", &valor_ex2);

notacao_cientifica(valor_ex2, &valor_novo, &expoente);

printf("Numero em notacao cientifica: %.3lf x 10^%d\n", valor_novo, expoente);
//






//ex3
int valor_ex3;
printf("\n\n#EX3\n");
printf("Digite um numero decimal inteiro (max: 1023): ");
scanf("%d", &valor_ex3);

if (valor_ex3 > 1023){
	printf("Valor ultrapassa o num max de 1023\n");
} else {
	printf("O numero %d em binario eh: %d\n", valor_ex3, binario_calculo(valor_ex3));
}
//







//ex4
int valor_ex4[10], maior_valor;
printf("\n\n#EX4\n");
for(i=0; i<10; i++){
	printf("Insira o %d numero: ", i+1);
	scanf("%d", &valor_ex4[i]);
}
for (i=0, maior_valor = valor_ex4[i]; i<10; i++){
	maior_valor = maior(maior_valor, valor_ex4[i]);
}	
printf("%d eh o maior\n\n", maior_valor);	
//







//ex5
int vetor_ex5[100];
printf("\n\n#EX5\n");
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
