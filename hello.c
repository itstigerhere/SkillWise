#include <stdio.h>

int main() {
    int num1, num2, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Choose an operation (+, -, \*, /): ");
    scanf(" %c", &choice);
    switch (choice) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%d / %d = %f\n", num1, num2, (float)num1 / num2);
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
