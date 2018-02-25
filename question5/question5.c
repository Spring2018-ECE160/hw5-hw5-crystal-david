#include <stdio.h>
int day_of_year(int year, int month, int day);
void month_day(int year, int yearday, int *pmonth, int *pday);

static char daytab[2][13] =  {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
};



int year, month, yearday,day;


int main()
{
    
    
    printf ("enter the month:");
    scanf("%d",&month);
    
    printf("enter the day:");
    scanf("%d",&day);
    
    
    printf("enter the year");
    scanf("%d",&year);
    
    printf("enter the yearday");
    scanf("%d",&yearday);
    
    printf(" The day of the year will be %d", day_of_year(year, month, day));
    
    return 0;
}

int day_of_year(int year, int month, int day) {
    int leap, i;
    
    leap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    
    if(((month >= 1) && (month <= 12)) && ((day >= 1) && (day <= daytab[leap][month]))) {
        for(i = 1; i < month; i++) {
            day += daytab[leap][i];
        }
        
        return day;
    }
    
    return -1;
    
}

void month_day(int year, int yearday, int *pmonth, int *pday) {
    int leap, i;
    
    leap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    if((leap == 1 && (yearday >= 1 && yearday <= 366)) || (leap == 0 && (yearday >= 1 && yearday <= 366))) {
        
        for(i = 1; yearday > daytab[leap][i]; i++) {
            yearday -= daytab[leap][i];
        }
        *pday = yearday;
        *pmonth = i;
    }
    else {
        printf("error: the yearday is invalid");
    }
}

