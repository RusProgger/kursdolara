#include <iostream>
#include <windows.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	// Локализация 
	setlocale(LC_ALL, "Russian");

	cout << "Добро пожаловать в программу 'Курс валют'" << endl;
	cout << "Версия программы 0.0.1" << endl;
	cout << "Автор Руслан Вороненко" << endl;

	double long number_dolar;
	double long number_grn;
	// Запрашиваем у пользователя данные:

	cout << "Введите курс доллара: ";

	// Ввод от пользователя валюты в доллар 
	cin >> number_dolar; 

	cout << "Введите сумму в грн: ";
	
	// Ввод пользователя валюты гривны
	cin >> number_grn;


	// Алгоритм из суммы в грн:

	// Задержка
	Sleep(1500); // небезопасно
	cout << "Ваша сумма " << number_dolar << " долларов = " << number_dolar * number_grn << " в грн." << endl;



	gin.get();
	// system("pause");
	return 0;
}

