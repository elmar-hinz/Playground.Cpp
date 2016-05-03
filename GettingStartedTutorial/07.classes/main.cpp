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

	cout << endl << "Create Element:" << endl;
	Rect rect = Rect(2,2);
	cout << "Expected 4: " << rect.area() << endl;

	cout << endl << "Create Pointer with new:" << endl;
	Rect* rectPointer = new Rect(2,2);
	cout << "Expected 4: " << rectPointer->area() << endl;
	cout << "Expected 4: " << (*rectPointer).area() << endl;

	cout << endl << "Create array of elements:" << endl;
	cout << "Name is pointer to first element:" << endl;
	Rect rectA[] = { Rect(2,2), Rect(4,4) };
	cout << "Expected 4: " << rectA->area() << endl;
	cout << "Expected 16: " << rectA[1].area() << endl;

	cout << endl << "Create array of pointers:" << endl;
	cout << "Name is pointer to pointer:" << endl;
	Rect* rectPA[] = {new Rect(2,2), new Rect(4,4)};
	cout << "Expected 4: " << (**rectPA).area() << endl;
	cout << "Expected 4: " << (*rectPA)->area() << endl;
	cout << "Expected 16: " << rectPA[1]->area() << endl;

	cout << endl << "Create array of elements with pointer to first" << endl;
	Rect* rectAP = new Rect[2];
	rectAP->setDimensions(2,2);
	(rectAP + 1)->setDimensions(3,3);
	cout << "Expected 4: " << rectAP->area() << endl;
	cout << "Expected 9: " << rectAP[1].area() << endl;

	cout << endl << "Overloading Constructors:" << endl;
	Rect rect1 = Rect();
	Rect rect2 = Rect(2,3);
	cout << "Expected 1: " << rect1.area() << endl;
	cout << "Expected 6: " << rect2.area() << endl;

	cout << endl << "Copy by value:" << endl;
    Rect rect3 = rect1;
    rect3.setDimensions(3,4);
	cout << "Expected 12: " << rect3.area() << endl;
	cout << "Expected 1: " << rect1.area() << endl;

	cout << endl << "Reference by pointer:" << endl;
	Rect* rectP = &rect1;
	cout << "Expected 1: " << rectP->area() << endl;
	cout << "Expected 1: " << (*rectP).area() << endl;

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
