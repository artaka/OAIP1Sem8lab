#include <iostream>
#include <vector>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	vector<int> arr;
	int n, index = -1;
	cout << "������� ���������� ��������� ������������������:";
	cin >> n;

	for (int i = 0;i != n;++i) {
		int num;
		cin >> num;
		arr.push_back(num);
	}

	for (int i = 0;i != arr.size();++i) {
		if (arr[i] < 0) {
			index = i;
		}
	}

	if (index > 0) {
		cout << "Index=" << index;
	}
	else {
		cout << "������������� ����� ���!";
	}
}