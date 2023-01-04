#include<stdio.h>
int firstDayOfYear(int year)
{
    int day = (year*365 + ((year-1) / 4) - ((year-1) / 100) + ((year-1) / 400)) % 7;
    return day;
}
int main()
{

    char *month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int daysOfMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, j, Days, week = 0, space = 0, year;
    printf("Enter your Favorite year: \n");
    scanf("%d", &year);
    system("cls");
    printf("_________________Welcome to %d________________", year);

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        daysOfMonth[1] = 29;
    }

    week = firstDayOfYear(year);
    for(i = 0; i < 12; i++)
    {
        printf("\n\n\n-------------------%s--------------------\n", month[i]);
        printf("\n   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n\n");

        for (space = 1; space <=week; space++)
        {
            printf("      ");
        }

        Days = daysOfMonth[i];
        for (j = 1; j <= Days; j++)
        {
            printf("%6d", j);
            week++;
            if(week > 6){
                week = 0;
                printf("\n");
            }
        }
	}
    return 0;
}
