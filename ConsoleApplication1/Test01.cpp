#include <iostream>

class test {
	int a;
public:
	test(int a)
		: a(a)
	{
	}
	void write() const
	{
		std::cout << a << '\n';
	}
};
//
//	‰¼à‚ÆŒŸØ
//
//

int main()
{
	test x(123);
	const auto p = &x;
	void (test::*q)() const = &test::write;
	__asm {
		mov ecx, p
		call q
	}
}
