#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Food {
public:
	// ������
	Food(int civil, int force, string name, int territory)
		: civil_(civil), force_(force), name_(name), territory_(territory) {

	}

	virtual ~Food() {}  // ���� �Ҹ��� �߰�

	virtual void show() {
		// Food::show()�� ��������� ȣ���ϴ� �κ� ����
		cout << "���� �� : " << civil_ << endl;
		cout << "����� : " << force_ << endl;
		cout << "�̸� : " << name_ << endl;
		cout << "�� : " << territory_ << endl;
	}

	virtual void attack(Food* target) = 0;  // ���� ���� �Լ�, �ڽ� Ŭ�������� �����ؾ� ��

	// Food �Ӽ�
public:
	int civil_;			// ���� ��
	int force_;			// ����� : 0�� �Ǹ� ���
	string name_;		// �̸�
	int territory_;		// ��(����)
};

class Kimchi : public Food {
	// ��ӹ��� ���� ������
public:
	Kimchi(int civil, int force, string name, int territory, int garlic, int pepper)
		: Food(civil, force, name, territory), garlic_(garlic), pepper_(pepper) {
		ca_ = 0;
	}
	void show() override {
		Food::show();
		cout << "���� : " << garlic_ << endl;
		cout << "���� : " << pepper_ << endl;
	}
	// �⺻ ���� �� 3Ÿ���� ũ��Ƽ�� ������
	void attack(Food* target) override {
		ca_++;
		if (ca_ % 3 == 0)
			target->force_ -= this->force_ * 2;
		else
			target->force_ -= this->force_;
	}
public:
	int garlic_;
	int pepper_;
	int ca_;		// �⺻���� 3Ÿ�� ũ��Ƽ�� ����
};

class Jelly : public Food {
public:
	Jelly(int civil, int force, string name, int territory, int gelatin, int sugar)
		: Food(civil, force, name, territory), gelatin_(gelatin), sugar_(sugar) {

	}
	void show() override {
		Food::show();
		cout << "����ƾ : " << gelatin_ << endl;
		cout << "���� : " << sugar_ << endl;
	}
	void attack(Food* target) override {
		target->force_ += this->force_ / 2;
	}
public:
	int gelatin_;		// ����ƾ
	int sugar_;			// ������ ��
};

class Cheese : public Food {
public:
	Cheese(int civil, int force, string name, int territory, int milk, int rennet)
		: Food(civil, force, name, territory), milk_(milk), rennet_(rennet) {

	}
	void show() override {
		Food::show();
		cout << "���� : " << milk_ << endl;
		cout << "������ : " << rennet_ << endl;
	}
	void attack(Food* target) override {
		target->force_ += this->force_ / 3;
	}
public:
	int milk_;
	int rennet_;		// ������
};

int main(void) {
	Food* player = new Kimchi(15, 95, "����ġ", 86, 100, 100);
	Food* friends = new Cheese(100, 20, "¥��ġ", 100, 20, 100);

	while (true) {
		system("cls");
		cout << "�� �� ��" << endl;
		player->show();

		cout << endl << endl;
		cout << "�� ���� ��" << endl;
		friends->show();

		cout << "------------------------------" << endl;

		int select;
		cout << "1. ����" << endl;
		cout << "2. Ư��1" << endl;
		cout << "3. Ư��2" << endl;
		cout << "4. ���" << endl;

		cout << "------------------------------" << endl;

		cin >> select;
		switch (select) {
		case 1:
			// TODO : ����
			cout << "����" << endl;
			player->attack(friends);
			break;
		case 2:
			// TODO : Ư��1
			cout << "Ư��1" << endl;
			break;
		case 3:
			// TODO : Ư��2
			cout << "Ư��2" << endl;
			break;
		case 4:
			// TODO : ���
			cout << "���" << endl;
			break;
		default:
			cout << "����Ʈ" << endl;
		}
		system("pause");
	}
	delete player;
	delete friends;
}
