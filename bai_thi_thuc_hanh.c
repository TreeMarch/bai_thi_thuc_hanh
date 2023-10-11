#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int div(int a, int b){
    return a / b;
}
//---------------------------------------------------------------------------------------------------------------------
int phep_cong_tru_nhan_chia(){
//int main() {
    int choice, num1, num2;
    do {
        printf("\n\nCalculation Menu\n");
        printf("=======================\n");
        printf("1. Input Numbers\n");
        printf("2. Calculate Sum\n");
        printf("3. Calculate Subtraction\n");
        printf("4. Calculate Multiplication\n");
        printf("5. Calculate Division\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\nEnter numbers 1: ");
                scanf("%d", &num1);
                printf("\nEnter numbers 2: ");
                scanf("%d", &num2);
                break;
            case 2:
                printf("\nSum of %d and %d is %d", num1, num2, sum(num1, num2));
                break;
            case 3:
                printf("\nSubtraction of %d and %d is %d", num1, num2, sub(num1, num2));
                break;
            case 4:
                printf("\nMultiplication of %d and %d is %d", num1, num2, mul(num1, num2));
                break;
            case 5:
                printf("\nDivision of %d and %d is %d", num1, num2, div(num1, num2));
                break;
            case 6:
                exit(0);
            default:
                printf("\nInvalid choice!");
        }
    } while (choice != 6);
    return 0;
}
//----------------------------------------------------------------------------------------------------------------------