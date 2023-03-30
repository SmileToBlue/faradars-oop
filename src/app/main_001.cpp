#include <iostream>

class MyClass {

public:

	MyClass() {
		std::cout << "a";
	}

	~MyClass() {
		std::cout << "b";
	}

};

int main() {

	MyClass mc1; //a
	MyClass mc2; //aa

	{
		MyClass mc3; //aaab
	}

	std::cout << "s";

	//aaabsbb

	std::cout << '\n' << "The End ..." << std::endl;
	return (EXIT_SUCCESS);
}
