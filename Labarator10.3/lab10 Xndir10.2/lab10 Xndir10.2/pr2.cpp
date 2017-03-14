#include <stdio.h>
#include "pr.h"

float func(Journal jour[])
{
	float totalprice = 0.0; int k = 0;

	for (int i = 0; i < 4; i++)
		if (jour[i].val > 10000)
		{
			totalprice += jour[i].price;
			k++;
		}

	if (k > 0)
		return totalprice / k;
	else
		return 0;
}