#include <iostream>
#include <string>

using namespace std;

class Food {
public:
	// 생성자
	Food(int civil, int force, string name, int territory)		
		: civil_(civil), force_(force), name_(name), territory_(territory) {

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
	int gelatin_;		// 젤라틴
	int sugar_;			// 설탕의 힘
};

class Cheese : public Food {
public:
	Cheese(int civil, int force, string name, int territory, int milk, int Rennet)
		: Food(civil, force, name, territory), milk_(milk), Rennet_(Rennet) {

	}
private:
	int milk_;
	int Rennet_;		// 응고제
};