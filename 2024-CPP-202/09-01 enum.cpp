#include <iostream>

using namespace std;

// ���� ��Ÿ���� ��Ÿ���� enum ����
// ������ ���� 
enum FoodStyle {
    KOREAN,     // 0: �ѽ� (0�� ����Ʈ ���̰� ���� �ְ� ������ KOREAN=0���� �Ѵ�. )
    JAPANESE,   // 1: �Ͻ�
    CHINESE     // 2: �߽�
};

int main(void) {
    // 0 : �ѽ�, 1 : �Ͻ�, 2 : �߽�
    // �������� ����ϸ� �������� ��������, �߰��� ���� �����ϰ� �߰��� �� �ִ�. 
    int style = FoodStyle::KOREAN; // enum ������ �ʱ�ȭ

    switch (style) {
    case FoodStyle::KOREAN:
        cout << "��ġ, ��, �����" << endl;
        break;
    case FoodStyle:::
        cout << "�ʹ�, �쵿, Ÿ�ھ߳�" << endl;
        break;
    case FoodStyle::CHINESE:
        cout << "������, �������ķ�" << endl;
        break;
    }

    return 0;
}
