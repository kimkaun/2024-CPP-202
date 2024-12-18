#include <iostream>

using namespace std;

class Animal {		// Animal 클래스 
public:
	// 생성자
	Animal(string name, unsigned int age, int leg_num)
		: name_(name), age_(age), leg_num_(leg_num) {	// 멤버변수(매개변수)
			cout << "이름 : " << name_<< endl;
			cout << "나이 : " << age_ << endl;
			cout << "다리 : " << leg_num_ << endl;
		}
	virtual ~Animal() {
		cout << "Animal 소멸자" << endl;
	}
	// 순수 가상함수(추상메서드)
	virtual void walk(void) = 0;
	virtual void bark(void) = 0;
	virtual void eat(void) = 0;
private:
	// 동물 속성들
	string name_;
	unsigned int age_;
	int leg_num_;
};

class Dog : public Animal {
public:
	Dog(string name, int age, int leg_num, int loyalty)
		: Animal(name, age, leg_num), loyalty_(loyalty) {	// name_(name) --> 에러, dog는 animal에 멤버접근을 못함
			cout << "충성도" << endl;
		}
	virtual ~Dog() {
		cout << "Dog 소멸자" << endl;
	}
	void bark() override {
		cout << "울프울프" << endl;
	}
	void eat() override {
		cout << "왕왕" << endl;
	}
	void walk() override {
		cout << "춉춉춉춉" << endl;
	}
private:
	int loyalty_;	// 충성도
};

void main(void) {
	// 추상클래스는 객체를 생성할 수 없다(new Animal() 불가)
	Animal* animal = new Dog("마루", 5, 2, 100);	// 동적할당
	animal->bark();
	delete animal;

	
}