#include <stdio.h>
#include <math.h>
int main()
{
    int x,n,sum=0;
    printf(" 1+x+x^2+x^3+………….+x^n \n");
    printf("Enter values for x,n: ");
    scanf("%d %d",&x ,&n);
    for(int i=0;i<=n;i++){
        int p;
        p=pow(x,i);
        i==n?printf("%d \n",p):printf("%d + ",p);
        
        sum+=p;
    }
    printf("= %d",sum);
    return 0;
}
