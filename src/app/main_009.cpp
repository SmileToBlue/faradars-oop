#include <iostream>

class Mariam {
private:
    int x;
    static int y;

public:
    void func(const int _x, const int _y) {
        this->x = _x;
        Mariam::y = _y;
    }

    void display() const {
        std::cout << this->x << ", " << Mariam::y << '\n';
    }
};

int Mariam::y = 0;

int main() {

    Mariam m1{};
    Mariam m2{};

    m1.func(120, 40);

    m2.display();

    std::cout << '\n' << "The End ..." << std::endl;
    return (EXIT_SUCCESS);
}

