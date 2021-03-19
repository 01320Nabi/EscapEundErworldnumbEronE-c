#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
	srand(time(NULL));
	const int t = 300;
	while(1) {
		int delay = rand() % t + t;
		Sleep(delay * 1000);
		printf("Ha!\n");
		PlaySound("hah.wav", NULL, SND_FILENAME | SND_ASYNC);
	}
	return 0;
}