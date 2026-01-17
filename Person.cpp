#include <iostream>
#include <iomanip>

#include "Person.h"

// Static data members
int Person::mNumCopies = 0;

Person::Person(const String& _name, unsigned int _age) {
	Set(_name, _age);
}

void Person::Set(const String& _name, unsigned int _age) {
	mName = _name;
	mAge = _age;
}

void Person::Display() const {
	std::cout << std::setw(8) << std::left << mName << '\t' << mAge << '\n';
}

// Overloaded relational operators for sorting
bool Person::operator<(const Person& _rhs) const {
	return strcmp(mName.CStr(), _rhs.mName.CStr()) < 0;
}


bool Person::operator>(const Person& _rhs) const {
	return strcmp(mName.CStr(), _rhs.mName.CStr()) > 0;
}

// Copy constructor
Person::Person(const Person& _p) {
	Set(_p.mName, _p.mAge);
}

// Assignment operator
Person& Person::operator=(const Person& _p) {
	if (this != &_p) {
		Set(_p.mName, _p.mAge);

		mNumCopies++;
	}
	return *this;
}

// Static method helpers
int Person::GetNumCopies() {
	return mNumCopies;
}

void Person::ResetNumCopies() {
	mNumCopies = 0;
}