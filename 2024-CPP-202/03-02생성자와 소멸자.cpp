#include <iostream>
#include <string.h>

using namespace std;

class Student {
public:
	// TODO : �����ڿ��� �����Ҵ��� �� �޸� ������ ���� �� ����.
	Student(int hakbun, const char* name) : hakbun_(hakbun) {
		int length = strlen(name);
		// '/0'�� ���� ���� ���� �ϳ� �� �߰�
		name_ = new char[length + 1];
		// �ϳ� �� �߰��� ������ �ι��� �ֱ�
		strcpy(name_, name);
	}

	// Ŭ������ ����� ���
	void show(void) {
		cout << hakbun_ << " ";
		cout << name_ << endl;
	}
private:
	int hakbun_;
	char* name_;
};

int main(void) {
	Student* stu = Student(2213, "������");
	stu->show();

	delete stu;

	return 0;

}