// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iterator>
#include <vector>
#include <numeric>
#include <algorithm>

int main()
{
	std::vector<char> vcAlphabet(26);
	std::iota(vcAlphabet.begin(), vcAlphabet.end(), 'A');
	//std::copy(vcAlphabet.begin(), vcAlphabet.end(), std::ostream_iterator<char>(std::cout, "\n"));
	std::for_each(vcAlphabet.begin(), vcAlphabet.end(), [](char c){std::cout << c << "\n";});

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
