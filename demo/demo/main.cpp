#pragma once

#include <iostream>
#include "txtbox.h"

int main()
{
	printf("demo project");
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			moveCur(i, j+1);
			printText("O");
			wait(100);
		}
	}
	return 0;
}