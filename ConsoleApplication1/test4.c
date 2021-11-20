#include <stdio.h>
void __stdcall f(int a, int b)
{
	printf("a = %d\nb = %d\n", a, b);
}
void __cdecl g(int a, int b)
{
	printf("a = %d\nb = %d\n", a, b);
}
void* pf = f;
void* pg = g;
