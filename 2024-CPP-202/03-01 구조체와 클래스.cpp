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
private:
	int hakbun_;
	string name_;
};

int main(void) {
    Student jisu = Student(2202, "������");
	Student swag = Student();

	return 0;

}