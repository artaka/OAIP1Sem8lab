#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int count = 5, n = 1;
	float b, m = 9999;
	for (int i = 0; i < count; i++)
	{
		cout << "������� b" << i << endl;
		cin >> b;
		if (b < m)
		{
			m = b;
			n = i;
		}
	}
	cout << "�����������= " << m << endl;
	cout << "��� ������= " << n << endl;
}
