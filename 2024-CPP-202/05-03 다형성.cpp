#include <iostream>

using namespace std;

class Animal {		// Animal Ŭ���� 
public:
	// ������
	Animal(string name, unsigned int age, int leg_num)
		: name_(name), age_(age), leg_num_(leg_num) {	// �������(�Ű�����)
			cout << "�̸� : " << name_<< endl;
			cout << "���� : " << age_ << endl;
			cout << "�ٸ� : " << leg_num_ << endl;
		}
	virtual ~Animal() {
		cout << "Animal �Ҹ���" << endl;
	}
	// ���� �����Լ�(�߻�޼���)
	virtual void walk(void) = 0;
	virtual void bark(void) = 0;
	virtual void eat(void) = 0;
private:
	// ���� �Ӽ���
	string name_;
	unsigned int age_;
	int leg_num_;
};

class Dog : public Animal {
public:
	Dog(string name, int age, int leg_num, int loyalty)
		: Animal(name, age, leg_num), loyalty_(loyalty) {	// name_(name) --> ����, dog�� animal�� ��������� ����
			cout << "�漺��" << endl;
		}
	virtual ~Dog() {
		cout << "Dog �Ҹ���" << endl;
	}
	void bark() override {
		cout << "��������" << endl;
	}
	void eat() override {
		cout << "�տ�" << endl;
	}
	void walk() override {
		cout << "�h�h�h�h" << endl;
	}
private:
	int loyalty_;	// �漺��
};

void main(void) {
	// �߻�Ŭ������ ��ü�� ������ �� ����(new Animal() �Ұ�)
	Animal* animal = new Dog("����", 5, 2, 100);	// �����Ҵ�
	animal->bark();
	delete animal;

	
}