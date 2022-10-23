#include <stdio.h>

int main() {
   int n;
   printf("Enter a number: ");scanf("%d",&n);
   int x = 2;
   while(n%x!=0){
    x++;
   }
   x == n?printf("It is a Prime Number"):printf("Not a Prime Number");
    return 0;
}
