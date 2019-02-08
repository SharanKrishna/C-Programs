#include <stdio.h>

int main()
{
	char ch;
	scanf("%c",&char);
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	{
		if(ch== 'A'|| ch=='a'|| ch=='E'|| ch=='e'||ch=='I'|| ch=='i'||ch=='O'|| ch=='o'|| ch=='U'|| ch=='u')
		{
			printf("Vowel\n");
		}
	
	     else
	    {
		    printf("Consonant\n");
      	}
	}
	else 
	{
		printf("invalid\n");
	}
	return 0;
}
