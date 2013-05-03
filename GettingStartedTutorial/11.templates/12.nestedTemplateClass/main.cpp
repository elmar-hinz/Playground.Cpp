#include <iostream>
using namespace std;

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


int main() {
	Queue<int>* iq = new Queue<int>();
	Queue<char>* cq = new Queue<char>();

	iq->push(3)->push(2)->push(1);
	cq->push('A')->push('B')->push('C');

	while(iq->hasNext()) { cout << "Result: " << iq->shift() << endl; }
	while(cq->hasNext()) { cout << "Result: " << cq->shift() << endl; }

}

