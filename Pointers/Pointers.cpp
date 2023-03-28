#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

#define tab "\t"

//#define POINTERS_BASIC

void main()
{
	setlocale(LC_ALL, "");
#ifdef POINTERS_BASIC
		int a = 2;
	int* pa = &a;			//Объявление указателя 'pa', и инициализация его адресом переменной 'a'
	cout << a << endl;		//Выводим значение переменной 'a'
	cout << &a << endl;		//Взятие адреса переменной 'a' прямо при выводе
	cout << pa << endl;		//Вывод адреса переменной 'a', хранящегося в указателе 'pa'
	cout << *pa << endl;
#endif // POINTERS_BASIC

	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr + i << tab;
	}
	cout << endl;
}