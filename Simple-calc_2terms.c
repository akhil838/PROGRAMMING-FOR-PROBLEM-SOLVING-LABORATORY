#include <stdio.h>

int main() {
    int x,y;
    char a;
    //Ignore Warning
    printf("Enter Operator (+, -, *, /,%): ");
    scanf("%c",&a);
    printf("Enter two integers: ");
    scanf("%d %d",&x,&y);
  
    switch (a)
    {
    case '+': printf("%d",x+y);break;
    case '-': printf("%d",x-y);break;
    case '*': printf("%d",x*y);break;
    case '/': printf("%d",x/y);break;
    case '%': printf("%d",x%y);break;
    default:printf("Enter a valid Operator");
    }
    return 0;
}
