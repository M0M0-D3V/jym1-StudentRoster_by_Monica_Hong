#include <iostream>
using namespace std;

#include "roster.h"

Roster::Roster()
{

}

Roster::~Roster()
{

}

void Roster::Add(string id, string fName, string lName, string email, int age, int day1, int day2, int day3, DegreeProgram degree)
{
	Student newStudent(id, fName, lName, email, age, day1, day2, day3, degree);
	ClassRosterArray[studentCount] = newStudent;
	studentCount++;
}

void Roster::Remove(string id)
{

}

void Roster::PrintAll() const
{

}

void Roster::PrintAverageDaysInCourse(string id) const
{

}

void Roster::PrintInvalidEmails() const
{

}

void Roster::PrintByDegreeProgram(DegreeProgram degree) const
{

}

//[] E.  Create a Roster class (roster.cpp) by doing the following:
//    [] 1.  Create an array of pointers, classRosterArray, to hold the data provided in the “studentData Table.”
//    
//    [] 2.  Create a student object for each student in the data table and populate classRosterArray.
//        [] a.  Parse each set of data identified in the “studentData Table.”
//        [] b.  Add each student object to classRosterArray.
//    
//    [] 3.  Define the following functions
//        [] a.  public void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram)  that sets the instance                   variables from part D1 and updates the roster.
//        [] b.  public void remove(string studentID)  that removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found.
//        [] c. public void printAll() that prints a complete tab-separated list of student data in the provided format: A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree                      Program: Security. The printAll() function should loop through all the students in classRosterArray and call the print() function for each student.
//        [] d.  public void printAverageDaysInCourse(string studentID)  that correctly prints a student’s average number of days in the three courses. The student is identified by the studentID parameter.
//        [] e.  public void printInvalidEmails() that verifies student email addresses and displays all invalid email addresses to the user.
//        
//        Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').