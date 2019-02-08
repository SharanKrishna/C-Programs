#include <stdio.h>
int main()
{
    int num,power,i,num1=1;
    scanf("%d%d",&num,&power);
    for(i=0;i<power;i++)
    {
        num1 *= num;
    }
    printf("%d",num1);
    return 0;
}
    
