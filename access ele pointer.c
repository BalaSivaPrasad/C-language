#include <stdio.h>
void geeks()
{
	int val[3] = { 5, 10, 15 };
	int* ptr;
	ptr = val;
	printf("Elements of the array are: ");
	printf("%d, %d, %d", ptr[0], ptr[1], ptr[2]);
	return;
}
int main()
{
	geeks();
	return 0;
}
