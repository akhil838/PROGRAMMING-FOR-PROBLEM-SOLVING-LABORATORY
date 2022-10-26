#include <stdio.h>
#include <math.h>

int main(){

int a,b,c;
float dis;

printf("Enter the values of (a,b,c) coefficients: ");
scanf("%d %d %d",&a ,&b ,&c);
printf("Your required equation is = %dx^2 + %dx + %d\n\n",a ,b ,c);

dis = (b*b)-(4*a*c);
float root1= ((pow(dis, 0.5))-b)/(2*a);
float root2= (-(pow(dis, 0.5))-b)/(2*a);

dis >= 0 ? printf("root 1 = %.3f \nroot 2 = %.3f",root1,root2):printf("roots are imaginary");
}
