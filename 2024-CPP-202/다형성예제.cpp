#include <iostream>
#include <string>

using namespace std;

class Food {
public:
	// ������
	Food(int civil, int force, string name, int territory)		
		: civil_(civil), force_(force), name_(name), territory_(territory) {
		
	}
	void show() {
		cout << "���� �� : " << civil_ << endl;
		cout << "����� : " << force_ << endl;
		cout << "�̸� : " << name_ << endl;
		cout << "�� : " << territory_ << endl;
	}
// Food �Ӽ��ε� �̻��� ���� Food kingdom ����...?
private:
	int civil_;			// ���� ��
	int force_;			// �����
	string name_;		// �̸�
	int territory_;		// ��(����)
};

class Kimchi : public Food {
// ��ӹ��� ���� ������
public:
	Kimchi(int civil, int force, string name, int territory, int garlic, int pepper) 
		: Food(civil, force, name, territory), garlic_(garlic), pepper_(pepper) {

		}
	void show() {
		cout << "���� : " << garlic_ << endl;
		cout << "���� : " << pepper_ << endl;
	}
private:
	int garlic_;	
	int pepper_;
};

class Jelly : public Food {
public:
	Jelly(int civil, int force, string name, int territory, int gelatin, int sugar)
		: Food(civil, force, name, territory), gelatin_(gelatin), sugar_(sugar) {

	}
	void show() {
		cout << "����ƾ : " << gelatin_ << endl;
		cout << "���� : " << sugar_ << endl;
	}
private:
	int gelatin_;		// ����ƾ
	int sugar_;			// ������ ��
};

class Cheese : public Food {
public:
	Cheese(int civil, int force, string name, int territory, int milk, int Rennet)
		: Food(civil, force, name, territory), milk_(milk), rennet_(rennet) {

	}
	void show() {
		Food::show();
		cout << "���� : " << milk_ << endl;
		cout << "������ : " << rennet_ << endl;
 	}
private:
	int milk_;
	int rennet_;		// ������
};

void main(void) {
	Food* player = new Kimchi(15, 95, "����ġ", 86, 100, 100);
	Food* friends = new Cheese(100, 20, "¥��ġ", 100, 20, 100);
	
	player->show();
	friends->show();

	delete player;
	delete friends;
}