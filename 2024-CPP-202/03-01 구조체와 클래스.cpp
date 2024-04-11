#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	//  ������ : ��ü�� ������ �� ȣ��Ǵ� �Լ�
	// �����ڴ� ��ȯ��(return type)�� ����.
	Student() {
		// this : �ڱ��ڽ��� ����Ű�� ������
		// ����� ��Ȯ�ϰ� ����ų �� �ִ�.
		this->hakbun_ = 2222;
		name_ = "swag";
	}
	Student() {
		hakbun_ = 2222;
		name_ = "swag";
	}
	// ������� �ʱ�ȭ : ��ü������ ���ÿ� const ���� ��������� �ʱ�ȭ �Ҽ��ִ�.
	Student(int hakbun, string name) : hakbun_(hakbun), name_(name) {
		
	}
	// Ŭ������ ����� ���
	void show(void) {
		cout << hakbun_ << " ";
		cout << name_ << endl;
	}
private:
	int hakbun_;
	string name_;
};

int main(void) {

	// �����Ҵ� : �޸𸮴� heap���� �Ҵ�, ����(��Ÿ��)�� �޸� ũ�Ⱑ ������
	Student* stu = new Student[3]{
		{2202, "������"},
		{2203, "��"},
		{2215, "��"}
	};
	for (int i = 0; i < 3; i++) {
		stu[1].show();
	}
	/*jisu[0].show();
	jisu[1].show();
	jisu[2].show();*/


	// �迭�� �����Ҵ� ����
	delete []stu;

	return 0;

}