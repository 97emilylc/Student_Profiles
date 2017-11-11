/*******************************************************************************
 * AUTHOR		: Emily Christiansen
 * STUDENT ID	: 1027461
 * ASSIGN # 02	: Student
 * CLASS		: CS1C
 * SECTION		: MW: 2:00 pm
 * DUE DATE		: 09/12/16
 ******************************************************************************/

#ifndef PHONENUM_H_
#define PHONENUM_H_

#include "ClassHeader.h"

class PhoneNum
{
public:
	/***************************************************************************
	 CONSTRUCTORS & DESTRUCTOR
	 **************************************************************************/
		PhoneNum();
		PhoneNum(int setAreaCode, int setFirstDigits, int setSecondDigits);
		virtual ~PhoneNum();

	/***************************************************************************
	 ACCESSORS
	 **************************************************************************/
		int GetAreaCode();
		int GetFirstDigits();
		int GetSecondDigits();

	/***************************************************************************
	 MUTATORS
	 **************************************************************************/
		void SetAreaCode(int newAreaCode);
		void SetFirstDigits(int newFirstDigits);
		void SetSecondDigits(int newSecondDigits);

		void SetPhoneNum(PhoneNum newPhoneNumber);

		string Output();

private:
	int areaCode;
	int firstDigits;
	int secondDigits;
};

#endif /* PHONENUM_H_ */
