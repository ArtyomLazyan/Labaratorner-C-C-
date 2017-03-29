#include <stdio.h>
#include "Time.h"

// nshanakuma urish faylica ekel stex vorpeszi tesaneli lini
extern Time ctimee;

// funkciaya @ndunuma hours minutes seconds u 00:00:00 formatov tpum
void viewTime(int hours, int minutes, int seconds)
{
	// stuguma ete amsativ@ 0-9  orinak ete 9 es grel 09 a grum  sarquma 00:00:00 formatov
	if (hours >= 0 && hours <= 9)
		printf("Time: 0%d", hours);
	else
		printf("Time: %d", hours);


	if (minutes >= 0 && minutes <= 9)
		printf(":0%d", minutes);
	else
		printf(":%d", minutes);


	if (seconds >= 0 && seconds <= 9)
		printf(":0%d\n", seconds);
	else
		printf(":%d\n", seconds);

}

// varkyan@ mekov avelacnuma 
void func()
{
	ctimee.seconds++;

	if (ctimee.seconds == 60)
	{
		ctimee.seconds = 0;
		ctimee.minutes++;
	}

	if (ctimee.minutes == 60)
	{
		ctimee.minutes = 0;
		ctimee.hours++;
	}

	if (ctimee.hours == 24)
	{
		ctimee.hours = 0;
		ctimee.minutes = 0;
		ctimee.seconds = 0;
	}

}
