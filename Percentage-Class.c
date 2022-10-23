#include <stdio.h>

int main(){
    float x;
    printf("Enter Percentage of marks: ");
    scanf ("%f",&x);
    
    if(x<=100 && x>=70){printf("Distinction");}
    else if(x<70 && x>=60){printf("First class");}
    else if(x<60 && x>=40){printf("Second class");}
    else if(x<40 && x>=0){printf("Failed");}
    else{printf("Enter valid input! \n \n"); main();}
}
