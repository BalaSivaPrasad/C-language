#include <stdio.h>
int main() {
    int arr[5];
    int (*ptr1)[5] = &arr; 
    int* ptr2 = &arr[0]; 
    if ((int*)ptr1 == ptr2) {  
        printf("Pointer to Array Name and First Element are Equal.\n");
    } else {
        printf("Pointer to Array Name and First Element are not Equal.\n");
    }
    return 0;
}
