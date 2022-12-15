#include <stdio.h>
#include <locale.h>

/*Escreva uma função que recebe um número como parâmetro 
e retorna o dobro do número recebido. */

//função:
int dobro(int num) {
	int d;

	d = 2 * num;
	
	return d;
}

//bloco principal:
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int nm, d;
	
	printf("Digite um número: ");
	scanf("%d", &nm);
	
	d = dobro(nm);
	printf("\nO dobro do número lido é: %d", d);
	
	return 0;
}
