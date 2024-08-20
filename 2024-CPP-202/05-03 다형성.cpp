#include <iostream>

using namespace std;

class Animal {		// Animal 클래스 
public:
	// 생성자
	Animal(string name, unsigned int age, int leg_num)
		: name_(name), age_(age), leg_num_(leg_num) {}	// 멤버변수(매개변수)
	
	// 동물이 하는 행동들
	void walk(void) {
		cout << "걷다" << endl;
	}
	void bark(void) {
		cout << "짖다" << endl;
	}
	void eat(void) {
		cout << "먹다" << endl;
	}
private:
	// 동물 속성들
	string name_;
	unsigned int age_;
	int leg_num_;
};

void main(void) {
	Animal* animal = new Animal("요아조비", 8, 2);	// 동적할당
	animal->walk();	
	animal->bark();
	animal->eat();
	delete animal;	// 동적할당 해제
	
}