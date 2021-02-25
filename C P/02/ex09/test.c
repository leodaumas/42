#include <stdio.h>
#define MAX 100

int main()
{
	char str[MAX]="Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un"; //IT IS MISSING 42Mots
	int i;

	for(i=0; str[i]!='\0'; i++)
	{

		if(i==0)
		{
			if((str[i]>='a' && str[i]<='z'))
				str[i]=str[i]-32; 
			continue; 
		}
		if(str[i]==' ')
		{

			++i;

			if(str[i]>='a' && str[i]<='z')
			{
				str[i]=str[i]-32; 
				continue; 
			}
		}
		else
		{

			if(str[i]>='A' && str[i]<='Z')
				str[i]=str[i]+32; 
		}
	}
	
	printf("%s",str);
	
	return 0;
}