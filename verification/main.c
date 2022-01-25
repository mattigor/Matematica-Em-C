#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C;
    int ans_addi, ans_subt, ans_mult, ans_divi;

    printf("Adding in C\n");

    printf("Enter a number: ");
    scanf("%d", &A);

    printf("Enter an other number: ");
    scanf("%d", &B);

    ans_addi = A + B;

    printf("The answer is %d", ans_addi);

    printf("\nSubtracting in C");

    printf("\nEnter a number: ");
    scanf("%d", &A);

    printf("Enter an other number: ");
    scanf("%d", &B);

    ans_subt = A - B;

    printf("The answer is %d", ans_subt);

    printf("\nMultiplying in C");

    printf("\nEnter a number: ");
    scanf("%d", &A);

    printf("Enter an other number: ");
    scanf("%d", &B);

    ans_mult = A * B;

    printf("The answer is %d", ans_mult);

    printf("\nDiving in C");

    printf("\nEnter a number: ");
    scanf("%d", &A);

    printf("Enter an other number: ");
    scanf("%d", &B);

    ans_divi = A / B;

    printf("The answer is %d", ans_divi);

    printf("\nVerifying TRUE or FALSE in C");

    printf("\nEnter a number: ");
    scanf("%d", &A);

    printf("Enter an other number: ");
    scanf("%d", &B);

    printf("Enter an other number: ");
    scanf("%d", &C);

    if (A+B > C) printf("TRUE\n");
    else printf("FALSE\n");

    return 0;
}
