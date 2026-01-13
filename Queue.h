#pragma once

// A singly linked list using queue ordering (First In, First Out)

template<typename Type>
class Queue {
	struct Node {
		Type data; // The "element"
		Node* next; // The next node in the sequence
	};

	// Data members
	Node* mHead; // This points to the oldest node in the list

public:

	// Constructor
	// Create an empty list
	Queue() {
		mHead = nullptr;
	}

	// Destructor
	~Queue() {

	}

	// Add a Node to the end of the list
	void PushBack(const Type& _data) {
		// Dynamically allocate a Node
		Node* endOfList = new Node;
		// Set the data members
		endOfList->data = _data;
		endOfList->next = nullptr;

		// Link into the existing list

		// Is the list empty? If so, start the queue
		if (!mHead) {
			mHead = endOfList;
		} else {
			// Create a temporary Node to walk through the list
			Node* walk = mHead;

			// Move the walk pointer over until it gets to the last node
			while (walk->next != nullptr)
				walk = walk->next;

			walk->next = endOfList;
		}
	}
};

