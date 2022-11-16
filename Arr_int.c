#include <stdio.h>

int main() {
   int n;
   printf("enter number of intergers: ");
   scanf("%d",&n);
   int num[n];
   int min,max,sum=0;
   for (int i=0;i<n;i++){
       scanf("%d",&num[i]);
       sum += num[i];
       if (num[i]>num[i-1]){max=num[i];};
       if (num[i]<num[i-1]){min=num[i];};
   }
   printf("MIN = %d\nMAX = %d\nSum of Integers = %d\n",min,max,sum);
    return 0;
}
