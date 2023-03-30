#include <iostream>

struct person {
	int personId { };
	std::string name { };
	std::string family { };
	int age { };
};

int main() {

	struct person p1 { 1001, "Mariam", "Rohani", 30 };
	struct person p2 { 1001, "Yasamin", "Hoobakht", 20 };

	p2 = p1;

	std::cout << p2.personId << '\n';
	std::cout << p2.name << '\n';
	std::cout << p2.family << '\n';
	std::cout << p2.age << '\n';

	p1.personId = 2002;

	std::cout << p2.personId << '\n';
	std::cout << p2.name << '\n';
	std::cout << p2.family << '\n';
	std::cout << p2.age << '\n';

	std::cout << '\n' << "The End ..." << std::endl;
	return (EXIT_SUCCESS);
}

