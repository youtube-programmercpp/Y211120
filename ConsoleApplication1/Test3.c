extern void* pf;
extern void* pg;
int main()
{
	__asm {
		push 10
		push 20
		call pf
		           //calling convention 呼び出し規約 __stdcall に対応
		push 30
		push 40
		call pg
		add esp, 8 //calling convention 呼び出し規約 __cdecl に対応
	}
}
