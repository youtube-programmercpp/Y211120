extern void* pf;
extern void* pg;
int main()
{
	__asm {
		push 10
		push 20
		call pf
		           //calling convention �Ăяo���K�� __stdcall �ɑΉ�
		push 30
		push 40
		call pg
		add esp, 8 //calling convention �Ăяo���K�� __cdecl �ɑΉ�
	}
}
