#include <iostream>

// �̸����� std::�� ���ص� �ȴ�.
using namespace std;

void call_by_pointer(int *val) {
	// ���ο� �������� val�� ����� val�� ����Ű�� �ִ� ����� ���� �ٲ۴�.
	*val = 10;
}

int main(void) {
	int num = 4;
	// num�� ���� �ٲ��.
	call_by_pointer(&num);
	cout << num;
	return 0;
}