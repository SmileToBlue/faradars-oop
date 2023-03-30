#include <iostream>

class Mariam {

public:
    static int x;

    Mariam() {
        x++;
    }
};

int Mariam::x = 0;

int main() {

    Mariam m1{};
    Mariam m2{};

    std::cout << Mariam::x << '\n';

    std::cout << '\n' << "The End ..." << std::endl;
    return (EXIT_SUCCESS);
}

