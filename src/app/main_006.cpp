#include <iostream>

int func();

int main() {

    int result = func();
    std::cout << "result is: " << result;
    std::cout << '\n';

    std::cout << '\n' << "The End ..." << std::endl;
    return (EXIT_SUCCESS);
}

int func() {
    class A {
    private:
        int x{100};
    public:
        explicit A(const int _x) : x(_x) {}

        [[maybe_unused]] [[nodiscard]] int getX() const {
            return this->x;
        }
    } obj(2);

    return obj.getX();

}