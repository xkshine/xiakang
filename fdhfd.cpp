#include <windows.h>
#include <stdlib.h>
#pragma comment(lib,"winmm.lib") 
int main()
{
puts("��������...");
PlaySound ("1.wav",NULL,SND_FILENAME | SND_ASYNC);

puts("��������˳���");
system("pause>nul") ;
} 
