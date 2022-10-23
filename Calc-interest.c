#include <stdio.h>
#include <math.h>

int main(){
float t,p,r;
  printf("Enter principal amount: "); scanf("%f",&p);
  printf("Enter rate of intrest: "); scanf("%f",&r);
  printf("Enter time period(in years): "); scanf("%f",&t);
//Simple Interest
float si=(p*t*r)/100;
    printf("Simple Interest: %0.2f \n",si);
//Compound Interest  
float ci=p*(pow(1+(r/100), t)-1);
    printf("Compound Interest: %0.2f \n",ci); 
 return 0;
  
}
