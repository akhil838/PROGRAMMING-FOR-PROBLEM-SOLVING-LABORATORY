#include <stdio.h>

void main()
{
int num,rem,revrs=0,sum=0;
printf("ENTER A +ve INTEGER: "); scanf("%d",&num);
int num1=num;
  
do{
rem=num%10;
sum+=rem;
revrs=revrs*10+rem;    
num=num/10;    
}while(num!=0);

printf("SUM:%d \n",sum);
num1==revrs?printf("Given Number is a PALINDROME\n"):printf("Given Number is NOT a PALINDROME\n");
}
