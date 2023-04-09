//Reference
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int a = 2;
	//int - 'int'
	//int* - указатель на 'int'
	//int& - ссылка на 'int'
	int& ra=a;
	ra += 3;
	cout << a << endl;
}