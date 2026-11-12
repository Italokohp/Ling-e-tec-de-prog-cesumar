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

	
	//ex4
	int cel, fah;
	printf("Digite a temperatura em celcius: ");
	scanf("%d",&cel);
	
	fah = cel*(9.0/5.0) + 32.0;

	printf("Temperatura em Fahrenheit :%d", fah);

	
	//ex5 
	float grau, radiano, pi;
	pi = 3.141592;
	
	printf("Insira o angulo em graus: ");
	scanf("%f", &grau);
	
	radiano = grau * (pi/180);
	printf("Angulo em radianos: %f", radiano);

	
	//ex6
	int nu1;
	
	printf("Insira numero: ");
	scanf("%d", &nu1);
	
	printf("Numero: %d\n", nu1);
	printf("Antecessor: %d\n", nu1-1);
	printf("Sucessor: %d", nu1+1);
	
	
	//ex7
	float quant = 780000;
	printf("Dado o premio de %.2f reais\n", quant);
	printf("O Primeiro recebera %.2f\n", quant*0.46);
	printf("O Segundo recebera %.2f\n", quant*0.32);
	printf("O Terceiro recebera %.2f", quant*0.22);
	
	
	//ex8
	int dur;
	printf("Insira a duracao em segundos: ");
	scanf("%d", &dur);

	printf("%d:%d:%d", (dur/60)/60, dur/60, dur); //horas:minutos:segundos
	
	
	//ex9
	float tempo, velm, dist;
	printf("Insira o tempo gasto(em horas): \n");
	scanf("%f", &tempo);
	printf("Insira a vel media: \n");
	scanf("%f", &velm);
	
	dist = tempo * velm;
	
	printf("Seriam necessarios %f litros", dist/12); //ja eh sabido q o carro gasta 12km/l
	
	
	//ex10
	int a,b,c, nmaior, nmaiornc;
	
	printf("insira tres valores:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	nmaior = (a+b+abs(a-b))/2;
	nmaiornc = (nmaior+c+abs(nmaior-c))/2; //formula para saber qual dos dois numeros eh maior
	
	printf("O maior entre os tres eh: %d", nmaiornc);
	
	
	
	return 0;
}
