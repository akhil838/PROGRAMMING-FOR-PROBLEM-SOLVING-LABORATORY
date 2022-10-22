#include <stdio.h>

int main(){
//input 3 integers
  int a,b,c;
    printf("Enter three Numbers: ");
    scanf("%d %d %d",&a ,&b ,&c);
//Max of number    
    if(a>=b && a>=c){printf("max:%d ",a);}
    else if(b>=a && b>=c){printf("max:%d ",b);}
    else if(c>=b && c>=a){printf("max:%d ",c);}
//Min of number    
    if(a<=b && a<=c){printf("min:%d ",a);}
    else if(b<=a && b<=c){printf("min:%d ",b);}
    else if(c<=b && c<=a){printf("min:%d ",c);}
}
