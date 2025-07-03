#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;
    printf("Birinci ədədi daxil edin: ");
    scanf("%lf", &num1);
    printf("Əməliyyatı seçin (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("İkinci ədədi daxil edin: ");
    scanf("%lf", &num2);
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf\n", result);
            } else {
                printf("0-a bölmək olmaz!\n");
            }
            break;
    }
    return 0;
}
