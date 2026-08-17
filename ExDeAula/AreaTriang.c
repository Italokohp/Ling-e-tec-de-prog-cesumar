#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	float base, altura, area;
	
	base = 12;
	altura = 9;
	area = (base*altura)/2;
	
	printf("A area do triangulo de base %f e altura %f eh %f", base, altura, area);
	
	return 0;
}
