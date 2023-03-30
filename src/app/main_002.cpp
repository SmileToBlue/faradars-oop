#include <iostream>

class MyClass {

public:
	int x { };
	void f() {
		std::cout << x << '\n';
	}

};

int main() {

	MyClass mc1;
	MyClass mc2;

	mc2 = mc1;
	mc1.x = 100;

	std::cout << "mc2:" << '\n';
	mc2.f();

	mc2.x = 300;

	std::cout << "mc1:" << '\n';
	mc1.f();

	std::cout << '\n' << "The End ..." << std::endl;
	return (EXIT_SUCCESS);
}
