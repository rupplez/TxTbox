#include "txtbox.h"

void printText(string str) {
	cout << str << endl;
}

void moveCur(int x, int y)
{
	printf("\033[%d;%df", y, x);
	fflush(stdout);
}