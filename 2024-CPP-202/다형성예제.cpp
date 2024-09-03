#include <iostream>
#include <string>

using namespace std;

class Food {
public:
	// 생성자
	Food(int civil, int force, string name, int territory)		
		: civil_(civil), force_(force), name_(name), territory_(territory) {
		
	}
	void show() {
		cout << "국민 수 : " << civil_ << endl;
		cout << "군사력 : " << force_ << endl;
		cout << "이름 : " << name_ << endl;
		cout << "땅 : " << territory_ << endl;
	}
// Food 속성인데 이상함 뭔가 Food kingdom 같은...?
private:
	int civil_;			// 국민 수
	int force_;			// 군사력
	string name_;		// 이름
	int territory_;		// 땅(면적)
};

class Kimchi : public Food {
// 상속받은 것의 생성자
public:
	Kimchi(int civil, int force, string name, int territory, int garlic, int pepper) 
		: Food(civil, force, name, territory), garlic_(garlic), pepper_(pepper) {

		}
	void show() {
		cout << "마늘 : " << garlic_ << endl;
		cout << "고추 : " << pepper_ << endl;
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
		cout << "젤라틴 : " << gelatin_ << endl;
		cout << "설탕 : " << sugar_ << endl;
	}
private:
	int gelatin_;		// 젤라틴
	int sugar_;			// 설탕의 힘
};

class Cheese : public Food {
public:
	Cheese(int civil, int force, string name, int territory, int milk, int Rennet)
		: Food(civil, force, name, territory), milk_(milk), rennet_(rennet) {

	}
	void show() {
		Food::show();
		cout << "우유 : " << milk_ << endl;
		cout << "응고제 : " << rennet_ << endl;
 	}
private:
	int milk_;
	int rennet_;		// 응고제
};

void main(void) {
	Food* player = new Kimchi(15, 95, "갓김치", 86, 100, 100);
	Food* friends = new Cheese(100, 20, "짜계치", 100, 20, 100);
	
	player->show();
	friends->show();

	delete player;
	delete friends;
}