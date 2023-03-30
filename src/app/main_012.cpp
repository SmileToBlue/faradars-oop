#include <iostream>

class Mariam {

private:
    const int a;
    int b;

public:
    Mariam(const int _a, const int _b) : a(_a), b(_b) {}

    void func() const {
        std::cout << this->a << ", " << this->b << '\n';
    };

    void func1() {
        this->a = 300;
    }
};


int main() {

    Mariam mariam(10, 20);

    mariam.func();

    std::cout << '\n' << "The End ..." << std::endl;
    return (EXIT_SUCCESS);
}

