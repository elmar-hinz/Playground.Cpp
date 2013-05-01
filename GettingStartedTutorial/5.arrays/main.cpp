#include <iostream>

using namespace std;

void fillArray(char*, char, char, char);
void printArray(char[]);

int main() {
	char field[3];
	fillArray(field, 64, 65, 66);
	printArray(field);
	char word[] = "Ho!";
	printArray(word);
	printArray((char*) "Hey"); 
	printArray((char*) "OH"); 
	printArray((char*) "U"); 
}

void fillArray(char * field, char a, char b, char c) {
	field[0] = a;
	field[1] = b;
	field[2] = c;
}

void printArray(char field[]) {
	for(int x = 0; x < 3; x++) {
		cout << "Element " << x << ": " << (int) field[x] << " => " << field[x] << endl;
	}
}

