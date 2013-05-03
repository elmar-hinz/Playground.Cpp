#include <iostream>
using namespace std;

class Rect {
	int x, y;
	static int c; // automatically public
	public:

		Rect() {
			setDimensions(1, 1);
			c++;
		}

		Rect(int a, int b) {
			setDimensions(a, b);
			c++;
		}

		static int getCount() {
			return c;
		}

		void setDimensions(int x, int y) {
			this->x = x; this->y = y;
		}
		
		int area() {
			return x * y;
		}

		Rect operator * (int factor) {
			return Rect(x * factor, y * factor);
		}

		~Rect() {
			c--;
		}
};

int Rect::c = 0;


int main() {

	cout << endl << "Overloading Constructors:" << endl;
	Rect rect1 = Rect();
	Rect rect2 = Rect(2,3);
	cout << "Expected 1: " << rect1.area() << endl;
	cout << "Expected 6: " << rect2.area() << endl;

	cout << endl << "By pointer:" << endl;
	Rect* rectP = &rect1;
	cout << "Expected 1: " << rectP->area() << endl;

	cout << endl << "Array:" << endl;
	Rect* rectA = new Rect[2]; 
	rectA->setDimensions(2,2); 
	(rectA + 1)->setDimensions(3,3); 
	cout << "Expected 4: " << rectA->area() << endl;
	cout << "Expected 9: " << rectA[1].area() << endl;

	cout << endl << "Opertor *:" << endl;
	Rect doubled = rect1 * 2;
	cout << "Expected 4: " << doubled.area() << endl;
	Rect tripled = rect1.operator*(3);
	cout << "Expected 9: " << tripled.area() << endl;

	cout << endl << "Copy asignment:" << endl;
	Rect tripledCopy = tripled;
	cout << "Expected 9: " << tripled.area() << endl;

	cout << endl << "Static method, new, delete and a destructor:" << endl;
	cout << "Expected 6: " << Rect::getCount() << endl;
	Rect* temp = new Rect();
	cout << "Expected 7: " << Rect::getCount() << endl;
	delete temp;
	cout << "Expected 6: " << Rect::getCount() << endl;

	return 0;
}
