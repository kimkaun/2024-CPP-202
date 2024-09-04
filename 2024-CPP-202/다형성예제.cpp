#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Food {
public:
	// 생성자
	Food(int civil, int force, string name, int territory)
		: civil_(civil), force_(force), name_(name), territory_(territory) {

	}

	virtual ~Food() {}  // 가상 소멸자 추가

	virtual void show() {
		// Food::show()를 재귀적으로 호출하는 부분 제거
		cout << "국민 수 : " << civil_ << endl;
		cout << "군사력 : " << force_ << endl;
		cout << "이름 : " << name_ << endl;
		cout << "땅 : " << territory_ << endl;
	}

	virtual void attack(Food* target) = 0;  // 순수 가상 함수, 자식 클래스에서 구현해야 함

	// Food 속성
public:
	int civil_;			// 국민 수
	int force_;			// 군사력 : 0이 되면 멸망
	string name_;		// 이름
	int territory_;		// 땅(면적)
};

class Kimchi : public Food {
	// 상속받은 것의 생성자
public:
	Kimchi(int civil, int force, string name, int territory, int garlic, int pepper)
		: Food(civil, force, name, territory), garlic_(garlic), pepper_(pepper) {
		ca_ = 0;
	}
	void show() override {
		Food::show();
		cout << "마늘 : " << garlic_ << endl;
		cout << "고추 : " << pepper_ << endl;
	}
	// 기본 공격 매 3타마다 크리티컬 데미지
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
	int ca_;		// 기본공격 3타당 크리티컬 어택
};

class Jelly : public Food {
public:
	Jelly(int civil, int force, string name, int territory, int gelatin, int sugar)
		: Food(civil, force, name, territory), gelatin_(gelatin), sugar_(sugar) {

	}
	void show() override {
		Food::show();
		cout << "젤라틴 : " << gelatin_ << endl;
		cout << "설탕 : " << sugar_ << endl;
	}
	void attack(Food* target) override {
		target->force_ += this->force_ / 2;
	}
public:
	int gelatin_;		// 젤라틴
	int sugar_;			// 설탕의 힘
};

class Cheese : public Food {
public:
	Cheese(int civil, int force, string name, int territory, int milk, int rennet)
		: Food(civil, force, name, territory), milk_(milk), rennet_(rennet) {

	}
	void show() override {
		Food::show();
		cout << "우유 : " << milk_ << endl;
		cout << "응고제 : " << rennet_ << endl;
	}
	void attack(Food* target) override {
		target->force_ += this->force_ / 3;
	}
public:
	int milk_;
	int rennet_;		// 응고제
};

int main(void) {
	Food* player = new Kimchi(15, 95, "갓김치", 86, 100, 100);
	Food* friends = new Cheese(100, 20, "짜계치", 100, 20, 100);

	while (true) {
		system("cls");
		cout << "★ 나 ★" << endl;
		player->show();

		cout << endl << endl;
		cout << "★ 상대방 ★" << endl;
		friends->show();

		cout << "------------------------------" << endl;

		int select;
		cout << "1. 공격" << endl;
		cout << "2. 특수1" << endl;
		cout << "3. 특수2" << endl;
		cout << "4. 방어" << endl;

		cout << "------------------------------" << endl;

		cin >> select;
		switch (select) {
		case 1:
			// TODO : 공격
			cout << "공격" << endl;
			player->attack(friends);
			break;
		case 2:
			// TODO : 특수1
			cout << "특수1" << endl;
			break;
		case 3:
			// TODO : 특수2
			cout << "특수2" << endl;
			break;
		case 4:
			// TODO : 방어
			cout << "방어" << endl;
			break;
		default:
			cout << "디폴트" << endl;
		}
		system("pause");
	}
	delete player;
	delete friends;
}
