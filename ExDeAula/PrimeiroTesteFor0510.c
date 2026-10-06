#include <stdio.h>
#include <stdlib.h>

/* faça um programa que leia 10 valores inteiros, e mostre na tela o maior entre
os 5 primeiros, e o menor entre os 5 restantes */

int comparamenor (int a, int b){
	if (a > b) return b;
	else return a;
}
int comparamaior (int a, int b){
	if (a > b) return a;
	else return b;	
}


int main(int argc, char *argv[]) {	
	int valores [10];
	int maior, menor, i;
	
	printf("aaaaaaaaa\n");
	//for(inicialização; verificação; incremento)
	for( i=0; i<10; i++ ){
		scanf("%d", &valores[i]);
	}
		maior = valores[0];
		for( i=1; i<5; i+=2 ){
			int maior_temp = comparamaior(valores[i], valores[i+1]);
			maior = comparamaior(maior_temp, maior);
	}
		menor = valores[5];
		for( i=6; i<9; i+=2 ){
			int menor_temp = comparamenor(valores[i], valores[i+1]);
			menor = comparamenor(menor_temp, menor);
		}
	
	printf(" maior: |%d|\n menor: |%d|", maior, menor);
	
	return 0;
}
