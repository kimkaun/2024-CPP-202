#include <stdio.h>

int main(void) {

	int arr[4] = { 10, 20, 30, 40 };
	char str[4] = "abc";

	//�ּڰ� 4����Ʈ ��ŭ�� ����
	printf("%d %d", &arr[0], &arr[1]);
	//�ּڰ� 1����Ʈ ��ŭ�� ����
	printf("%d %d", &str[0], &str[1]);
	return 0;
}