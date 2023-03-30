#include <iostream>

#define END_LINE    '\n'

class [[maybe_unused]] Yasamin {

public:
    static int x;
};

int Yasamin::x{};

int main() {

    std::cout << Yasamin::x << END_LINE;

    std::cout << '\n' << "The End ..." << std::endl;
    return (EXIT_SUCCESS);
}

