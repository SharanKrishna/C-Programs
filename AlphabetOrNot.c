#include <stdio.h>

int main()
{
	char ch;
	scanf("%c",&ch);
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	{
		printf("Alphabet\n");
	}
		
	
	else
	    
		 printf("No\n");
      	
	return 0;
}
