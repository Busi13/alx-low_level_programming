#include "main.h"

/**
 * print remaining days - take a date and print how many days are 
 * left in the year,taking leap years into account 
 * @month: month in number format
 * @day: day of the month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 100 == 0 && year % 400== 0) || (year % 4 == 0))
	{
		if (month > 2 && day >= 60)
		{
			dayy;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{

