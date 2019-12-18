#pragma once
#include <string>
#include <iostream>

class CPerson
{
	std::string fName, sName;
	double account;
public:
	CPerson();
	CPerson(std::string fN, std::string sN, double a);

	friend std::ostream& operator<<(std::ostream& out, const CPerson& temp);
};

std::ostream& operator<<(std::ostream& out, const CPerson& temp) {
	out << temp.fName << " " << temp.sName << " " << temp.account;
	return out;
}
