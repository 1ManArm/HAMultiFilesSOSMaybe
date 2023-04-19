#include <iostream>
#include <fstream>
#include <string>
#include "Functions.h"

int main() {
	setlocale(LC_ALL, "Russian");

	//������ 1
	std::ofstream out;
	out.open("file.txt", std::ios::app);
	if (out.is_open()) {
		std::string input;
		do {
			std::cout << "������� ������: ";
			std::getline(std::cin, input);
			out << input << "\n";
		} while (input != "end");
	}
	else
		std::cout << "������ �������� �����\n";
	std::ifstream in;
	in.open("file.txt");
	if (in.is_open()) {
		std::string str;
		while (std::getline(in, str))
			std::cout << str << std::endl;
	}
	else
			std::cout << "������ �������� �����\n";
	in.close();
	remove("file.txt");

	//������ 2
	std::cout << "������� ����� -> ";
	std::string word;
	std::getline(std::cin, word);
	if (overwrite(word))
		std::cout << "����� �������� � ����. \n\n";
	else
		std::cout << "������ ���������� �������.\n\n";


	return 0;
}