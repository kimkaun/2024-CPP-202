#include <stdio.h>

int main(void) {

	int arr[4] = { 10, 20, 30, 40 };
	char str[4] = "abc";

	printf("%d %d", &arr[0], &arr[1]);
	printf("%d %d", (arr+0), (arr+1));
	return 0;
}