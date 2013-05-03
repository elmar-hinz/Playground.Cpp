#include <iostream>
using namespace std;

class Animal {
	public:
		virtual void speak() =0;
		virtual void walk() =0;
};

class Duck : public Animal {
	public:
		void speak() { cout << "Quack, quack, quack" << endl; }
		void walk() { cout << "waddle, waddle" << endl; }
};

class Cow : public Animal {
	public:
		void speak() { cout << "Mooooooooooooh" << endl;}
		void walk() { cout << "boom, boom" << endl; }
};

int main() {
	cout << endl << "Direkt speach:" << endl;
	(new Cow())->speak();
	(new Duck())->speak();

	cout << endl << "Direkt walk:" << endl;
	(new Cow())->walk();
	(new Duck())->walk();

	cout << endl << "Pointers allow polimorphism:" << endl;
	Animal* animals[] = { new Cow(), new Duck() };
	for(int x=0; x <2; x++) { 
		animals[x]->speak(); 
		animals[x]->walk(); 
	}

	cout << endl << "Animal is abstract and can't be instantiated directly. Following error would be given:" << endl;
	cout << endl << "error: allocating an object of abstract class type 'Animal'" << endl;
	// Animal* animal = new Animal(); 
}

