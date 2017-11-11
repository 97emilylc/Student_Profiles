/*******************************************************************************
 * AUTHOR		: Emily Christiansen
 * STUDENT ID	: 1027461
 * ASSIGN # 02	: Student
 * CLASS		: CS1C
 * SECTION		: MW: 2:00 pm
 * DUE DATE		: 09/12/16
 ******************************************************************************/

#include "CS1Cstudent.h"
	/***************************************************************************
	 CONSTRUCTORS & DESTRUCTOR
	 **************************************************************************/
		CS1Cstudent::CS1Cstudent()
		{
			totalAssignScore = 0.0;
			pythonKnowledge = false;
			gradDate.ClearDate();
		}
		CS1Cstudent::CS1Cstudent(string setName,
								 char setGender,
								 PhoneNum setNumber,
								 int setAge,
								 int setID,
								 float setGPA,
								 ClassStanding setClass,
								 float setAssignScore,
								 bool setPythonStatus,
								 Date setGradDate)
					: Student(setName,
							  setGender,
							  setNumber,
							  setAge,
							  setID,
							  setGPA,
							  setClass)
		{
			totalAssignScore = setAssignScore;
			pythonKnowledge = setPythonStatus;
			gradDate = setGradDate;
		}

		CS1Cstudent::~CS1Cstudent()
		{

		}

	/***************************************************************************
	 ACCESSORS
	 **************************************************************************/
		float CS1Cstudent::GetAssignScore()
		{
			return totalAssignScore;
		}
		bool CS1Cstudent::GetPythonStatus()
		{
			return pythonKnowledge;
		}
		Date CS1Cstudent::GetGradDate()
		{
			return gradDate;
		}
	/***************************************************************************
	 MUTATORS
	 **************************************************************************/
		void CS1Cstudent::SetAssignScore(float newScore)
		{
			totalAssignScore = newScore;
		}
		void CS1Cstudent::SetPythonStatus(bool newStatus)
		{
			pythonKnowledge = newStatus;
		}
		void CS1Cstudent::SetGradDate(Date newGradDate)
		{
			gradDate = newGradDate;
		}

	string CS1Cstudent::Output(int col_width)
	{
		ostringstream output;
		output << Student::Output(col_width)
			   << left
			   << setw(col_width) << "Total Score: " << GetAssignScore() << endl
			   << setw(col_width) << "Knowledge of Python? ";
			   if(GetPythonStatus())
			   {
				   output << "Yes" << endl;
			   }
			   else
			   {
				   output << "No" << endl;
			   }
		output << setw(col_width) << "Graduation Date: "
			   << GetGradDate().Output() << endl;
		return output.str();
	}
