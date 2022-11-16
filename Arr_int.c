#include <stdio.h>

int main() {
   int n;
   printf("enter number of intergers: ");
   scanf("%d",&n);
   int num[n],min,max;
   float sum=0;
   for (int i=0;i<n;i++){
       scanf("%d",&num[i]);
       sum += num[i];
       if (num[i]>num[i-1]){max=num[i];};
       if (num[i]<num[i-1]){min=num[i];};
   }
   float avg=sum/n;
   printf("MIN = %d\nMAX = %d\nSum of Integers = %.2f\nAverage of Integers = %.2f\n",min,max,sum,avg);
    return 0;
}
