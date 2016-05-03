#include <iostream>
using namespace std;

class Animal {
	public:
		virtual Animal* speak() { cout << "Who am I? Poor nobody." << endl; return this; };
		Animal* walk() { cout << "How to walk?" << endl; return this; };
};

class Duck : public Animal {
	public:
		Duck* speak() { cout << "Quack, quack, quack" << endl;	return this; }
		Duck* walk() { cout << "waddle, waddle" << endl; return this; }
};

class Cow : public Animal {
	public:
		Cow* speak() { cout << "Mooooooooooooh" << endl;	return this; }
		Cow* walk() { cout << "boom, boom" << endl; return this; }
};

int main() {
	cout << endl << "Direkt speach:" << endl;
	(new Cow())->speak();
	(new Duck())->speak();

	cout << endl << "Direkt walk:" << endl;
	(new Cow())->walk();
	(new Duck())->walk();

	cout << endl <<  "Variables cast to animal (speak):" << endl;
	Animal animals[] = { *new Cow(), *new Duck(), *new Animal() };
	for(int x=0; x <3; x++) { animals[x].speak(); }

	cout << endl << "Pointers allow polimorphism (speak):" << endl;
	Animal* speakers[] = { new Cow(), new Duck() };
	for(int x=0; x <2; x++) { speakers[x]->speak(); }

	cout << endl << "Without virtual pointers don't help (walk):" << endl;
	Animal* walkers[] = { new Cow(), new Duck() };
	for(int x=0; x <2; x++) { walkers[x]->walk(); }
}

