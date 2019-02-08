#include <stdio.h>
int main()
{
    int num,x=0;
    scanf("%d",&num);
    while(num != 0)
    {
        num /= 10;
        x++;
    }
    printf("%d",x);
    return 0;
}
    
