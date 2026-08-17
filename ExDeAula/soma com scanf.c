#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int a,b,c;
	
	printf("Insira um valor para a soma\n");
	scanf("%d", &a);
	
	printf("Insira o outro valor para a soma\n");
	scanf("%d", &b);
	c = a+b;
	
	printf("%d", c);


	return 0;
}
