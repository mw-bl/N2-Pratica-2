#include <stdio.h>
#include <locale.h>

/*Escreva uma fun��o que recebe dois n�meros como par�metros 
e retorna o dobro do maior dos n�meros recebidos. */

//fun��o:
int dobro(int num1, int num2) {
	int d;
	
	if (num2 > num1){
		d = 2 * num2;
	} else{
		d = 2 * num1;
	}
	
	return d;
}

//bloco principal:
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int nm1, nm2, d;
	
	printf("Digite um n�mero: ");
	scanf("%d", &nm1);
	
	printf("\nDigite outro n�mero: ");
	scanf("%d", &nm2);
	
	d = dobro(nm1, nm2);
	printf("\nO dobro do maior n�mero lido �: %d", d);
	
	return 0;
}
