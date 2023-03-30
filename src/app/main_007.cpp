#include <iostream>
#include <utility>

class Person {

private:
    unsigned int personId{};
    std::string name{};
    std::string family{};
    unsigned int age{};

public:
    /* pass by value and using move */
    Person(const unsigned int _id, std::string _name, std::string _family, unsigned int _age)
            : personId(_id), name(std::move(_name)), family(std::move(_family)), age(_age) {}

    friend void display_person(Person &prn); /*{
        std::cout << prn.personId << '\n';
        std::cout << prn.name << '\n';
        std::cout << prn.family << '\n';
        std::cout << prn.age << '\n';
    }*/


} ramin(1001, "ramin", "hoobakht", 52);

void display_person(Person &prn) {
    std::cout << prn.personId << '\n';
    std::cout << prn.name << '\n';
    std::cout << prn.family << '\n';
    std::cout << prn.age << '\n';
}

int main() {


    display_person(ramin);
    


    std::cout << '\n' << "The End ..." << std::endl;
    return (EXIT_SUCCESS);
}

