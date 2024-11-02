#include <iostream>
using namespace std;

int main() {
	double y, x[5], t = 0.5;

	for (int i = 0; i != 5; ++i) { //Цикл для заполнения массива
		cin >> x[i];
	}

	while (t < 3.1) {
		y = 0;
		if (t > 2) {
			for (int i = 0; i != 5; ++i) {
				y += x[i] * x[i] + t;
			}
		}
		else {
			y = cos(t * t);
		}
		cout << "y=" << y << endl;
		t += 0.5;
	}
}