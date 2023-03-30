#include <iostream>

class Mariam {

private:
    static int x;

public:
    static void init(const int _x) {
        Mariam::x = _x;
    }

    [[nodiscard]] int getX() const {
        return Mariam::x;
    }
};

int Mariam::x = 0;

int main() {

    Mariam::init(70);

    Mariam mariam;

    int result = mariam.getX();
    std::cout << "x is: " << result << '\n';

    std::cout << '\n' << "The End ..." << std::endl;
    return (EXIT_SUCCESS);
}

