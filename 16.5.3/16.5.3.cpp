// 16.5.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <functional>	



bool initial_with_a (std::string string) {
	return string.empty() ? false : string.at(0) == 'a';
}


int main()
{
	std::vector<std::string> vsFruits;

	std::string sFruit;
	while (true) {
		std::getline(std::cin, sFruit);
		if (sFruit.empty()) break;
		vsFruits.push_back(sFruit);
	} 

	//std::copy(std::istream_iterator<std::string>(std::cin), std::istream_iterator<std::string>(), std::back_inserter(vsFruits));

	std::sort(vsFruits.begin(), vsFruits.end());
	std::string a;
	
	auto p1 = std::find_if(vsFruits.begin(), vsFruits.end(), initial_with_a);

	std::copy(vsFruits.begin(), vsFruits.end(), std::ostream_iterator<std::string>(std::cout, "\n"));



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
