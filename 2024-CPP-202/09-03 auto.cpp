#include <iostream>
#include <vector>
#include <string>

using namespace std;

void main(void) {
	vector<string> v = { "�Ե�����", "��ȭ�鼼��", "���ֵ帲Ÿ��", "���̵��ϸ�" };

	for (string str : v) {
		cout << str << endl;
	}
}