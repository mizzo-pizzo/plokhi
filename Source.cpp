#include <iostream>
using namespace std;
int main() {
	//���� ����� ����� n. �������� n ��� ������ @
	/*int n;
	cin >> n;
	for (int i = 1; i <= n; i += 1) {
		cout << '@';
	}*/
	//���� 2 ����� x � � (x < y ) . ����� ����� ������ ����� �� ��������� x-y.
	/*int x, y, i, sum = 0;
	cout << "vvedite x: ";
	cin >> x;
	cout << "vvedite x: ";
	cin >> y;
	i = x;
	while (i <= y) {
		if (i % 2 == 0) {
			sum += i;
		}
		i++;
	} 
	cout << sum << endl;*/

	//���� 2 ����� x � � (x < y ) . ���������� ��������  ������ �� ��������� x-y � ������� ��������
	/*int x, y, i;
	for (int i = 90; i > 5; i -= 3) {
		if (i % 5 && i % 2)
			cout << i;
	}*/

	/*//�� �������� ������������ 20x3 �� �������� #
	for (int i = 0; i < 20; i++)cout << '#';
	cout << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << '#';
		for (int j = 0; j < 18; j++) cout << ' ';
		cout << '#' << endl;

	}
	for (int i = 0; i < 20; i++) cout << '#';
	cout << endl;*/
	
/*
//18  ������ ����������� ����� N. ����� ���������� ����������� �����, �� ������������� N � �� ��������� �� �� ���� �� ����� 2,3,5.
	int n;
	cout << "Enter number: ";
	cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++)
		if (i % 2 == 0 && i % 3 == 0 && i % 5 == 0)
			count++;
   cout << "Count: " << count << endl;*/

	/*//19 ��� ���������� �����, ���������� ���� �� ������, �������� ������������� �����, ������� ������� �� �� ������������.����� ��� �����.
	for (int a = 10; a < 100; a++) {
		for (int b = 10; b < 100; b++) {
			int c = a * 100 + b;
			if (c % (a * b) == 0) cout << endl << a << " " << b << " " << c << " " << a * b << " " << c / (a * b);
		}
	}*/
	/*//22
	int n;
	double s = 0;
	double st;
	cout << "vvedite n: ", cin >> n, cout << "\n";
	for (int i = 1; i <= n; i++) {
		st = 1;
		for (int j = 1; j <= i; j++) st *= i;
		s += (double)1 / st;
	}
	cout << s;*/
}