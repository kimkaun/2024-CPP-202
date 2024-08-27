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
	virtual ~Animal() {
		cout << "Animal ¼Ò¸êÀÚ" << endl;
	}
	// ¼ø¼ö °¡»óÇÔ¼ö(Ãß»ó¸Þ¼­µå)
	virtual void walk(void) = 0;
	virtual void bark(void) = 0;
	virtual void eat(void) = 0;
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
	virtual ~Dog() {
		cout << "Dog ¼Ò¸êÀÚ" << endl;
	}
	void bark() override {
		cout << "¿ïÇÁ¿ïÇÁ" << endl;
	}
	void eat() override {
		cout << "¿Õ¿Õ" << endl;
	}
	void walk() override {
		cout << "­h­h­h­h" << endl;
	}
private:
	int loyalty_;	// Ãæ¼ºµµ
};

void main(void) {
	// Ãß»óÅ¬·¡½º´Â °´Ã¼¸¦ »ý¼ºÇÒ ¼ö ¾ø´Ù(new Animal() ºÒ°¡)
	Animal* animal = new Dog("¸¶·ç", 5, 2, 100);	// µ¿ÀûÇÒ´ç
	animal->bark();
	delete animal;

	
}