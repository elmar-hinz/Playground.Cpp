#include <iostream>
using namespace std;

class Rect {

	int width, height;

	public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	int size() { return width * height; }

	bool operator > (Rect other) { return (size() >  other.size()); }

};

template <typename A> A getMax(A a, A b) { return (a > b ? a : b); }

int main() {
	cout << endl << "Expected 4: " << getMax(3, 4) << endl;
	cout << endl << "Expected 4: " << getMax(4, 3) << endl;
	cout << endl << "Expected B: " << getMax('A', 'B') << endl;
	cout << endl << "Expected B: " << getMax('B', 'A') << endl;
	cout << endl << "Expected 16: " << getMax(*new Rect(4, 4), *new Rect(3, 3)).size() << endl;
	cout << endl << "Expected 16: " << getMax(*new Rect(3, 3), *new Rect(4, 4)).size() << endl;
}

