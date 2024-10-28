 //(a) If item is nonzero, then multiply product by item and save the result in product ;
 // other-wise, skip the multiplication. In either case, print the value of product.

#include <stdio.h>

int main(){
    float product = 1.0;
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
      if(n != 0){
        product *= n;
    }

    printf("product is: %f\n", product);
    return 0;
}
