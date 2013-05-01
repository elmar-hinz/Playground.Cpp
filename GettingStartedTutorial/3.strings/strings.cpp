#include <string>
#include <iostream>
#include <sstream>

#define TRUE true
#define FALSE false

const bool ESLAF = false;

using namespace std;

int main() {
	string hello;
	hello = "Hello world!";
	cout << hello << endl;

	if(TRUE) { cout << "Definition of true to TRUE works.\n"; }
	if(!FALSE) { cout << "Definition of false to FALSE works.\n"; }
	if(!ESLAF) { cout << "Definition of false to const ESLAF works.\n"; }

	float myint;
	stringstream("123.05") >> myint;
	myint++;
	cout << "123.05 + 1: " << myint << endl; 

	string mystring;
	float price;
	cout << "Enter price: ";
	getline(cin, mystring);
	stringstream(mystring) >> price;
	cout << "Double price: " << price * 2 << endl;

	return 0;
}
