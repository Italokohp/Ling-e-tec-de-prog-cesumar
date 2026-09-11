#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	
	char escolhaexercicio;
	printf("Escolha o Exercicio: (1-10) (para ex10 escreva 0) ");
	scanf("%c", &escolhaexercicio);
	
	//ex1
	int idade, anonasc;
	//ex2
	float velk, velm;
	//ex3
	float real,dolar;
	//ex4
	int cel, fah;
	//ex5 
	float grau, radiano, pi;
	//ex6
	int nu1;
	//ex7
	float quant = 780000;
	//ex8
	int dur;
	//ex9
	float tempo, velme, dist;
	//ex10
	int a,b,c, nmaior, nmaiornc;
	
	switch (escolhaexercicio){
		case '1':
			printf("EX1\n");
			printf("Digite a idade: ", idade);
			scanf("%d", &idade);
	
			anonasc = 2026 - idade;  //2026 eh o ano atual, subtraido pela idade para saber o ano de nascimento
			printf("O ano de nascimento eh %d", anonasc);
			break;
		
		case '2':
			printf("EX2\n");
			printf("Digite a velocidade (em km/h): ");
			scanf("%f", &velk);
	
			printf("Velocidade em m/s: %f", velk/3.6);
			break;
			
		case '3':
			printf("EX3\n");
			printf("Digite a quantia em real: ");
			scanf("%f", &real);
			printf("Digite a cotacao do dolar: ");
			scanf("%f", &dolar);
	
			printf("$%.2f", real/dolar);
			break;
		
		case '4':
			printf("EX4\n");
			printf("Digite a temperatura em celcius: ");
			scanf("%d",&cel);
	
			fah = cel*(9.0/5.0) + 32.0;

			printf("Temperatura em Fahrenheit :%d", fah);
			break;
			
		case '5':
			printf("EX5\n");
			pi = 3.141592;
	
			printf("Insira o angulo em graus: ");
			scanf("%f", &grau);
	
			radiano = grau * (pi/180);
			printf("Angulo em radianos: %f", radiano);
			break;
			
		case '6':	
			printf("EX6\n");
			printf("Insira numero: ");
			scanf("%d", &nu1);
	
			printf("Numero: %d\n", nu1);
			printf("Antecessor: %d\n", nu1-1);
			printf("Sucessor: %d", nu1+1);
			break;
			
		case '7':
			printf("EX7\n");
			printf("Dado o premio de %.2f reais\n", quant);
			printf("O Primeiro recebera %.2f\n", quant*0.46);
			printf("O Segundo recebera %.2f\n", quant*0.32);
			printf("O Terceiro recebera %.2f", quant*0.22);
			break;
			
		case '8':
			printf("EX8\n");
			printf("Insira a duracao em segundos: ");
			scanf("%d", &dur);

			printf("%d:%d:%d", (dur/60)/60, dur/60, dur); //horas:minutos:segundos
			break;
			
		case '9':
			printf("EX9\n");
			printf("Insira o tempo gasto(em horas): \n");
			scanf("%f", &tempo);
			printf("Insira a vel media: \n");
			scanf("%f", &velm);
	
			dist = tempo * velm;
	
			printf("Seriam necessarios %f litros", dist/12); //ja eh sabido q o carro gasta 12km/l
			break;
			
		case '0':
			printf("EX10\n");	
			printf("Insira tres valores:\n");
			scanf("%d %d %d", &a, &b, &c);
	
			nmaior = (a+b+abs(a-b))/2;
			nmaiornc = (nmaior+c+abs(nmaior-c))/2; //formula para saber qual dos dois numeros eh maior
	
			printf("O maior entre os tres eh: %d", nmaiornc);
			

	}
	
	return 0;
}