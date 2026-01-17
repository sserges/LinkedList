#pragma once

#include "String.h"

class Person {
	String mName;
	unsigned int mAge;

public:
	// Default constructor
	Person(const String& _name = "Empty", unsigned int _age = 0);

	// Set the data members
	void Set(const String& _name, unsigned int _age);

	// Print to the console
	void Display() const;
};

