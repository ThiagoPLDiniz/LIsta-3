#include <stdio.h>
int main()
{
	float salario, salariom;
	int idade, matricula, servico, fem=0, hom=0, i;
	char sexo;
	 
	for(i=0; i<2; i++)
	{
		printf("Qual a sua idade?\n");
		scanf("%d", &idade);
		printf("Digite sua matricula:\n");
		scanf("%d", &matricula);
		printf("Qual o seu sexo?\n");
		scanf("\n%c", &sexo);
		printf("Qual o seu sal�rio?\n");
		scanf("%f", &salario);
		printf("Quantos anos trabalha na empresa?");
		scanf("%d", &servico);
		
		
		if(sexo=='f')
		{
			fem = fem + 1;
		}
		else
		{
				hom = hom + 1;
				salariom = salariom + salario;
		}
	}
	
	
	printf("A quantidade de funcion�rias da empresa �: %d\n", fem);
	printf("A media salarial dos homens �: %.2f\n", salariom / hom);
}
