/*******************************************************************************
 * AUTHOR		: Emily Christiansen
 * STUDENT ID	: 1027461
 * ASSIGN # 02	: Student
 * CLASS		: CS1C
 * SECTION		: MW: 2:00 pm
 * DUE DATE		: 09/12/16
 ******************************************************************************/
#include "MainHeader.h"

/*******************************************************************************
 * Random Numbers
 * _____________________________________________________________________________
 * This program will generate a deck of cards using the Card class. It will then
 * 		perform a perfect shuffle on the deck continuously in, counting the
 * 		number of shuffles it requires to return back to the original deck.
 * _____________________________________________________________________________
 * 	INPUT:
 * 		No user input for this program
 *
 * 	OUTPUT:
 * 		The output for this program will be:
 * 			The deck before the first shuffling,
 * 			the deck after the first shuffling,
 * 			the final deck (should match the original deck),
 * 			and the number of shuffles it took to make the deck return to its
 * 			original form.
 ******************************************************************************/

int main()
{
	/***************************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------------
	 * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	 * -------------------------------------------------------------------------
	 * ASSIGN_NUM	: Assignment Number (specific to this assignment)
	 * ASSIGN_NAME	: Title of the assignment
	 * ASSIGN_TYPE	: The type of assignment
	 * -------------------------------------------------------------------------
	 * USED FOR ARRAY SIZES
	 * -------------------------------------------------------------------------
	 * REG_CLASS_SIZE	:	The size of the classes of "regular" students
	 * CS_CLASS_SIZE	:	The sie of the computer science class
	 **************************************************************************/

	const string ASSIGN_NAME	 	= "Student and CS Student Classes";
	const char 	 ASSIGN_TYPE		= 'A';
	const int 	 ASSIGN_NUM			=  02;

	const int REG_CLASS_SIZE = 4;
	const int CS_CLASS_SIZE = 3;

	PrintHeader(ASSIGN_NAME, ASSIGN_TYPE, ASSIGN_NUM);

	/***************************************************************************
	 * REGULAR STUDENTS
	 * -------------------------------------------------------------------------
	 * The regular students are initialized and output in this section.
	 **************************************************************************/
	PhoneNum stu1Phone(949, 555, 1234);
	Student stu1("Donald Trump", 'M', stu1Phone, 70, 999999, 4.0, FRESHMAN);

	PhoneNum stu2Phone(714, 555, 5555);
	Student stu2("Hilary Clinton", 'F', stu2Phone, 68, 12345, 3.23, SOPHOMORE);

	PhoneNum stu3Phone(760, 703, 1234);
	Student stu3("Michael Phelps", 'M', stu3Phone, 31, 876542, 3.8, SOPHOMORE);

	PhoneNum stu4Phone(213, 555, 6789);
	Student stu4("Miley Cyrus", 'F', stu4Phone, 23, 777744, 2.10, FRESHMAN);

	Student stuClass[REG_CLASS_SIZE] = {stu1, stu2, stu3, stu4};

	cout << "Regular Students: \n";
	for(int i = 0; i < REG_CLASS_SIZE; i++)
	{
		cout << stuClass[i].Output(REG_STU_WIDTH) << endl;

	}

	/***************************************************************************
	 * COMPUTER SCIENCE STUDENTS
	 * -------------------------------------------------------------------------
	 * The regular students are initialized and output in this section.
	 **************************************************************************/
	PhoneNum cs1Phone(949, 665, 1234);
	Date 	 cs1Date(5, 12, 2016);
	CS1Cstudent cs1("Adele", 'F', cs1Phone, 28, 668899, 3.3, FRESHMAN, 500,
					false, cs1Date);

	PhoneNum cs2Phone(248, 555, 6543);
	Date	 cs2Date(5, 11, 2015);
	CS1Cstudent cs2("Taylor Swift", 'F', cs2Phone, 26, 156789, 3.9, SOPHOMORE,
					700, false, cs2Date);

	PhoneNum cs3Phone(703, 703, 7654);
	Date     cs3Date(5, 11, 2015);
	CS1Cstudent cs3("Bruno Mars", 'M', cs3Phone, 30, 876545, 3.2, SOPHOMORE,
					800, true, cs3Date);

	CS1Cstudent csClass[CS_CLASS_SIZE] = {cs1, cs2, cs3};

	cout << "Computer Science Students: \n";
	for(int i = 0; i < CS_CLASS_SIZE; i++)
	{
		cout << csClass[i].Output(CS_STU_WIDTH) << endl;

	}


	return 0;
}
