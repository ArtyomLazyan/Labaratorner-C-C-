#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "Time.h"

Time ctimee;

int main(void)
{
	/*
		// vekalum enq jam@ kompi mejic 
		struct tm *local;
		time_t t = time(NULL);
		local = localtime(&t);

		// stex jam@ veragrum enq ctime strukturayin
		ctimee.hours = local->tm_hour;
		ctimee.minutes = local->tm_min;
		ctimee.seconds = local->tm_sec;
	*/

	printf("Set Hours: ");
	scanf("%d", &ctimee.hours);
	if (ctimee.hours > 24 || ctimee.hours < 0)
		return 0;

	printf("Set Minutes: ");
	scanf("%d", &ctimee.minutes);
	if (ctimee.minutes > 60 || ctimee.minutes < 0)
		return 0;

	printf("Set Seconds: ");
	scanf("%d", &ctimee.seconds);
	if (ctimee.seconds > 60 || ctimee.seconds < 0)
		return 0;

	// cuyca talis nerka jamanaka mekel mi varkyan avelacrac
	viewTime(ctimee.hours, ctimee.minutes, ctimee.seconds);
	func();
	viewTime(ctimee.hours, ctimee.minutes, ctimee.seconds);

	system("pause");
	return 0;
}

