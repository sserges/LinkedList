#include <iostream>

#include "String.h"

String::String(const char* _str) {
	// Get the number of bytes to allocate
	size_t len = strlen(_str) + 1;

	// Allocate the memory
	mString = new char[len];

	// Copy over the data
	strcpy_s(mString, len, _str);
}

// Destructor
String::~String() {
	delete[] mString;
}

// Copy constructor
String::String(const String& _str) {
	// Get the number of bytes to allocate
	size_t len = strlen(_str.mString) + 1;

	// Allocate the memory
	mString = new char[len];

	// Copy over the data
	strcpy_s(mString, len, _str.mString);
}

String& String::operator=(const String& _str) {
	// Prevent self-assignment
	if (this == &_str)
		return *this;

	// Clean up existing memory
	delete[] mString;

	// Allocate new memory
	size_t len = strlen(_str.mString) + 1;
	mString = new char[len];

	// Copy the data
	strcpy_s(mString, len, _str.mString);

	return *this;
}

// Return the underlying char*
const char* String::CStr() const {
	return mString;
}

void String::Display() const {
	if (mString)
		std::cout << mString << std::endl;
	else
		std::cout << "(null)" << std::endl;
}


// Iterator method definition

String::Iterator& String::Iterator::operator++() {
	// Move the pointer over to the next element
	mCurr = mCurr + 1;
	// Return the iterator
	return *this;
}

String::Iterator String::Iterator::operator++(int) {
	// Store the original pointer
	Iterator original = *this;

	// Move the pointer over to the next element
	mCurr = mCurr + 1;

	// Return the original
	return original;
}

char String::Iterator::operator*() {
	return *mCurr;
}

String::Iterator String::Begin() {
	Iterator begin;
	begin.mCurr = mString;

	return begin;
}

String::Iterator String::End() {
	Iterator end;
	end.mCurr = mString + strlen(mString);

	return end;
}

bool String::Iterator::operator!=(const Iterator& _iter) const {
	return this->mCurr != _iter.mCurr;
}

// Overloaded operator to allow for printing with cout
std::ostream& operator<<(std::ostream& _os, const String& _s) {
	_os << _s.mString;

	return _os;
}