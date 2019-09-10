#include <stdio.h>
#include <stdlib.h>

int main()
{
    int menu;
    int nun1;
	int nun2;
	int resultado1;

    printf("Digite um numero  1 \n");
    scanf("%d",&menu);
    switch(menu){

    case 1:
	printf("você digitou 1 vamos soma os dois numeros que vc digita");
    printf("Digite o primeiro numero : ");
    scanf("%d",&nun1);
    printf("Digite o segundo numero : ");
    scanf("%d",&nun2);
    resultado1 = nun1 + nun2;
    printf("o resultado e :",resultado1);
    break;







    }




    return 0;
}
