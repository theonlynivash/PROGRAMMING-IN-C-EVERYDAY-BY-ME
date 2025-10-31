#include <stdio.h>

int main() {
    int num;     
    printf("Enter an integer number: ");
    scanf("%d", &num);
    printf("\nYou entered: %d", num);
    printf("\nAddress of the variable: %p", (void*)&num);
    printf("\nSize of the variable: %zu bytes\n", sizeof(num));
    return 0;
}
