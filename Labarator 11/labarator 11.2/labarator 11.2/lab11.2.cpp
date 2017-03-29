#include <stdio.h>
#include <stdlib.h>

#define EOF (-1)

int main()
{
	char ch; int simvol = 0, tox = 0, barer = 0;
	bool flag = false;

	printf("Set text: (Ctrl+Z for exit) : \n");
	while ((ch = getchar()) != EOF)
	{
		simvol++;

		if (ch == '\n')
			tox++;

		if (ch != ' ' && ch != '\n' && !flag)
		{
			flag = true;
			barer++;
		}

		if ((ch == ' ' || ch == '\n') && flag)
			flag = false;
		
	}

	printf("Simvolner: %d\n", simvol);
	printf("Barer: %d\n", barer);
	printf("Toxer: %d\n", tox);


	system("pause");
	return 0;
}

/* 11.2 test
#define EOF (-1)

int main()
{
char ch; int simvol = 0, tox = 0, barer = 0;
bool barflag = false, toxflag = false, check = false;

// stuguma ete rastvuma probelic heto ete sinvoli rastvav uremn toxer naxord@ hashvum
// mekel stuguma ete \n -ic heto rastvav sinvoli uremn naxord@ toxa hashvum
while ((ch = getchar()) != EOF)
{
	check = true;
	simvol++;

	if (ch == ' ')
		barflag = true;

	if (ch == '\n')
	{
		barflag = true;
		toxflag = true;
	}

	if (((ch != ' ') && (ch != '\n')) && (barflag == true))
	{
		barflag = false;
			barer++;
		}

		if ((ch != '\n') && (toxflag == true))
		{
			toxflag = false;
			tox++;
		}
	}

	// mi hatov qicha cuyc talis arjeqner@ stex stuguma ete mtela cikli mej uremn mekov avelacnuma
	// ete chi mtel uremn mnum en sax 00000000
	if (check)
	{
		barer++;
		tox++;
	}

	printf("Simvolner: %d\n", simvol);
	printf("Barer: %d\n", barer);
	printf("Toxer: %d\n", tox);


	system("pause");
	return 0;
} */