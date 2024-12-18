#include <iostream>

using namespace std;

// 음식 스타일을 나타내는 enum 선언
// 열거형 정의 
enum FoodStyle {
    KOREAN,     // 0: 한식 (0은 디폴트 값이고 값을 주고 싶으면 KOREAN=0으로 한다. )
    JAPANESE,   // 1: 일식
    CHINESE     // 2: 중식
};

int main(void) {
    // 0 : 한식, 1 : 일식, 2 : 중식
    // 열겨형을 사용하면 가독성도 좋아지고, 중간에 값을 유연하게 추가할 수 있다. 
    int style = FoodStyle::KOREAN; // enum 값으로 초기화

    switch (style) {
    case FoodStyle::KOREAN:
        cout << "김치, 쌈, 비빔밥" << endl;
        break;
    case FoodStyle:::
        cout << "초밥, 우동, 타코야끼" << endl;
        break;
    case FoodStyle::CHINESE:
        cout << "동파육, 마라탕후루" << endl;
        break;
    }

    return 0;
}
