/*******************************************************************************
 * AUTHOR		: Emily Christiansen
 * STUDENT ID	: 1027461
 * ASSIGN # 02	: Student
 * CLASS		: CS1C
 * SECTION		: MW: 2:00 pm
 * DUE DATE		: 09/12/16
 ******************************************************************************/
#ifndef MAINHEADER_H_
#define MAINHEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

#include "Student.h"
#include "Date.h"
#include "PhoneNum.h"
#include "CS1Cstudent.h"

using namespace std;

const int REG_STU_WIDTH = 14;
const int CS_STU_WIDTH  = 21;

const int OUT_WIDTH		= 55;

const string PROGRAM_DES = "This program using Object Oriented Programming "
						   "techniques to design a variety of student and CS1A "
						   "student objects. Their elements are manipulated and"
						   " changed before being output to the console.";


/*-------------------------------PROTOTYPES-------------------------------------
  ******************************************************************************
  * PrintHeader
  * 	This function receives an assignment name, type, and number then outputs
  * 			the appropriate header
  * 	- returns nothing -> This will output the class heading.
  *****************************************************************************/
	void PrintHeader (string asName,	// IN - Assignment name
						char asType,	// IN - Assignment type
				  	  	  	  	  		//    - (LAB or ASSIGNMENT)
						int asNum);		// IN - Assignment number

 /******************************************************************************
  * Word Wrap
  * 	This function receives a long string to be formated into a paragraph
  * 		format
  * 	- returns the formated string
  *****************************************************************************/
	string WordWrap(string inStr); //IN - A string to be formated
//------------------------------------------------------------------------------

#endif
