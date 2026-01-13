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
};

