#pragma once
#include <vector>

class CMyAlgorithm {
public:
	CMyAlgorithm() = default;
	// Copy constructor
	CMyAlgorithm(const CMyAlgorithm& other) = default;
	// Assignment constructor
	CMyAlgorithm& operator=(const CMyAlgorithm& other) = default;
	// Sort algorithm
	// Bubble Sort
	void BubbleSort(std::vector<int>& vSort);
};