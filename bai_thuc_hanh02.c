#include <stdio.h>
//-----------------------------------------------------------------------------------------------------------------------

//int bai_thuc_hanh_02(){
int main() {
    int numbers[10];

    // Input 10 integers
    printf("Input 10 numbers:\n");
    printf("=============================\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Display the numbers in reverse order
    printf("Result: ");
    for (int i = 9; i >= 0; i--) {
        printf("%d", numbers[i]);
        if (i != 0) {
            printf(" , ");
        }
    }
    printf("\n");

    return 0;
}