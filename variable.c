#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
       // ✅ use &
    printf("You entered: %d\n", num);
    return 0;
}