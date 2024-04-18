#include <iostream>
#include <string.h>

using namespace std;

class Student {
public:
	
	Student(int hakbun, const char* name) : hakbun_(hakbun) {
		int length = strlen(name);
		// '/0'�� ���� ���� ���� �ϳ� �� �߰�
		name_ = new char[length + 1];

		strcpy(name_, name);
	}
	// �Ҹ��� : ��ü�� �Ҹ�� ��(�޸𸮿��� ��������) ȣ��Ǵ� �Լ�
	~Student(void) {
		delete[] name_;
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
	Student* stu = new Student(2213, "������");
	stu->show();

	delete stu;

	return 0;

}