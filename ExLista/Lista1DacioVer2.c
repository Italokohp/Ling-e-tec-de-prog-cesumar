#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {

	char escolhaexercicio;
	int a,b; //ex1
	double c; //ex2
	int n, resultado, bit64, bit32, bit16, bit8, bit4, bit2, bit1; //ex3
	float salario, vendas, recebe; //ex4
	int n1,n2,n3,n4; //ex5
	int idade; //ex6
	float pi, volume, raio; //ex7
	int x1,x2,y1,y2; //ex8
		float diste; //ex8

	printf("Escolha o Exercicio (1-8) ");
	scanf("%c", &escolhaexercicio);
	
	
	switch (escolhaexercicio){
		case '1':
			printf("EX1\n"); //dois valores que se invertem
			scanf("%d %d", &a, &b);
			printf("%d %d\n", b, a); 
			break;
		
		case '2':
			printf("EX2\n");
			scanf("%lf", &c);
			printf("%e\n", c); //valor q se transforma em notação cientifica
			break;
		
		case '3':
			printf("EX3\n"); // calculadora de decimal pra binario
			printf("Digite o valor n\n");
			scanf("%d", &n);
	
	
			bit64 = n%2;
			resultado = n/2;
	
			bit32 = resultado%2;
			resultado /= 2;
	
			bit16 = resultado%2;
			resultado /= 2;
	
			bit8 = resultado%2;
			resultado /= 2;
	
			bit4 = resultado%2;
			resultado /= 2;
	
			bit2 = resultado%2;
			resultado /= 2;
	
			bit1 = resultado%2;
	
			printf("O numero %d em binario eh %d%d%d%d%d%d%d\n", n, bit1, bit2, bit4, bit8, bit16, bit32, bit64);
			break;
		
		case '4':
			printf("EX4\n"); // recebe o salario e a qntd de vendas e faz quanto ele recebe com a comissao de 15% das vendas
			printf("Insira o salario\n");
			scanf("%f", &salario);
	
			printf("Insira o valor total das vendas\n");
			scanf("%f", &vendas);
	
			recebe = ((vendas*0.15) + salario);
			printf("Total a receber = %.2f", recebe);
			break;
		
		case '5':
			printf("EX5\n"); // recebe 4 valores e faz soma media e produtorio
			printf("Digite os 4 valores\n");
			scanf("%d", &n1);
			scanf("%d", &n2);
			scanf("%d", &n3);
			scanf("%d", &n4);
	
			printf("Soma = %d\n", n1+n2+n3+n4);
			printf("Media = %d\n", (n1+n2+n3+n4)/4);
			printf("Produtorio = %d", n1*n2*n3*n4);
			break;
			
		case '6':
			printf("EX6\n"); // calculo de anos meses e dias baseado na idade
			printf("Insira a idade: ");
			scanf("%d", &idade);
	
			printf("%d Anos, %d Meses e %d Dias", idade, idade*12, idade*365); 
			break;
			
		case '7':
			printf("EX7\n"); // calculadora do raio do circulo
			pi = 3.14159;

			printf("Digite o valor do raio\n");
			scanf("%f", &raio);
	
			volume = ((4.0/3)*pi*(pow(raio, 3)));
			printf("Volume = %f", volume);
			break;
			
		case '8':
			printf("EX8\n"); // recebe dois pares de x,y e faz a distancia euclidiana
			printf("Insira p1(x1,y1)\n");
			scanf("%d", &x1);
			scanf("%d", &y1);
	
			printf("Insira p2(x2,y2)\n");
			scanf("%d", &x2);
			scanf("%d", &y2);
	
			diste = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2)); // formula da distancia euclidiana
			printf("Distancia eh %f", diste);
			break;		
			
	}

	return 0;
}
