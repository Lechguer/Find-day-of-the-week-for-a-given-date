#include<stdio.h>

//Function to calculate the day of the week using the formula-based approach (dayofweek = (d + monthcode +yearcode) % 7)
int DayofWeek(int Day , int Month , int Year){

    //Predefined month codes for each month
    int CodeMonth[] = {6, 2, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    //adjust year for Junuary and February
    if (Month<3)
    {
        Year -=1; /*If month is junuary or february, treat them as part of the previous year*/
    }

    //Calculate the year
    int YearCode = (Year % 100) + (Year % 100)/4;
    
    //Adjust yearcode for the century
    YearCode = (YearCode + (Year / 100)/4 + 5*(Year / 100)) % 7;

    //Calculate the day of the week and return the value as an integer
    return (Day + CodeMonth[Month - 1] + YearCode) % 7;
}

int main(){
    int day = 15 , month = 6 , year = 1995;

    //Calculating the day of the week using the formula-based approach
    int DayofWeekResult = DayofWeek(day , month , year);

    //Output the result as an integer ( 0 = Sunday , 1 = Monday , ...)
    printf("%d\n" , DayofWeekResult);
    
    switch (DayofWeekResult)
    {
    case 0:
        printf("Sunday");
        break;
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    }
    return 0;
}