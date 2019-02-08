#include <stdio.h>

int main()
{
	char c;
	scanf("%c",&c);
	if((c>='A' && c<='Z') || (c>='a' && c<='z'))
	{
		if(c== 'A'|| c=='a'|| c=='E'|| c=='e'||c=='I'|| c=='i'||c=='O'|| c=='o'|| c=='U'|| c=='u')
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
