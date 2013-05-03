#include <iostream>
#include <string>
using namespace std;


class Person {
	public:
	enum sex {male, female, unknown};

	protected:
	string name;
	enum sex sex;

	public:
	Person(): name("Anonymos"), sex(unknown)  {}
	Person(string name, enum sex sex): name(name), sex(sex){ }
	string getName() { return name; }
	enum sex getSex() { return sex; }
};

class FlyingObject {
	public:
		void fly() { cout << "I'm flying"; }
};

class Man : public Person {
	public: Man(string name): Person(name, male){ };
};

class Woman : public Person {
	public: Woman(string name){ this->name = name; this->sex = female; };
};

class Angel: public Person, public FlyingObject {
	public: Angel(string name, enum sex sex): Person(name, sex){ };
};

int main() {
	Person nobody = * new Person();
	cout << "Nobody " << nobody.getName() << " sex: " << nobody.getSex() << endl;

	Person klaus = * new Person("Klaus", Person::male);
	cout << "Klausi " << klaus.getName() << " sex: " << klaus.getSex() << endl;

	Man ben = * new Man("Ben");
	cout << "Benni " << ben.getName() << " sex: " << ben.getSex() << endl;

	Woman ellen = * new Woman("Ellen");
	cout << "Ella " << ellen.getName() << " sex: " << ellen.getSex() << endl;

	Angel conny = * new Angel("Conny", Angel::female);
	cout << "Colli " << conny.getName() << " sex: " << conny.getSex() << " => ";
	conny.fly();

}

