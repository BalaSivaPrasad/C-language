#include <stdio.h>
int main() {
    int a[10], i, n, small, large;
    printf("Enter the array size (max 10): "); 
    scanf("%d", &n);
    if (n <= 0 || n > 10) {
        printf("Invalid array size.\n");
        return 1;
    }
    printf("Enter elements of the array:\n");
    for (i = 0; i < n; i++) 
        scanf("%d", &a[i]);
    small = a[0];
    large = a[0];
    for (i = 1; i < n; i++) {  // Start from index 1
        if (a[i] < small) 
            small = a[i];
        if (a[i] > large) 
            large = a[i];
    }
    printf("Largest value is: %d\n", large);
    printf("Smallest value is: %d\n", small);
    return 0;
}
