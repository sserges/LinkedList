#include <iostream>

#include "Person.h"

Person::Person(const String& _name, unsigned int _age) {
	Set(_name, _age);
}

void Person::Set(const String& _name, unsigned int _age) {
	mName = _name;
	mAge = _age;
}

void Person::Display() const {
	std::cout << mName << '\t' << mAge << '\n';
}