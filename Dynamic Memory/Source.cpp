#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
int* push_back(int arr[], int& n, int value);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int* arr=new int[n];


	FillRand(arr, n);
	Print(arr, n);

	int value;
	cout << "Введите добавляемое значение: "; cin >> value;

	push_back(arr, n, value);
	Print(arr, n);

	delete[] arr;
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}
int* push_back(int arr[], int& n, int value)
{
	//1) Создаем буферный массив нужного размера
	int* buffer = new int[n + 1];

	//2) Копируем все значения из исходного массива в буферный
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}

	//3) Удаляем исходный массив
	delete[] arr;

	//4) Подменяем адрес старого массива адресом нового массива 
	arr = buffer;

	//5) Только после этого в массив arr можно добавить значение
	arr[n] = value;

	//6) После того как в массив добавился элемент, количество его элементов увеличивается на 1
	n++;

	//7) Возвращаем новый массив
	return arr;
}