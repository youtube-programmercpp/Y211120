extern void* pf;
extern void* pg;
int main()
{
	__asm {
		push 10
		push 20
		call pf
		           //calling convention ŒÄ‚Ño‚µ‹K–ñ __stdcall ‚É‘Î‰
		push 30
		push 40
		call pg
		add esp, 8 //calling convention ŒÄ‚Ño‚µ‹K–ñ __cdecl ‚É‘Î‰
	}
}
