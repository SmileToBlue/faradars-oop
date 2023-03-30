/*
 *	کلاس رو میشه با رفرنس و یا بدون رفرنس به عنوان پارامتر
 *	وارد متد کرد. اگر بدون رفرنس وارد متد شود
 *	یک نمونه جدید از آن ساخته و سپس وارد متد می‌شود. و درنهایت
 *	زمان به پایان رسیدن روال متد دستراکتور فراخوانی می‌شود.
 *	اگر با رفرنس وارد متد شود نمونه جدیدی ساخته نشده وتبع
 *	دستراکتور نیز فراخوانی نمی‌شود
 *
 */

#include <iostream>

class MyClass {

private:
	int x { };
	int y { };

public:

	MyClass(int _x) :
			x(_x) {
	}
	~MyClass() {
		std::cout << 'b';
	}
	int f() {
		y = x;
		return (y);
	}

};

void func1(MyClass mc);
void func2(MyClass &mc);

int main() {

	MyClass mc1(2);
	func2(mc1);

	std::cout << 'a';

	//std::cout << '\n' << "The End ..." << std::endl;
	return (EXIT_SUCCESS);
}

void func1(MyClass mc) {
	std::cout << mc.f();
}

void func2(MyClass &mc) {
	std::cout << mc.f();
}
