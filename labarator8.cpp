
#include <stdio.h>

/* Xndir 8.1
struct Data{
    int  month;
    int  day;
    int  year;
};

int main(void)
{
    struct Data Today, Tomorrow;
    
    int days[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    printf("Set Month: ");
    scanf("%d", &Today.month);
    
    printf("Set Day: ");
    scanf("%d", &Today.day);
    
    printf("Set Year: ");
    scanf("%d", &Today.year);
    
    // validacia
    if ((Today.month > 12 && Today.month < 0) || (Today.day > 31 && Today.day < 0))
    {
        printf("Wrong Day or Month\n");
        return 0;
    }
    
    // stugume tarin nahanja te che
    // ete tarin bajanvuma 4 i u verji 2 tvanshan@ 0 chi uremn nahanja
    // kamel ete verji erku tvanshan@ zro en petqe bajanvi 400 i vor lini nahanj tari
    // orinak 1700 bajanvuma 4-i bayc nahanj tari chi vorovhetev verj@ 2 hat 0 ya bayc 400-i chi bajanvum
    ( (Today.year % 4 == 0 && Today.year % 100 != 0) || Today.year % 400 == 0 ) ? days[1] = 29 : days[1] = 28;
    
        Tomorrow = Today;
    Tomorrow.day++;
    
    if (Tomorrow.day > days[Tomorrow.month - 1])
    {
        Tomorrow.month++;
        Tomorrow.day = 0;
    }
    
    if (Tomorrow.month > 12)
    {
        Tomorrow.year++;
        Tomorrow.month = 0;
    }
    
    printf("Month: %d Day: %d Year: %d\n", Tomorrow.month, Tomorrow.day, Tomorrow.year);

    
    return 0;
}
*/

/* Xndir 8.2.1 arjeqov poxancum
struct Time
{
    int hours;
    int minutes;
    int seconds;
};

Time time_update(Time );
void viewTime(int , int , int );

int main(void)
{
   
    struct Time old;
    
    printf("Set Hours: ");
    scanf("%d", &old.hours);
    if (old.hours > 24 || old.hours < 0)
        return 0;
 
    printf("Set Minutes: ");
    scanf("%d", &old.minutes);
    if (old.hours > 60 || old.hours < 0)
        return 0;
    
    printf("Set Seconds: ");
    scanf("%d", &old.seconds);
    if (old.hours > 60 || old.hours < 0)
        return 0;
    
    printf("\nOld");
    viewTime(old.hours, old.minutes, old.seconds);
 
    Time newTime = time_update(old);
    
    printf("New");
    viewTime(newTime.hours, newTime.minutes, newTime.seconds);
    

    return 0;
}

Time time_update(Time t)
{
    t.seconds++;
    
    if (t.seconds == 60)
    {
        t.seconds = 0;
        t.minutes++;
    }
    
    if (t.minutes == 60)
    {
        t.minutes = 0;
        t.hours++;
    }
    
    if (t.hours == 24)
    {
        t.hours = 0;
        t.minutes = 0;
        t.seconds = 0;
    }
    
    return t;
}

void viewTime(int hours, int minutes, int seconds)
{
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
*/

/* Xndir 8.2.2
struct Time
{
    int hours;
    int minutes;
    int seconds;
};

void time_update(Time *);
void viewTime(int , int , int );

int main(void)
{
    
    struct Time old;
    
    printf("Set Hours: ");
    scanf("%d", &old.hours);
    if (old.hours > 24 || old.hours < 0)
        return 0;
 
    
    printf("Set Minutes: ");
    scanf("%d", &old.minutes);
    if (old.hours > 60 || old.hours < 0)
        return 0;
    
    printf("Set Seconds: ");
    scanf("%d", &old.seconds);
    if (old.hours > 60 || old.hours < 0)
        return 0;
    
    printf("\nOld");
    viewTime(old.hours, old.minutes, old.seconds);
 
    time_update(&old);
    
    printf("New");
    viewTime(old.hours, old.minutes, old.seconds);
    
    
    
    return 0;
}

void time_update(Time *t)
{
    t->seconds++;
    
    if (t->seconds == 60)
    {
        t->seconds = 0;
        t->minutes++;
    }
    
    if (t->minutes == 60)
    {
        t->minutes = 0;
        t->hours++;
    }
    
    if (t->hours == 24)
    {
        t->hours = 0;
        t->minutes = 0;
        t->seconds = 0;
    }
}

void viewTime(int hours, int minutes, int seconds)
{
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
*/

/* Xndir 8.3
const int MAXTITLE = 41;
const int AMOUNT = 4;

struct Book
{
    char title[MAXTITLE];
    int price;
};

int main(void) {
    
    struct Book Books[4];
    int totalPrice = 0;
    
    for (int i = 0; i < AMOUNT; i++)
    {
        printf("[%d] Book-title: ", i + 1);
        scanf("%s", Books[i].title);
        
        printf("[%d] Book-price: ", i + 1);
        scanf("%d", &Books[i].price);
        
    }
    
    for (int i = 0; i < AMOUNT; i++)
    {
        if (Books[i].title[0] == 'B')
        {
            printf("\n[%d] Book-title: %s", i + 1, Books[i].title);
            totalPrice += Books[i].price;
        }
    }
    
    printf("\nTotal Price: %d\n", totalPrice);
    
    return 0;
} 
*/
