#include <iostream>
#include <string>

using namespace std;

class Food {
public:
	// ������
	Food(int civil, int force, string name, int territory)		
		: civil_(civil), force_(force), name_(name), territory_(territory) {

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
private:
	int garlic_;	
	int pepper_;
};

class Jelly : public Food {
public:
	Jelly(int civil, int force, string name, int territory, int gelatin, int sugar)
		: Food(civil, force, name, territory), gelatin_(gelatin), sugar_(sugar) {

	}
private:
	int gelatin_;		// ����ƾ
	int sugar_;			// ������ ��
};

class Cheese : public Food {
public:
	Cheese(int civil, int force, string name, int territory, int milk, int Rennet)
		: Food(civil, force, name, territory), milk_(milk), Rennet_(Rennet) {

	}
private:
	int milk_;
	int Rennet_;		// ������
};