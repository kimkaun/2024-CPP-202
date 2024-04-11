#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	//  ������ : ��ü�� ������ �� ȣ��Ǵ� �Լ�
	// �����ڴ� ��ȯ��(return type)�� ����.
	Student() {
		hakbun_ = 2222;
		name_ = "swag";
	}
	Student(int hakbun, string name) {
		hakbun_ = hakbun;
		name_ = name;
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
    Student* jisu = new Student(2202, "������");

	// �����Ҵ� : �޸𸮴� stack���� �Ҵ�, ������ �� �޸� ũ�Ⱑ ������
	Student swag = Student();

	
	jisu->show();
	swag.show();

	// �����Ҵ� ����
	delete jisu;

	return 0;

}