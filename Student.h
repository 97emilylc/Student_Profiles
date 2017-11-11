/*******************************************************************************
 * AUTHOR		: Emily Christiansen
 * STUDENT ID	: 1027461
 * ASSIGN # 02	: Student
 * CLASS		: CS1C
 * SECTION		: MW: 2:00 pm
 * DUE DATE		: 09/12/16
 ******************************************************************************/
#ifndef STUDENT_H_
#define STUDENT_H_

#include "ClassHeader.h"
#include "Date.h"
#include "PhoneNum.h"

class Student
{
public:
	/***************************************************************************
	 CONSTRUCTORS & DESTRUCTOR
	 **************************************************************************/
		Student();
		Student(string setName,
				char setGender,
				PhoneNum setNumber,
				int setAge,
				int setID,
				float setGPA,
				ClassStanding setClass);
		virtual ~Student();
	/***************************************************************************
	 ACCESSORS
	 **************************************************************************/
		string   	  GetName();
		char     	  GetGender();
		PhoneNum 	  GetPhoneNumber();
		int		 	  GetAge();
		int		 	  GetStudentID();
		float	 	  GetGPA();
		ClassStanding GetStudentClass();
	/***************************************************************************
	 MUTATORS
	 **************************************************************************/
		void SetName(string newName);
		void SetGender(char newGender);
		void SetPhoneNumber(PhoneNum newPhoneNum);
		void SetAge(int newAge);
		void SetStudentID(int newID);
		void SetGPA(float newGPA);
		void SetClassStanding(ClassStanding newClass);

		string Output(int col_width);
private:
	string   		stuName;
	char	 		stuGender;
	PhoneNum 		stuPhone;
	int      		stuAge;
	int      		stuID;
	float    		stuGPA;
	ClassStanding 	stuClass;

};

#endif /* STUDENT_H_ */
