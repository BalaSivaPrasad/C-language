#include <stdio.h>
void main() {
    int n, temp, k;
    printf("Enter no. of elements: ");
    scanf("%d", &n); 
    int a[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    k = n / 2;  
    for (int i = 0; i < k; i++) {
        temp = a[i];
        a[i] = a[n - 1 - i];  
        a[n - 1 - i] = temp;
    }
    printf("The reverse array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");  
}
