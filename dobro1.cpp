#include <stdio.h>
#include <locale.h>

/*Escreva uma fun��o que recebe um n�mero como par�metro 
e retorna o dobro do n�mero recebido. */

//fun��o:
int dobro(int num) {
	int d;

	d = 2 * num;
	
	return d;
}

//bloco principal:
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int nm, d;
	
	printf("Digite um n�mero: ");
	scanf("%d", &nm);
	
	d = dobro(nm);
	printf("\nO dobro do n�mero lido �: %d", d);
	
	return 0;
}
