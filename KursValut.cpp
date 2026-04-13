#include <iostream>
#include <windows.h>


// Locale WinApi

void Locale() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
}


int main() {
	// Локализация, locale
	Locale();

	std::cout << "------------------ Добро пожаловать в программу 'Курс валют' ------------------" << std::endl;

	
	long double numberDolar {}; // переменная для доллара
	double userRate {};

	
	// Запрашиваем у пользователя данные:
	std::cout << "Введите курс доллара: ";

	// Ввод от пользователя валюты в доллар 
	std::cin >> numberDolar; 
	
	std::cout << "Сколько у вас долларов: ";
	std::cin >> userRate;

	// result

	float ukrMoneyResult = (numberDolar * userRate);
	 
	std::cout << "Вы получите из " << userRate << " долларов = " << ukrMoneyResult << " грн." << std::endl;

	std::cin.ignore();
	std::cin.get();
	return 0;
}


