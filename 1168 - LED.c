#include <stdio.h>

int main(void)	{
	
	int contador, i = 0, add = 0;
	char num[1000000];
	
	scanf("%d", &contador);
	
	while(contador > 0){	
		scanf("%s", &num);
		
		while(num[i] != '\0'){
			if(num[i] == '0')
				add += 6;
			if(num[i] == '1')
				add += 2;	
			if(num[i] == '2')
				add += 5;
			if(num[i] == '3')
				add += 5;
			if(num[i] == '4')
				add += 4;	
			if(num[i] == '5')
				add += 5;	
			if(num[i] == '6')
				add += 6;	
			if(num[i] == '7')
				add += 3;	
			if(num[i] == '8')
				add += 7;
			if(num[i] == '9')
				add += 6;		
			i++;		
		}
		printf("%d leds\n", add);
		i = 0;
		add = 0;
		contador--;
	}
	
	return 0;
}