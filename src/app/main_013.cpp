#include <iostream>

class Mariam {

public:
    int x;

};



int main() {

    const Mariam mariam{100};

    mariam.x = 200;


    std::cout << '\n' << "The End ..." << std::endl;
    return (EXIT_SUCCESS);
}

