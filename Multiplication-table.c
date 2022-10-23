#include <stdio.h>
#include <math.h>
int main(){
    int num,rows;
    printf("Enter a number: "); scanf("%d",&num);
    printf("Enter number of rows: "); scanf("%d",&rows);
    
    for(int n=1;n <= rows;n++){
        printf("%d x %d = %d \n",num,n,n*num);
    }
    return 0;
}
