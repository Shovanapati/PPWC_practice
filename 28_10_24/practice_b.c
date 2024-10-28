 //(b) Store the absolute difference of x and y in y , where the absolute difference is ( x - y ) or (y - x ), whichever is positive.
 // Do not use the abs or fabs function in your solution.

#include <stdio.h>

int main(){
    float x,y;
 
    printf("Enter x: ");
    scanf("%f", &x);
    printf("Enter y: ");
    scanf("%f", &y);

    
    if(x >= y){
        x = x-y;
    }else{
        x = y-x;
    }

    
    printf("The absolute difference of x and y is: %f", x);
}