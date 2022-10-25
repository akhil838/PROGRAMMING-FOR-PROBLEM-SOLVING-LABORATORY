#include <stdio.h>
#include <math.h>

int main(){

int f=10,h=0;
float t[f],a=9.8;

for(;f>0;f--){
h+=3;  
t[f]=pow((2*a*h),0.5);

//t[f-1]=pow((2*a*h),0.5);

printf("Time taken to reach %dth floor: %.3f sec \n",f-1,t[f]);
}
    return 0;
}
