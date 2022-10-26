#include <stdio.h>
#include <math.h>

int main(){
int n;

printf("Enter the value of n:");scanf("%d",&n);

int t[n];

for(int i=0;i<n;i++){
  t[i]=t[i-1]+t[i-2];

  t[0]=0;
  t[1]=1;

  printf("%d\n",t[i]);
}
}
