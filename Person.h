#pragma once

#include "String.h"

class Person {
	String mName;
	unsigned int mAge;

	static int mNumCopies;

public:
	// Default constructor
	Person(const String& _name = "Empty", unsigned int _age = 0);

	// Copy constructor
	Person(const Person& _p);

	// Assignment operator
	Person& operator=(const Person& _p);

	// Set the data members
	void Set(const String& _name, unsigned int _age);

	// Print to the console
	void Display() const;

	// Static method helpers
	static int GetNumCopies();
	static void ResetNumCopies();

	// Overloaded relational operators for sorting
	bool operator<(const Person& _rhs) const;
	bool operator>(const Person& _rhs) const;
};

