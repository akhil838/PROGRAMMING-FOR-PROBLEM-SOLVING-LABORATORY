#include <stdio.h>
int primenum();

int main() {
   int n;
   printf("Enter a number: ");scanf("%d",&n);
   for(int x = 2;x<n;x++){
    primenum(x);   
   }
     return 0;
}

//Checking if the number is prime
int primenum(int x){
    int y=2;
    while(x%y!=0){
    y++;
   }
   y == x?printf("%d \n",y):printf("");
}
