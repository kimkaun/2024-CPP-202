#include <stdio.h>
#include <string.h>

int main(void) {
	char str[30] = "c";
	// ���� ���ڿ����ٰ� �߰�
	strcat(str, "addition");

	printf("%s", str);
}