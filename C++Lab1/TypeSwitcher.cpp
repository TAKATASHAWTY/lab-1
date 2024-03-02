#include "TypeSwitcher.h"

void tSwitcher(void)
{
	setlocale(0, "");
	int a, b;
	cout << "������� �������� ���������� <a>: ";
	cin >> a;
	cout << "������� �������� ���������� <b>: ";
	cin >> b;
	cout << endl;

	void obmen1(int , int );
	void obmen2(int*, int*);
	void obmen3(int&, int&);

	cout << "�� ������:\ta=" << a << "\tb=" << b << endl;
	obmen1(a, b);
	cout << "����� ������ 1:\ta=" << a << "\tb=" << b << endl;
	int* pa = &a;
	int* pb = &b;
	obmen2(pa, pb);
	cout << "����� ������ 2:\ta=" << a << "\tb=" << b << endl;
	int& aRef = a;
	int& bRef = b;
	obmen3(aRef, bRef);
	cout << "����� ������ 3:\ta=" << a << "\tb=" << b << endl;

}

void obmen1(int x, int y) {
	int bufX = x;
	int bufY = y;

	x = bufY;
	y = bufX;

	cout << "����� ������� obmen1 �� ������� ����������, �.�. �� �� ����� �������� ���������� ��-�� ������������� ������� ���������." << endl;
}

void obmen2(int* x, int* y) {
	int bufX = *x;
	int bufY = *y;

	*x = bufY;
	*y = bufX;

	cout << "����� ������� obmen2 �������� ������� �������� ��������� �������� � ������ ������, �������� �������� � ���." << endl;
}

void obmen3(int& x, int& y) {
	int bufX = x;
	int bufY = y;

	x = bufY;
	y = bufX;

	cout << "����� ������� obmen3 �������� ������� �������� ��������� � ���������� �� ������ ������� ��������� �� ��� ����� � ������." << endl;
}
