/*******************************************************************************
 * AUTHOR		: Emily Christiansen
 * STUDENT ID	: 1027461
 * ASSIGN # 02	: Student
 * CLASS		: CS1C
 * SECTION		: MW: 2:00 pm
 * DUE DATE		: 09/12/16
 ******************************************************************************/

#include "PhoneNum.h"

	/***************************************************************************
	 CONSTRUCTORS & DESTRUCTOR
	 **************************************************************************/
		PhoneNum::PhoneNum()
		{
			areaCode      = 0;
			firstDigits   = 0;
			secondDigits  = 0;
		}
		PhoneNum::PhoneNum(int setAreaCode,
						   int setFirstDigits,
						   int setSecondDigits)
		{
			areaCode     = setAreaCode;
			firstDigits  = setFirstDigits;
			secondDigits = setSecondDigits;
		}

		PhoneNum::~PhoneNum()
		{

		}
	/***************************************************************************
	 ACCESSORS
	 **************************************************************************/
		int PhoneNum::GetAreaCode()
		{
			return areaCode;
		}
		int PhoneNum::GetFirstDigits()
		{
			return firstDigits;
		}
		int PhoneNum::GetSecondDigits()
		{
			return secondDigits;
		}
	/***************************************************************************
	 MUTATORS
	 **************************************************************************/
		void PhoneNum::SetAreaCode    (int newAreaCode)
		{
			areaCode     = newAreaCode;
		}
		void PhoneNum::SetFirstDigits (int newFirstDigits)
		{
			firstDigits  = newFirstDigits;
		}
		void PhoneNum::SetSecondDigits(int newSecondDigits)
		{
			secondDigits = newSecondDigits;
		}

		void PhoneNum::SetPhoneNum(PhoneNum newPhoneNumber)
		{
			areaCode 	 = newPhoneNumber.GetAreaCode();
			firstDigits	 = newPhoneNumber.GetFirstDigits();
			secondDigits = newPhoneNumber.GetSecondDigits();
		}
	string PhoneNum::Output()
	{
		ostringstream output;

		output << "(" << GetAreaCode() << ") " << GetFirstDigits() << "-"
			   << GetSecondDigits();
		return output.str();
	}
