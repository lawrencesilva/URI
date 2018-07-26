#include <iostream>
#include <cstdio>
#include <string>
#include <ctype.h>
 
using namespace std;
 
int main() {
 
   string frase;
   char letra;
   bool falso = false;
   
   getline(cin, frase);
   
   while(frase != "*")	{
   		
   		for(int i = 0; frase[i] != '\0'; i++)	{
   			
   			if(i == 0)	
   				letra = toupper(frase[i]);
   				
   			else if(frase[i] == ' ')	{
   				
   				frase[i + 1] = toupper(frase[i + 1]);
   				
   				if(frase[i + 1] != letra)	{
   					falso = true;
   					break;
   				}
   				
			   }
		   }
		   
		if(falso)
		   	cout << "N" << endl;
		   	
		else
			cout << "Y" << endl;
			
		falso = false;
		getline(cin, frase);	
   }
  
  
    return 0;
}