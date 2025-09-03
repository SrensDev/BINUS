#include <stdio.h>

int main() {
    int length, width;

    printf("Insert Length: ");
    scanf("%d", &length);
    printf("Insert Width: ");
    scanf("%d", &width);

    int area = length * width;

    printf("Area = %d", area);
}