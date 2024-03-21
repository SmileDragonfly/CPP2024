#include "MyAlgorithm.h"
#include <iostream>

// Bubble sort: sau moi lan lap se day phan tu lon nhat ve cuoi mang
void CMyAlgorithm::BubbleSort(std::vector<int>& vSort) {
	int nLength = static_cast<int>(vSort.size());
	for (int i = 0; i < nLength; i++) {
		for (int j = 0; j < nLength - i - 1; j++)
		{
			if (vSort[j] > vSort[j + 1]) {
				std::swap(vSort[j], vSort[j + 1]);
			}
		}
	}
	for (int i = 0; i < vSort.size(); i++) {
		std::cout << vSort[i] << " ";
	}
	std::cout << std::endl;
}