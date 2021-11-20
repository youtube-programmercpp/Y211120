#include <iostream>
class test {
	int n;
public:
	test(int n)
		: n(n)
	{
	}
	void output() const
	{
		std::cout << n << '\n';
	}
};


int main()
{
	test x(100);//インスタンス化 instantiation
	//x.output();
	const auto p = &x;
	void (test:: * q)() const = &test::output;
	//(p->*q)();
	__asm {
		mov ecx, p
		call q
	}
}
