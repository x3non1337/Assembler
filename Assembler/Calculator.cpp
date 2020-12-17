#include <iostream>

using namespace std;

int menu(int num);
int Add(int x, int y);
int Sub(int x, int y);
int Mul(int x, int y);
int Div(int x, int y);

int main()
{
	setlocale(LC_CTYPE, "rus");

	int num = 0;

	do
	{
		num = menu(num);
	} while (num != 0);
}

int menu(int num)
{
	cout << "\n0 - выход\n";
	cout << "1 - Сложение\n";
	cout << "2 - Вычитание\n";
	cout << "3 - Умножение\n";
	cout << "4 - Деление\n";
	cout << "\nВведите нужную операцию: "; cin >> num;

	switch (num)
	{
	case 1:
	{
		int x, y;

		cout << "Введите число a: "; cin >> x;
		cout << "Введите число b: "; cin >> y;
		cout << Add(x, y) << "\n"; break;
	}

	case 2:
	{
		int x, y;

		cout << "Введите число a: "; cin >> x;
		cout << "Введите число b: "; cin >> y;
		cout << Sub(x, y) << "\n"; break;
	}

	case 3:
	{
		int x, y;

		cout << "Введите число a: "; cin >> x;
		cout << "Введите число b: "; cin >> y;
		cout << Mul(x, y) << "\n"; break;
	}

	case 4:
	{
		int x, y;

		cout << "Введите число a: "; cin >> x;
		cout << "Введите число b: "; cin >> y;
		cout << Div(x, y) << "\n"; break;
	}

	return num;
	}
}

int Add(int x, int y)
{
	_asm
	{
		mov eax, x;
		mov ebx, y;
		add eax, ebx;
		mov x, eax;
	}

	return x;
}

int Sub(int x, int y)
{
	_asm
	{
		mov eax, x;
		mov ebx, y;
		sub eax, ebx;
		mov x, eax;
	}

	return x;
}

int Mul(int x, int y)
{
	_asm
	{
		mov eax, x;
		mov ebx, y;
		mul ebx;
		mov x, eax;
	}

	return x;
}

int Div(int x, int y)
{
	_asm
	{
		mov eax, x;
		mov ecx, y;
		sub edx, edx;
		div ecx;
		mov x, eax;
	}

	return x;
}