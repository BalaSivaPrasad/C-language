#include <stdio.h>
int main() {
    int i;
    struct add {
        int a;
        int b;
    };
    struct add A[10];
    for (i = 0; i < 10; i++) {
        printf("Enter two numbers for pair %d: ", i + 1);
        scanf("%d %d", &A[i].a, &A[i].b);
    }
    for (i = 0; i < 10; i++) {
        printf("Sum of %d and %d is %d\n", A[i].a, A[i].b, A[i].a + A[i].b);
    }
    return 0;
}
