//Write a c program to replace 0 and 1 in a number
#include <stdio.h>

int main() {
    int length;

    printf("Enter the length of the number: ");
    scanf("%d", &length);

    char result[length + 1];

    printf("Enter a number: ");
    scanf("%s", result); 

   
    for (int i = 0; i < length; i++) {
        if (result[i] == '0') {
            result[i] = '1';
        } else if (result[i] == '1') {
            result[i] = '0';
        }
    }

   
    printf("Modified number is: %s\n", result);

    return 0;
}
