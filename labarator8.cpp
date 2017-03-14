
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
    
    // nermucum enq amis amsativ
    printf("Set Month: ");
    scanf("%d", &Today.month);
    
    printf("Set Day: ");
    scanf("%d", &Today.day);
    
    printf("Set Year: ");
    scanf("%d", &Today.year);
    
    // stuguma vor xelqin mot amis u or grvi :D
    if ((Today.month > 12 && Today.month < 0) || (Today.day > 31 && Today.day < 0))
    {
        // ete sxala cragir@ avartvuma
        printf("Wrong Day or Month\n");
        return 0;
    }
    
    // stuguma tarin nahanja te che
    // ete tarin bajanvuma 4 i u verji 2 tvanshan@ 0 chi uremn nahanja
    // kamel ete verji erku tvanshan@ zroya uremn petqa bajanvi 400 i vor lini nahanj tari
    // orinak 1700 bajanvuma 4-i bayc nahanj tari chi vorovhetev verj@ 2 hat 0 ya bayc 400-i chi bajanvum
    ( (Today.year % 4 == 0 && Today.year % 100 != 0) || Today.year % 400 == 0 ) ? days[1] = 29 : days[1] = 28;
    
    
    // stex Today structurayi exac chexac@ veragrum enq Tomorrow strukturayin vor popoxutyunner anenq
    Tomorrow = Today;
    Tomorrow.day++; // mi orov mecacnum enq nermucac amsativ@
    
    // stuguma ete nermucac or@ amsva maximal oric ancnuma uremn amis@ +1 ov mecacnum
    if (Tomorrow.day > days[Tomorrow.month - 1])
    {
        Tomorrow.month++;
        Tomorrow.day = 0;
    }
    
    // ete amisna 12 ic ancnum uremn tarina +1 ov mecacnum
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
    
    // tpuma hin structuran mer nermucac
    printf("\nOld");
    viewTime(old.hours, old.minutes, old.seconds);
 
    // update funkcian verjin varkyanin +1 a gumarum u veragrvuma newTime structurayin Time tip unecox
    Time newTime = time_update(old);
    
    // tpuma nor structuran +1 gumarac
    printf("New");
    viewTime(newTime.hours, newTime.minutes, newTime.seconds);
    

    return 0;
}

// stex time_update funkcian veradarnuma verjum Time tipi t structuran
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
*/

/* Xndir 8.2.2 esel nuyn verevi xndirna bayc es depqum strukturayi hascena poxancvum
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

// es depqum funkcian el ban chi veradarcnum qani vor hasceyov mianqamic popoxuma structuran mer nermucac
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
*/

/* Xndir 8.3
const int MAXTITLE = 41;
const int AMOUNT = 4;

// Book karucvacq nerarum e anun@ mekel gin@
struct Book
{
    char title[MAXTITLE];
    int price;
};

int main(void) {
    
    // stexcum enq Book tipi Books popoxakan
    struct Book Books[4];
    int totalPrice = 0;
    
    // nermucum enq 4 hat grqi anun@ mekel gin@
    for (int i = 0; i < AMOUNT; i++)
    {
        printf("[%d] Book-title: ", i + 1);
        scanf("%s", Books[i].title);
        
        printf("[%d] Book-price: ", i + 1);
        scanf("%d", &Books[i].price);
        
    }
    
    // stexel tpum e ekranin ayn grqer@ voronq sksvum en B tarov
    for (int i = 0; i < AMOUNT; i++)
    {
        if (Books[i].title[0] == 'B')
        {
            printf("\n[%d] Book-title: %s", i + 1, Books[i].title);
            totalPrice += Books[i].price;
        }
    }
    
    // B tarov sksvox bolor grqeri @ndhanur gumar@
    printf("\nTotal Price: %d\n", totalPrice);
    
    return 0;
} 
*/
