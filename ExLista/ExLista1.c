#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {

	//1
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d %d\n", b, a); //dois valores que se invertem
	

	//2
	double c;
	scanf("%lf", &c);
	printf("%e\n", c); //valor q se transforma em notação cientifica
	

	//3
	int n, resultado, bit64, bit32, bit16, bit8, bit4, bit2, bit1;
	
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
	

	//8
	int x1,x2,y1,y2;
	float diste;

	printf("Insira p1(x1,y1)\n");
	scanf("%d", &x1);
	scanf("%d", &y1);
	
	printf("Insira p2(x2,y2)\n");
	scanf("%d", &x2);
	scanf("%d", &y2);
	
	diste = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2)); // formula da distancia euclidiana
	printf("Distancia eh %f", diste);

	
	return 0;
}
