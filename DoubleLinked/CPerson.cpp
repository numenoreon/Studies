#include "CPerson.h"

CPerson::CPerson()
	: fName(""), sName(""), account(0) {}

CPerson::CPerson(std::string fN, std::string sN, double a)
	: fName(fN), sName(sN), account(a) {}
