#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i, nota[10], escolha_nota;
	
	
	printf("Insira a nota dos alunos \n");
	for(i=1; i<11; i++){
		printf("%d: ", i);
		scanf("%d", &nota[i]);	
	}
	
	printf("Qual aluno deseja consultar nota? (1-10):");
	scanf("%d", &escolha_nota);
	if (escolha_nota >= 0 && escolha_nota < 10) printf("Nota: %d", nota[escolha_nota]);
	else printf("Nota nao cadastrada");
	

	return 0;
}
