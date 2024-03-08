#pragma once
#include <string>

class CEncapsulation {
	int age;
public:
	std::string name;
	void setAge(int age) {
		this->age = age;
	}
	int getAge() {
		return age;
	}
};