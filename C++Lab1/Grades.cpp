#include <iostream>
#include "Grade.h"
using namespace std;

void grade(void)
{
	int i, k, num;
	cout << "������� �������� ���������: ";
	cin >> num;
	int power(int, int);
	for (i = 0; i < 10; i++)
	{
		k=power(num, i);
		cout<< "�����: "<< num << "\t�������: " << i << "\t����: " << k << endl;
	}
}

int power(int x, int n)
{
	int i, p = 1;
	for (i = 1; i < n; i++) p *= x;
	return p;
}