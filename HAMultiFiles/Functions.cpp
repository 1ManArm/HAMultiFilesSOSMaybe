#include <iostream>
#include <fstream>
#include <string>
#include "Functions.h"

bool overwrite(std::string str) {
	std::ofstream out;
	const std::string path = "words.txt";
	out.open(path, std::ios::out);
	if (out.is_open()) {
		std::cout << "Успешно!\n";
		out.close();
		return true;
	}
	out.close();
	return false;

}