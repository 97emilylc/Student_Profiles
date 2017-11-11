/*******************************************************************************
 * AUTHOR		: Emily Christiansen
 * STUDENT ID	: 1027461
 * ASSIGN # 02	: Student
 * CLASS		: CS1C
 * SECTION		: MW: 2:00 pm
 * DUE DATE		: 09/12/16
 ******************************************************************************/

#ifndef CS1CSTUDENT_H_
#define CS1CSTUDENT_H_

#include "ClassHeader.h"
#include "Student.h"

class CS1Cstudent: public Student
{
public:
	/***************************************************************************
	 CONSTRUCTORS & DESTRUCTOR
	 **************************************************************************/
		CS1Cstudent();
		CS1Cstudent(string setName,
					 char setGender,
					 PhoneNum setNumber,
					 int setAge,
					 int setID,
					 float setGPA,
					 ClassStanding setClass,
					 float setAssignScore,
					 bool setPythonStatus,
					 Date setGradDate);
		virtual ~CS1Cstudent();
	/***************************************************************************
	 ACCESSORS
	 **************************************************************************/
		float GetAssignScore();
		bool  GetPythonStatus();
		Date  GetGradDate();
	/***************************************************************************
	 MUTATORS
	 **************************************************************************/
		void SetAssignScore(float newScore);
		void SetPythonStatus(bool newStatus);
		void SetGradDate(Date newGradDate);

		string Output(int col_width);
private:
		float totalAssignScore;
		bool  pythonKnowledge;
		Date  gradDate;
};

#endif /* CS1CSTUDENT_H_ */
