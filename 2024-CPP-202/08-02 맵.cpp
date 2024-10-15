#include <iostream> 
# include <map>

using namespace std;

void main(void) {
	map<string, long long> money;

	// �� �߰�
	money["����"] = 10000000000;
	money["����"] = 30000000000;
	money["�μ�"] = 100;

	// �ݺ���
	// map<string, long long>::iterator iter;
	for (auto iter = money.begin(); iter != money.end(); iter++) {
		cout << iter->first << "�� " << iter->second << endl;
	}

	// �� ����
	money["�μ�"] = 10000000000;
	cout << money["�μ�"] << endl;

	// ũ��
	cout << money.size() << endl;

}