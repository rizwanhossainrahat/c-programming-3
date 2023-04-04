#include<stdio.h>
int main()
{
    int i;
    int sum=0;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        sum+=i;
        //  sum=sum+i;
        // printf("%d\n",sum);
    }
        printf("%d",sum);

    return 0;
}