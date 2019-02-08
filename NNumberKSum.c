#include <stdio.h>

int main()
{
    int N,arr[1000],K,i,j,sum=0;
    scanf("%d",&N);
    scanf("%d",&K);
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<K;j++)
    {
        sum += arr[j];
    }
    printf("%d",sum);
    return 0;
}
