#pragma once
#include <string>
#include <iostream>

class COverBase {
public:
	int Square(int x) {
		return x * x;
	}
	float Square(float f) {
		return f * f;
	}
	virtual void Print(std::string s) {
		std::cout << "COverBase: " << s << std::endl;
	}
};

class COverWriting : public COverBase {
public:
	void Print(std::string s) {
		std::cout << "COverWriting: " << s << std::endl;
	}
};