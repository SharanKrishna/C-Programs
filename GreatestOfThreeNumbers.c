#include <stdio.h>

int main()
{
    int one, two, three;
    scanf("%d%d%d",&one,&two,&three);
    if(one>two && one>three)
    {
        printf("%d",one);
    }
    else if(two>three)
    {
        printf("%d",two);
    }
    else
        printf("%d",three);
    
    return 0;
}
 
