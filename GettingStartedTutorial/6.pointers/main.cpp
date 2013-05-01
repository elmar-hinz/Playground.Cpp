#include <iostream>

using namespace std;

void assignByPointer();
void pointerAndArrays();
void printNumbers(int*);
void pointerAsArray();

int main() {
	cout << "Assigning values by pointer" << endl;
	assignByPointer();
	cout << "Pointers and arrays " << endl;
	pointerAndArrays();
	cout << "Pointers as array" << endl;
	pointerAsArray();
}

void assignByPointer() {
	char * mypointer;
	char myvalueA;
	char myvalueB;
	char myvalueC;

	mypointer = &myvalueA;
	* mypointer = 'A';
	cout << "Address of A => " << (long) mypointer << endl;
	mypointer = &myvalueB;
	* mypointer = 'B';
	cout << "Address of B => " << (long) mypointer << endl;
	mypointer = &myvalueC;
	cout << "Address of C => " << (long) mypointer << endl;
	cout << "Expect A => " << myvalueA << endl; 
	cout << "Expect B => " << myvalueB << endl; 
	cout << "Unknonwn => " << myvalueC << endl; 
}

void pointerAndArrays() {
	int numbers[6] = {9, 8, 7};
	int* p;
	p = numbers;
	cout << "Initially 9, 8, 7, UNKOWN, UNKNOWN" << endl;
	printNumbers(numbers);
	*p = 10; // setting 1
	p++; *p = 20; // setting 2
	p = &numbers[2]; *p = 30; // setting 3
	p = numbers + 3; *p = 40; // setting 4
	p = numbers; *(p + 4) = 50; //  setting 5
	*(numbers + 5) = 60; // setting 6
	cout << "Expect: 10, 20, 30, 40, 50, 60" << endl;
	printNumbers(numbers);
}

void printNumbers(int* numbers) {
	for(int x = 0; x < 6; x++) {
		cout << "Value " << (int) x << ": " << numbers[x] << endl;
	}
}

void pointerAsArray() {
	char* hello = "Hello!";
	for(int x = 0; x < 7; x++) { cout << "Value " << (int) x << ": " << hello[x] << endl; }
	char* oops = "Oooops, lost contact to Hello!";
	hello = oops;
	for(int x = 0; x < 31; x++) { cout << "Value " << (int) x << ": " << hello[x] << endl; }
}




