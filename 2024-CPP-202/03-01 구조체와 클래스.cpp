#include <iostream>
#include <string>

using namespace std;

class Student {
	int hakbun_;
	string name_;
};

int main(void) {
	 Student jisu;
	// Ŭ������ default�� private�̴�.
	jisu.hakbun_ = 2202;
	jisu.name_ = "������";
	return 0;

}