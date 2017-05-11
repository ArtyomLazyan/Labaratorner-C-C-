#include <iostream>
#include <stdio.h>
#include <string.h>

class DateInfo
{
private:
	int Month, Day, Year;
public:
	DateInfo(int month, int day, int year) 
	: Month(month), Day(day), Year(year) {}

	void GetStringDate(char *buf)
	{
		// nenc em sarqel vor 2005 poxarini 05 ov 
		sprintf(buf, "%.2d-%.2d-%.2d", Month, Day, Year % 100);
	}

	void GetMonth(char *month)
	{
		char *months[] = { "January", "February",\
			"March", "April", "May", "June", "July",\
			"August", "September", "October", "November",\
			"December" };

		strcpy(month, months[Month - 1]);
	}

	void GetDate(int &month, int &day, int &year)
	{
		month = Month;
		day = Day;
		year = Year;
	}

	~DateInfo()
	{
		printf("Destructor is running...\n");
	}
};

int main()
{
	int m, d, y;
	char buf[80], month[10];

	DateInfo Date(11, 2, 2005);
	Date.GetStringDate(buf);
	Date.GetMonth(month);
	Date.GetDate(m, d, y);

	printf("String Date: %s\n", buf);
	printf("Month is : %s\n", month);
	printf("Date: %.2d-%.2d-%d \n", m, d, y);


	return 0;
}