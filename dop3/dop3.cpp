#include <iostream>
#include <vector>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	vector<double> arr;
	int n, minIndex = 0, maxIndex = 0;
	cout << "������� ���������� ��������� ������������������:";
	cin >> n;

	for (int i = 0;i != n;++i) {
		int num;
		cin >> num;
		arr.push_back(num);
	}

	for (int i = 1; i != arr.size(); ++i) { //���� ��� ���������� ������������ ��������
		if (arr[i] < arr[minIndex]) {
			minIndex = i;
		}
	}

	for (int i = 1; i != arr.size(); ++i) { //���� ��� ���������� ������������� ��������
		if (arr[i] > arr[maxIndex]) {
			maxIndex = i;
		}	
	}
	cout << "Count=" << abs(maxIndex-minIndex)-1;
}