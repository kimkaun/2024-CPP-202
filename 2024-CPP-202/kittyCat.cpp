#include <iostream>

using namespace std;

// 부모 클래스 Cat
class Cat {
public:
	// 부모 생성자
	Cat(string name, int age) : name_(name), age_(age) {
		cout << "이름 : " << name_ << endl;
		cout << "나이 : " << age_ << endl;
	}
	// 소멸자
	 ~Cat() {
		cout << "고양이 소멸됨" << endl;
	 }
	// 고양이가 하는 행동들을 가상함수로 선언
	virtual void sound(void) {
		cout << "우는 고앵이" << endl;
	}
	virtual void sleep(void) {
		cout << "잠자는 고앵이" << endl;
	}
private:
	// 고양이 속성
	string name_;
	int age_;
};

// 자식 클래스 Kitty
class Kitty : public Cat {
public:
	// 자식 생성자
	Kitty(string name, int age) : Cat(name, age) {
		
	}
	// 소멸자
	~Kitty() {
		
	}
	void sound() override {
		cout << "야옹야옹" << endl;
	}
	void sleep() override {
		cout << "쿨쿨" << endl;
	}
};
void main(void) {
	Cat* cat = new Cat("레오나르도다빈치", 10);
	cat->sound();
	cat->sleep();
	delete cat;

	Cat* kitty = new Kitty("나폴레옹", 5);
	kitty->sound();
	kitty->sleep();
	delete kitty;
}