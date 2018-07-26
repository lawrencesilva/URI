#include <stdio.h>

int main(void)	{
	
	int abre = 0, fecha = 0, i = 0, errado = 0;
	char ex[1000];
	
	while(scanf("%s", &ex) != EOF)	{
		
		for(i = 0; ex[i] != '\0'; i++)	{
			if(ex[i] == '(')
				abre++;
			if(ex[i] == ')')
				fecha++;	
		}
		
		if(abre != fecha)
			errado = 1;
		
		i = 0;
		abre = 0;
		fecha = 0;
		
		while(ex[i] != '\0' && errado == 0)	{
			if(ex[i] == '(')
				abre++;
			
			if(ex[i] == ')')	{
				
				fecha++;
				
				if(abre == 0)	{
					errado = 1;
					break;
				}
			
				if(abre > 0)	{
					abre--;
					fecha--;
				}
				
			}
			i++;
		}
		
		if(errado)	
			printf("incorrect\n");
		
		else if(abre == 0 && fecha == 0)	
			printf("correct\n");
		
		else
			printf("incorrect\n");
		
		errado = 0;
		i = 0;
		abre = 0;
		fecha = 0;
	}
	
	return 0;
}