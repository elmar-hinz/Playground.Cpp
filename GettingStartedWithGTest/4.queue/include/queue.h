#include <iostream>

#ifndef QUEUE_H_
#define QUEUE_H_

int takeFive(); 

template <typename T>
class Queue {

	struct Node {
		public:
		T data;
		Node* next;
	};

	Node* first;
	Node* last;

	public:
	bool hasNext() {
		return (bool) first;
	}

	Queue* push(T x) {
		Node* node = new Node;
		node->data = x;
		first = first == NULL ? node : first;
		last == NULL ? false : last->next = node;
		last = node;
		return this;
	}

	T shift() {
		Node* node = first;
		if(node == NULL) {
			return (T) NULL;
		} else {
			T data = node->data;
			first = node->next;
			delete node;
			return data;
		}
	}

};

#endif  

