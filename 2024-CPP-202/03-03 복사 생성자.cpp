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
		cout << "������ȣ��" << endl;
	}

	// ���������(���� ����)
	Student(const Student& rhs) : hakbun_(rhs.hakbun_), name_(rhs.name_) {
		int length = strlen(rhs.name_);
		// '/0'�� ���� ���� ���� �ϳ� �� �߰�
		name_ = new char[length + 1];
		strcpy(name_, rhs.name_);
		cout << "������ȣ��" << endl;
		cout << "��������� ȣ��" << endl;
	}

	// �Ҹ��� : ��ü�� �Ҹ�� ��(�޸𸮿��� ��������) ȣ��Ǵ� �Լ�
	~Student(void) {
		delete[] name_;
		cout << "�Ҹ��� ȣ�� �Ϸ�" << endl;
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
	// �Ϲ����� ������
	Student stu = Student(2213, "������");
	// ���������
	Student stu2 = stu;



	return 0;

}