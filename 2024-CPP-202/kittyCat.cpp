#include <iostream>

using namespace std;

// �θ� Ŭ���� Cat
class Cat {
public:
	// �θ� ������
	Cat(string name, int age) : name_(name), age_(age) {
		cout << "�̸� : " << name_ << endl;
		cout << "���� : " << age_ << endl;
	}
	// �Ҹ���
	 ~Cat() {
		cout << "����� �Ҹ��" << endl;
	 }
	// ����̰� �ϴ� �ൿ���� �����Լ��� ����
	virtual void sound(void) {
		cout << "��� �����" << endl;
	}
	virtual void sleep(void) {
		cout << "���ڴ� �����" << endl;
	}
private:
	// ����� �Ӽ�
	string name_;
	int age_;
};

// �ڽ� Ŭ���� Kitty
class Kitty : public Cat {
public:
	// �ڽ� ������
	Kitty(string name, int age) : Cat(name, age) {
		
	}
	// �Ҹ���
	~Kitty() {
		
	}
	void sound() override {
		cout << "�߿˾߿�" << endl;
	}
	void sleep() override {
		cout << "����" << endl;
	}
};
void main(void) {
	Cat* cat = new Cat("�����������ٺ�ġ", 10);
	cat->sound();
	cat->sleep();
	delete cat;

	Cat* kitty = new Kitty("��������", 5);
	kitty->sound();
	kitty->sleep();
	delete kitty;
}