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

class Dog : public Animal {
public:
	Dog(string name, int age, int leg_num, int loyalty)
		: Animal(name, age, leg_num), loyalty_(loyalty) {	// name_(name) --> 에러, dog는 animal에 멤버접근을 못함
			cout << "충성도" << endl;
		}
	// C++은 디폴크가 정적바인딩이기 때문에 가상함수로 오버라이딩 해야 한다.
	void bark() {
		cout << "울프울프" << endl;
	}
	void eat() {
		cout << "왕왕" << endl;
	}
	void walk() {
		cout << "춉춉춉춉" << endl;
	}
private:
	int loyalty_;	// 충성도
};

void main(void) {
	Animal* animal = new Animal("요아조비", 8, 2);	// 동적할당
	animal->walk();	
	animal->bark();
	animal->eat();
	delete animal;	// 동적할당 해제

	animal = new Dog("마루", 5, 2, 100);	// 동적할당
	animal->walk();
	animal->bark();
	animal->eat();
	delete animal;

	
}