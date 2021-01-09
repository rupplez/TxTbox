#include "txtbox.h"

void wait(int millisec)
{
	clock_t start_t = clock();

	while (1)
	{
		if (clock() - start_t >= millisec)
			break;
	}
}