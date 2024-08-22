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
	~Animal() {
		cout << "Animal �Ҹ���" << endl;
	}
	// ������ �ϴ� �ൿ��
	virtual void walk(void) {
		cout << "�ȴ�" << endl;
	}
	virtual void bark(void) {
		cout << "¢��" << endl;
	}
	virtual void eat(void) {
		cout << "�Դ�" << endl;
	}
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
	~Dog() {
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
	Animal* animal = new Dog("����", 5, 2, 100);	// �����Ҵ�
	
	delete animal;

	
}