#include <stdio.h>

int main(void) {
    int height = 0;

do
{
     printf("Enter the height: ");
    scanf("%d", &height);
    printf("\n");
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    } 
    if (height == 0) {
            printf("Height must be between 1 and 8. Please try again.\n");
            break;
        }
} while (true);


   
    return 0;

}