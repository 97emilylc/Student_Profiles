/*******************************************************************************
 * AUTHOR		: Emily Christiansen
 * STUDENT ID	: 1027461
 * ASSIGN # 02	: Student
 * CLASS		: CS1C
 * SECTION		: MW: 2:00 pm
 * DUE DATE		: 09/12/16
 ******************************************************************************/

#include "Student.h"
	/***************************************************************************
	 CONSTRUCTORS & DESTRUCTOR
	 **************************************************************************/
		Student::Student()
		{
			stuName.clear();
			stuGender = 0;
			stuAge = 0;
			stuID = 0;
			stuGPA = 0.0;
			stuClass = FRESHMAN;
		}
		Student::Student(string setName,
						 char setGender,
						 PhoneNum setNumber,
						 int setAge,
						 int setID,
						 float setGPA,
						 ClassStanding setClass)
		{
			stuName   = setName;
			stuGender = setGender;
			stuPhone   .SetPhoneNum(setNumber);
			stuAge    = setAge;
			stuID     = setID;
			stuGPA    = setGPA;
			stuClass  = setClass;
		}

		Student::~Student()
		{
		}

	/***************************************************************************
	 ACCESSORS
	 **************************************************************************/
		string Student::GetName()
		{
			return stuName;
		}
		char Student::GetGender()
		{
			return stuGender;
		}
		PhoneNum Student::GetPhoneNumber()
		{
			return stuPhone;
		}
		int Student::GetAge()
		{
			return stuAge;
		}
		int Student::GetStudentID()
		{
			return stuID;
		}
		float Student::GetGPA()
		{
			return stuGPA;
		}
		ClassStanding Student::GetStudentClass()
		{
			return stuClass;
		}
	/***************************************************************************
	 MUTATORS
	 **************************************************************************/
		void Student::SetName(string newName)
		{
			stuName = newName;
		}
		void Student::SetGender(char newGender)
		{
			stuGender = newGender;
		}
		void Student::SetPhoneNumber(PhoneNum newPhoneNum)
		{
			stuPhone.SetPhoneNum(newPhoneNum);
		}
		void Student::SetAge(int newAge)
		{
			stuAge = newAge;
		}
		void Student::SetStudentID(int newID)
		{
			stuID = newID;
		}
		void Student::SetGPA(float newGPA)
		{
			stuGPA = newGPA;
		}
		void Student::SetClassStanding(ClassStanding newClass)
		{
			stuClass = newClass;
		}

	string Student::Output(int col_width)
	{
		ostringstream output;
		output << left
			   << setw(col_width) << "Student Name: " << GetName()       << endl
			   << setw(col_width) << "Gender: "       << GetGender()     << endl
			   << setw(col_width) << "Phone Number: " << GetPhoneNumber().Output() << endl
			   << setw(col_width) << "Age: "		  << GetAge()    	<< endl
			   << setw(col_width) << "ID Number: "    << GetStudentID() << endl
			   << setprecision(2) << fixed
			   << setw(col_width) << "GPA: "		  << GetGPA()		<< endl
			   << setw(col_width) << "Class: "		  << CLASS_STR[GetStudentClass()]
			   << endl << right;

		return output.str();
	}
