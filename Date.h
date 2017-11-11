/*******************************************************************************
 * AUTHOR		: Emily Christiansen
 * STUDENT ID	: 1027461
 * ASSIGN # 02	: Student
 * CLASS		: CS1C
 * SECTION		: MW: 2:00 pm
 * DUE DATE		: 09/12/16
 ******************************************************************************/
#ifndef DATE_H_
#define DATE_H_

#include "ClassHeader.h"

class Date
{
public:
	/***************************************************************************
	 CONSTRUCTORS & DESTRUCTOR
	 **************************************************************************/
		Date();
		Date(int startDay, int startMonth, int startYear);
		virtual ~Date();

	/***************************************************************************
	 ACCESSORS
	 **************************************************************************/
		int GetDay();
		int GetMonth();
		int GetYear();

	/***************************************************************************
	 MUTATORS
	 **************************************************************************/
		void SetDay(int newDay);
		void SetMonth(int newMonth);
		void SetYear(int newYear);
		void ClearDate();

		string Output();

private:
	int day;
	int month;
	int year;
};

#endif /* DATE_H_ */
