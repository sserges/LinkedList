#pragma once
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

	void Display() const;

	// Iterator methods
	Iterator Begin();

	Iterator End();
};

