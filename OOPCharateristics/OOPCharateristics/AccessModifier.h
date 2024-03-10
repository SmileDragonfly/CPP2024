#pragma once
#include <string>
#include <iostream>


class CBaseUser
{
public:
	CBaseUser(int id, int age, std::string accountNo);
	CBaseUser() : id(0), age(0), accountNo("") {};
	~CBaseUser();
public:
	int id;
protected:
	int age;
private:
	std::string accountNo;
public:
	void SetId(int id) {
		this->id = id;
	}
	int GetId() {
		return id;
	}
	void SetAccountNo(std::string accountNo) {
		this->accountNo = accountNo;
	}
	void SetAge(int age) {
		this->age = age;
	}
	int GetAge() {
		return age;
	}
	std::string GetAccountNo() {
		return accountNo;
	}
};

CBaseUser::CBaseUser(int id, int age, std::string accountNo)
{
	this->id = id;
	this->age = age;
	this->accountNo = accountNo;
	std::cout << "Create BaseUser" << std::endl;
}

CBaseUser::~CBaseUser()
{
	std::cout << "Destroy BaseUser" << std::endl;
}

// Same as base class
class CPublicUser : public CBaseUser {
public:
	void CallMethod() {
		SetId(0);
		SetAge(30);
		std::cout << "CPublicUser::CallMethod" << std::endl;
	}
};

// public -> protected
class CProtectedUser : protected CBaseUser {
public:
	void CallMethod() {
		SetId(1);
		SetAge(30);
		std::cout << "CProtectedUser::CallMethod" << std::endl;
	}
	int GetId() {
		return id;
	}
};

// public, protected -> private
class CPrivateUser : private CBaseUser {
	void CallMethod() {
		SetId(1);
		SetAge(30);
		std::cout << "CPrivateUser::CallMethod" << std::endl;
	}
};