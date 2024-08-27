#include<stdio.h>
#include<conio.h>

void main ()
{

int days_in_months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
char month[12] = { "January" , "February" , "March" , "April" , "May" , "June" , "July" , "August" , "September" , "October" , "November" , "December" };
char days[7] = { "Monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday" , "Saturday" , "Sunday" };

int date, year ;
char month ;

 printf("Enter date (dd)  : ");
 scanf("%d", &date);
 printf("Enter month (mm) : ");
 scanf("%d", &month);
 printf("Enter year (yy)  : ");
 scanf("%d", &year);

   if(year%4==0 && year%100!=0 || year%4==0 && year%400==0)
                   days_in_months[1]=29;

  switch (month)
    {
        case 1 :  if (month=="January")

    }


}
