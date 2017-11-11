/*******************************************************************************
 * AUTHOR		: Emily Christiansen
 * STUDENT ID	: 1027461
 * ASSIGN # 02	: Student
 * CLASS		: CS1C
 * SECTION		: MW: 2:00 pm
 * DUE DATE		: 09/12/16
 ******************************************************************************/
#include "Date.h"

Date::Date()
{
	day = 0;
	month = 0;
	year = 0;
}
Date::Date(int startDay, int startMonth, int startYear)
{
	day = startDay;
	month = startMonth;
	year = startYear;
}

Date::~Date()
{

}
	/***************************************************************************
	 ACCESSORS
	 **************************************************************************/
		int Date::GetDay()
		{
			return day;
		}
		int Date::GetMonth()
		{
			return month;
		}
		int Date::GetYear()
		{
			return year;
		}

	/***************************************************************************
	 MUTATORS
	 **************************************************************************/
		void Date::SetDay(int newDay)
		{
			day = newDay;
		}
		void Date::SetMonth(int newMonth)
		{
			month = newMonth;
		}
		void Date::SetYear(int newYear)
		{
			year = newYear;
		}
		void Date::ClearDate()
		{
			day = 0;
			month = 0;
			year = 0;
		}

	string Date::Output()
	{
		ostringstream output;

		output << GetDay() << "/" << GetMonth() << "/" << GetYear();

		return output.str();
	}
