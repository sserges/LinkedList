#pragma once

#include <iostream>

class String {
	char* mString;

public:

	class Iterator {
	public:
		// Data member
		char* mCurr; // Pointer to the individual element

		// Move forward (pre-fix)
		Iterator& operator++();

		// Move forward (post-fix)
		Iterator operator++(int);

		// Access the element
		char operator*();

		// Inequality operator
		bool operator!=(const Iterator& _iter) const;
	};

	String(const char* _str = "Empty");

	// Destructor
	~String();

	// Copy constructor
	String(const String& _str);

	String& operator=(const String& _str);

	// Return the underlying char*
	const char* CStr() const;

	void Display() const;

	// Iterator methods
	Iterator Begin();

	Iterator End();

	// Friend functions are *not* class methods, but they have the same rights as a class method.

	// Overloaded operator to allow for printing with cout
	friend std::ostream& operator<<(std::ostream& _os, const String& _s);
};

