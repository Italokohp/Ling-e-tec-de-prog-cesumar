#include <stdio.h>
#include <stdlib.h>

/* faça um programa que leia 10 valores inteiros, e mostre na tela o maior entre
os 5 primeiros, e o menor entre os 5 restantes */

int compara (int a, int b){
	if (a > b) return b;
	else return a;	
}


int main(int argc, char *argv[]) {	
	int valores [10];
	int maior, menor, i;
	
	printf("aaaaaaaaa\n");
	//for(inicialização; verificação; incremento)
	for( i=0; i<10; i++){
		scanf("%d", &valores[i]);
	}
	
		for( i=0; i<10; i++){
		maior = compara(valores[], valores[])
	}
	
	for( i=9; i>=0; i--){
		printf("%d", valores[i]);
	}
	

	
	

	
	
	 
	return 0;
}
