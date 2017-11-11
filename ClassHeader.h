/*******************************************************************************
 * AUTHOR		: Emily Christiansen
 * STUDENT ID	: 1027461
 * ASSIGN # 02	: Student
 * CLASS		: CS1C
 * SECTION		: MW: 2:00 pm
 * DUE DATE		: 09/12/16
 ******************************************************************************/

#ifndef CLASSHEADER_H_
#define CLASSHEADER_H_

#include <string>
#include <sstream>
#include <ostream>
#include <iomanip>

using namespace std;

enum ClassStanding
{
	FRESHMAN,
	SOPHOMORE,
	JUNIOR,
	SENIOR
};

const string CLASS_STR[4] = {"Freshman", "Sophomore", "Junior", "Senior"};

#endif /* CLASSHEADER_H_ */
