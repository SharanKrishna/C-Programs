#include <stdio.h>

int main()
{
    int i,num,x=0,y=0;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        x++;
        y+=x;
    }
     printf("%d\n",y);
    return 0;
}
