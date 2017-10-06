#include <iostream>
using namespace std;
/* sample write*/
class A {
protected:
	int x;
public:
	A() {
		x = 0;
	}
	A(int i) {
		x = i;
	}
};

class B : public A {
public:
	B(int i) : A(i) {}
	void print() {
		cout << "x:" << x << endl;
	}
};

class main {
public:
	main() {
		cout << "ctor" << endl;
	}
	~main() {
		cout << "dctor" << endl;
	}
}m;

class test {
public:
test() {
}
};

// Adding new lines

// comments are important

int main() {
	cout << "in main" << endl;
	B b(10);
	b.print();
	cout << "ending";
	system("pause");

	return 1;
}
