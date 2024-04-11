#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	//  생성자 : 객체가 생성될 때 호출되는 함수
	// 생성자는 반환형(return type)이 없다.
	Student() {
		hakbun_ = 2222;
		name_ = "swag";
	}
private:
	int hakbun_;
	string name_;
};

int main(void) {
    Student jisu = Student(2202, "나지수");
	Student swag = Student();

	return 0;

}