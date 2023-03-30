#include <iostream>

#ifndef MY_CLASS
#define MY_CLASS

class MyClass {

private:
    int a{};
    int b{};
    /* non-const static member must be initialize out of line */
    static int c;

public:
    void init(int _a = 0, int _b = 0, int _c = 0);

    void display() const;

};

/* initializing private member */
int MyClass::c = 0;

/*
 * if c was public
 * int MyClass::c = 0;
*/

void MyClass::init(const int _a, const int _b, const int _c) {
    this->a = _a;
    this->b = _b;
    MyClass::c = _c;

}

void MyClass::display() const {
    std::cout << "a: " << this->a << '\n';
    std::cout << "b: " << this->b << '\n';
    std::cout << "c: " << MyClass::c << '\n';
}

#endif

int main() {

    MyClass mc1;
    MyClass mc2;

    mc1.init(7, 89, 31);
    mc2.init(19, 21, 80);

    mc1.display();
    std::cout << "----------------------------------" << '\n';
    mc2.display();

    std::cout << '\n' << "The End ..." << std::endl;
    return (EXIT_SUCCESS);
}

