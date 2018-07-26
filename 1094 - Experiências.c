#include <stdio.h>

int main(void)	{
	
	int casos, num;
	char tipo;
	double pcoelho, prato, psapo, total = 0, coelhos = 0, ratos = 0, sapos = 0;
	
	scanf("%d", &casos);
	
	while(casos > 0)	{
		scanf("%d %c", &num, &tipo);	
		
		if(tipo == 'C')	
			coelhos += num;
		if(tipo == 'R')
			ratos += num;
		if(tipo == 'S')
			sapos += num;
			
		casos--;		
	}
	
	
	total = coelhos + ratos + sapos;
	pcoelho = (coelhos / total) * 100;
	prato = (ratos / total) * 100;
	psapo = (sapos / total) * 100;
	
	printf("Total: %.0lf cobaias\nTotal de coelhos: %.0lf\nTotal de ratos: %.0lf\nTotal de sapos: %.0lf\nPercentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n", total, coelhos, ratos, sapos, pcoelho, prato, psapo);
	
	
	return 0;
}