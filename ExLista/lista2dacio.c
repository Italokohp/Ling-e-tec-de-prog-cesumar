#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	
	//ex1
	int idade, anonasc;
	printf("Digite a idade: ", idade);
	scanf("%d", &idade);
	
	anonasc = 2026 - idade;  //2026 eh o ano atual, subtraido pela idade para saber o ano de nascimento
	printf("O ano de nascimento eh %d", anonasc);
	
	
	//ex2
	float velk, velm;
	printf("Digite a velocidade (em km/h): ");
	scanf("%f", &velk);
	
	printf("Velocidade em m/s: %f", velk/3.6);
	
	
	//ex3
	float real,dolar;
	printf("Digite a quantia em real: ");
	scanf("%f", &real);
	printf("Digite a cotacao do dolar: ");
	scanf("%f", &dolar);
	
	printf("$%f", real/dolar);
	
	
	//ex6
	int nu1;
	
	printf("Insira numero: ");
	scanf("%d", &nu1);
	
	printf("Numero: %d\n", nu1);
	printf("Antecessor: %d\n", nu1-1);
	printf("Sucessor: %d", nu1+1);
	

	//ex10
	int a,b,c, nmaior, nmaiornc;
	
	printf("insira tres valores:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	nmaior = (a+b+abs(a-b))/2;
	nmaiornc = (nmaior+c+abs(nmaior-c))/2;
	
	printf("O maior entre os tres eh: %d", nmaiornc);
	
	
	
	return 0;
}
