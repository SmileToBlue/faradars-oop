#include <iostream>

#define END_LINE    '\n'

class [[maybe_unused]] Yasamin {

private:
    static int x;

public:
    static void func() {
        std::cout << Yasamin::x << END_LINE;
    }

};

int Yasamin::x{10};

int main() {

    Yasamin yasamin;
    
    yasamin.func();
    Yasamin::func();

    std::cout << '\n' << "The End ..." << std::endl;
    return (EXIT_SUCCESS);
}

