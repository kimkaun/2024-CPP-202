#include <iostream>

using namespace std;

class Animal {		// Animal Ŭ���� 
public:
	// ������ �ϴ� �ൿ��
	void walk(void) {
		cout << "�ȴ�" << endl;
	}
	void bark(void) {
		cout << "¢��" << endl;
	}
	void eat(void) {
		cout << "�Դ�" << endl;
	}
private:
	// ���� �Ӽ���
	string name_;
	unsigned int age_;
	int leg_num_;
};

void main(void) {
	Animal* animal = new Animal();	// �����Ҵ�
	animal->walk();	
	animal->bark();
	animal->eat();
	delete animal;	// �����Ҵ� ����
	
}