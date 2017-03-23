/******************************************************************************
 * AUTHOR1	  : Steven Adinolfi
 * AUTHOR2	  : Stanley Ferguson
 * STUDENT1 ID: 382266
 * STUDENT2 ID: 1052330
 * LAB #10	  : Intro to Programming
 * CLASS	  : CS1A
 * SECTION	  : MW: 8am
 * DUE DATE	  : 03/06/17
 *****************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/******************************************************************************
 * INTRO TO PROGRAMMING
 *----------------------------------------------------------------------------
 * This will calculate the sum and average of two integers
 *----------------------------------------------------------------------------
 * INPUT:
 *	<The user will input two integers (firstNum and secondNum)>
 *
 * OUTPUT:
 * 	<The program will output the sum and average of two integers
 * 	(firstNum + secondNum = sum), (sum / 2.0)>
 *****************************************************************************/

int main()
{
	/**************************************************************************
	 * CONSTANTS
	 * ------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * ------------------------------------------------------------------------
	 * PROGRAMMER1 : Programmer's Name
	 * PROGRAMMER2 : Programmer's Name
	 * CLASS	   : Student's Course
	 * SECTION	   : Class Days and Times
	 * LAB_NUM	   : Lab Number (specific to this lab)
	 * LAB_NAME	   : Title of the Lab
	 *************************************************************************/
	const char PROGRAMMER1[] = "Steven Adinolfi";
	const char PROGRAMMER2[] = "Stanley Ferguson";
	const char CLASS[]		 = "CS1A";
	const char SECTION[]	 = "MW: 8:00a - 11:50a";
	const int  LAB_NUM		 = 10;
	const char LAB_NAME[]	 = "Intro to Programming";
	cout << endl;

	//variable declarations
	int	firstNum; 	//	IN. CALC & OUT - first value to sum
	int	secondNum;  //	IN. CALC & OUT - second value to sum
	int sum; 		//	CALC & OUT	   - sum of 2 integers input
	float average;  //	CALC & OUT	   - average of 2 integers input

	// OUTPUT - Class Heading
	cout << left;
	cout << "**************************************************\n";
	cout << "*  PROGRAMMED BY : "  << PROGRAMMER1 << endl;
	cout << "*  PROGRAMMED BY : "  << PROGRAMMER2 << endl;
	cout << "*  "	   << setw(14) << "CLASS"	  << ": " << CLASS    << endl;
	cout << "*  "	   << setw(14) << "SECTION"   << ": " << SECTION  << endl;
	cout << "*  LAB #" << setw(9)  << LAB_NUM	  << ": " << LAB_NAME << endl;
	cout << "**************************************************\n\n";
	cout << right;

	/**************************************************************************
	 * INPUT - reads in two inputs from the use (firstNum & secondNum)
	 *************************************************************************/
	cout << "Enter the first integer: ";
	cin  >> firstNum;

	cout << "Enter the second integer: ";
	cin  >> secondNum;

	/**************************************************************************
	 * PROCESSING - Calculates the sum and average of the two inputs
	 *************************************************************************/
	sum = firstNum + secondNum;

	average = sum / 2.0;

	/**************************************************************************
	 * OUTPUT - the inputs and the sum in the following format:
	 * 					  firstNum + secondNum = sum
	 * 	  For example, if firstNum = 32 & secondNum = 41 output will be:
	 * 			32 + 41 = 73
	 *************************************************************************/

	// OUTPUT - sum and average calculations
	cout << fixed << setprecision(2);
	cout << endl  << firstNum << " + " << secondNum << " = " << sum << endl;
	cout << "The average is: " << average << endl;
	return 0;
}
