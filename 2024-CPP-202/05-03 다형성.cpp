#include <iostream>

using namespace std;

class Animal {		// Animal Å¬·¡½º 
public:
	// »ý¼ºÀÚ
	Animal(string name, unsigned int age, int leg_num)
		: name_(name), age_(age), leg_num_(leg_num) {	// ¸â¹öº¯¼ö(¸Å°³º¯¼ö)
			cout << "ÀÌ¸§ : " << name_<< endl;
			cout << "³ªÀÌ : " << age_ << endl;
			cout << "´Ù¸® : " << leg_num_ << endl;
		}	
	// µ¿¹°ÀÌ ÇÏ´Â Çàµ¿µé
	virtual void walk(void) {
		cout << "°È´Ù" << endl;
	}
	virtual void bark(void) {
		cout << "Â¢´Ù" << endl;
	}
	virtual void eat(void) {
		cout << "¸Ô´Ù" << endl;
	}
private:
	// µ¿¹° ¼Ó¼ºµé
	string name_;
	unsigned int age_;
	int leg_num_;
};

class Dog : public Animal {
public:
	Dog(string name, int age, int leg_num, int loyalty)
		: Animal(name, age, leg_num), loyalty_(loyalty) {	// name_(name) --> ¿¡·¯, dog´Â animal¿¡ ¸â¹öÁ¢±ÙÀ» ¸øÇÔ
			cout << "Ãæ¼ºµµ" << endl;
		}

	virtual void bark() {
		cout << "¿ïÇÁ¿ïÇÁ" << endl;
	}
	virtual void eat() {
		cout << "¿Õ¿Õ" << endl;
	}
	virtual void walk() {
		cout << "­h­h­h­h" << endl;
	}
private:
	int loyalty_;	// Ãæ¼ºµµ
};

void main(void) {
	Animal* animal = new Animal("¿ä¾ÆÁ¶ºñ", 8, 2);	// µ¿ÀûÇÒ´ç
	animal->walk();	
	animal->bark();
	animal->eat();
	delete animal;	// µ¿ÀûÇÒ´ç ÇØÁ¦

	animal = new Dog("¸¶·ç", 5, 2, 100);	// µ¿ÀûÇÒ´ç
	animal->walk();
	animal->bark();
	animal->eat();
	delete animal;

	
}