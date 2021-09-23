#include "Date.h"

Date::Date()
{
	this->day = 0;
	this->month = 0;
	year = 0;
}
Date::Date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}

void  Date::setday(int x)
{

	day = (x);
}

void Date::setmonth(int h)
{

	month = (h);
}

void Date::setyear(int n)
{
	year = (n);
}
int Date::getday()
{

	return day;

}
int Date::getmon()
{

	return month;

}
int Date::getyear()
{

	return year;

}

bool Date::Validate_Date()
{
	if ((getday() >= 1) && (getday() <= 31))
	{
		if ((getmon() >= 1) && (getmon() <= 12))
		{
			if (((getmon() == 4) || (getmon() == 6) || (getmon() == 9) || (getmon() == 11)) && (getday() <= 30))
			{

				return true;

			}

			else if (((getmon() == 1) || (getmon() == 8) || (getmon() == 3) || (getmon() == 5) || (getmon() == 7) || (getmon() == 10) || (getmon() == 12)) && (getday() <= 31))
			{

				return true;

			}

			else if ((getmon() == 2) && (getday() <= 29))
			{

				return true;
			}

			else
			{

				return false;
			}
		}

		else
		{
			cout << "The Month of Date is not valid ";

			return false;
		}
	}

	else
	{
		cout << "The Day of Date is not valid ";
		return false;
	}
}