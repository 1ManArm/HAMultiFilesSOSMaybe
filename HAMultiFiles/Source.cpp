#include <iostream>
#include <fstream>
#include <string>
#include "Functions.h"

int main() {
	setlocale(LC_ALL, "Russian");

	//Задача 1
	std::ofstream out;
	out.open("file.txt", std::ios::app);
	if (out.is_open()) {
		std::string input;
		do {
			std::cout << "Введите строку: ";
			std::getline(std::cin, input);
			out << input << "\n";
		} while (input != "end");
	}
	else
		std::cout << "Ошибка открытия файла\n";
	std::ifstream in;
	in.open("file.txt");
	if (in.is_open()) {
		std::string str;
		while (std::getline(in, str))
			std::cout << str << std::endl;
	}
	else
			std::cout << "Ошибка открытия файла\n";
	in.close();
	remove("file.txt");

	//Задача 2
	std::cout << "Введите слово -> ";
	std::string word;
	std::getline(std::cin, word);
	if (overwrite(word))
		std::cout << "Слово записано в файл. \n\n";
	else
		std::cout << "Ошибка выполнения функции.\n\n";


	return 0;
}