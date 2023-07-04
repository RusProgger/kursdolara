#include <iostream>
#include <windows.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {

	setlocale(LC_ALL, "Russian");

	cout << "Добро пожаловать в программу 'Курс валют'" << endl;
	cout << "Версия программы 0.0.1" << endl;
	cout << "Автор Руслан Вороненко" << endl;

	double long number_dolar;
	double long number_grn;
	// Запрашиваем у пользователя данные:

	cout << "Введите курс доллара: ";
	cin >> number_dolar;

	cout << "Введите сумму в грн: ";
	cin >> number_grn;


	// Алгоритм разбивания суммы в грн:

	Sleep(1500);
	cout << "Ваша сумма " << number_dolar << " долларов = " << number_dolar * number_grn << " в грн." << endl;




	system("pause");
	return 0;
}

