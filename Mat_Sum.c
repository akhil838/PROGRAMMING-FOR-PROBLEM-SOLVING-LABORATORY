#include <stdio.h>

void main() {
int i,n;
printf("ENTER SIZE OF MATRIX I x N: ");
scanf("%d %d",&i,&n);
int a[i][n],b[i][n];
    printf("ENTER MATRIX A\n");
    for(int x=0;x<i;x++){
        for(int y=0;y<n;y++){
        scanf("%d",&a[x][y]);
        }
    printf("\n");
    }
    
    printf("ENTER MATRIX B\n");
    for(int x=0;x<i;x++){
        for(int y=0;y<n;y++){
        scanf("%d",&b[x][y]);
        }
    printf("\n");
    }
    
    printf("SUM OF MATRIX (A+B)\n");
    for(int x=0;x<i;x++){
        for(int y=0;y<n;y++){
        printf("%d ",a[x][y]+b[x][y]);
        }
    printf("\n");
    }
}
