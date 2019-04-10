#include <windows.h>
#pragma comment(lib, "Winmm.lib")  
          
int main( )
{
playMusic( );	
}
void playMusic()
{
	
	mciSendString("open \"res\\bm.mp3\" alias bkmusic", NULL, 0, NULL);
	mciSendString("play bkmusic repeat", NULL, 0, NULL); //—≠ª∑≤•∑≈“Ù¿÷
}