#include <windows.h>
#include <stdlib.h>
#pragma comment(lib,"winmm.lib") 
int main()
{
puts("播放声音...");
PlaySound ("1.wav",NULL,SND_FILENAME | SND_ASYNC);

puts("按任意键退出！");
system("pause>nul") ;
} 
