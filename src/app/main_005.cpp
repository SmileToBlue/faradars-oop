#include <iostream>

class Cuboid {

private:
    [[nodiscard]] int volume() const;

    int x{};
    int y{};
    int z{};

public:
    Cuboid(const int _x, const int _y, const int _z) : x(_x), y(_y), z(_z) {}

    ~Cuboid();

    int Volume() {
        return this->volume();
    }

};

int Cuboid::volume() const {
    return this->x * this->y * this->z;
}

Cuboid::~Cuboid() {
    std::cout << "destructor is called ..." << '\n';
}

int main() {

    Cuboid c1{10, 20, 30};

    std::cout << "volume is: " << c1.Volume() << '\n';

    std::cout << '\n' << "The End ..." << std::endl;
    return (EXIT_SUCCESS);
}

