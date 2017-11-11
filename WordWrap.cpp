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
 * 	FUNCTION WordWrap
 * _____________________________________________________________________________
 * 	This function receives a string to format into a paragraph with the given
 * 		format
 * 			returns - the formated string
 * 	____________________________________________________________________________
 * 	PRE-CONDITIONS
 * 			inStr	:	The long string to be formatted
 *
 * 	POST-CONDITIONS
 * 			This function will return the formated string
 ******************************************************************************/

string WordWrap(string inStr) //IN - A string to be formated
{
	ostringstream output;//OUT  - The variable that holds the edited string
	string word;		 //CALC - Each individual word
	string line;		 //CALC - Each individual line
	int index;			 //CALC - Index of each element in the string
	int stringLength;	 //CALC - The length of the string passed
	int lineLength;		 //CALC - The length of the calculated string
	int wordLength; 	 //CALC - The length of the calculated word

	stringLength = inStr.length();
	for(index = 0; index < stringLength; index++)//Cycles through each element
												 //in the passed string
	{
		if(inStr[index] != ' ')//Selection statement checks if the element is
							   //part of a word and adds it to the word variable
							   //if true
		{
			word += inStr[index];
		}
		else
		{//When not part of a word, it checks if the line is over the given
		 // boundary
			lineLength = line.length();
			wordLength = word.length();
			if((lineLength + wordLength) > OUT_WIDTH)
			{
				output << line << endl;
				line.clear();
			}
			line = line + (word + ' ');
			if((index + 1) != stringLength)
			{
				word.clear();
			}
		}
	}//END - for(index = 0; index < stringLength; index++)

	lineLength = line.length(); //Recalculates the length of the line to see if
								// 	it can fit the last word
	if((wordLength + lineLength) > OUT_WIDTH)
	{
		output << line << endl << word;
	}
	else
	{
		output << (line + word);
	}
	return output.str();
}


