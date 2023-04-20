#include <stdio.h>

main(){
	float salario, mult, comissao;
	int venda;
	printf("Digite o salario:");
	scanf("%f",&salario);
	printf("Digite as vendas::");
	scanf("%d",&venda);
	
	comissao = venda*4/100;
	
	printf("Ganho de comissao eh:%.1f",comissao);
	
	mult = salario+venda*4/100;
	
	printf("Salario com a comissao eh:%f",mult);
	
}
