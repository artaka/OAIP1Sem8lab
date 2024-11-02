#include <iostream>
#include <vector>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	vector<int> arr;
	int n, sum = 0;
	cout << "¬ведите количество элементов последовательности:";
	cin >> n;
	for (int i = 0;i != n;++i) {
		int num;
		cin >> num;
		arr.push_back(num);
	}
	for (int i = 1;i != arr.size();++i) {
		if (arr[i] % 2 == 0) {
			sum += arr[i];
		}
	}
	cout << "Sum=" << sum;
}