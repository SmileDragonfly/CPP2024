// OOPCharateristics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Encapsulation.h"
#include "Template.h"

int main()
{
	//CEncapsulation encap;
	//encap.name = "Doan Trong Dat";
	//encap.setAge(10);
	//std::cout << encap.getAge();
	//try {
	//	// Code that might throw an exception
	//	int a = 0;
	//	int result = 5 / a;
	//	std::cout << result << std::endl;
	//}
	//catch (const std::exception& e) {
	//	std::cout << "Caught an exception: " << e.what() << std::endl;
	//}
	int sum = Add(2, 4);
	std::cout << sum << std::endl;
	double fSum = Add(2.1, 2.3);
	std::cout << fSum << std::endl;
	PrintTemp(4, std::string("tao la dat"));
	char ch = getchar();
	return 0;
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
