#include <iostream>
using namespace std;

int main() {
    float q, t = 0.45, sum = 0;
    double x[6] = { 1.1, 6.2, 3, -4,6,1 };
    for (int i = 0; i < 6; i++) {
        sum += ((x[i] + 1) / x[i]);
    }
    q = t + sum;

    cout << q;
}
