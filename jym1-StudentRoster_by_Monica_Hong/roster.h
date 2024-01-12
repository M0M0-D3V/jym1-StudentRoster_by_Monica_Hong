#pragma once
#include <array>
#include "student.h"
#include "degree.h"

class Roster
{
public:
	Roster(const string students[]);
	~Roster();
	void Add(string id, string fName, string lName, string email, int age, int day1, int day2, int day3, DegreeProgram degree);
	void Remove(string id);
	void PrintAll() const;
	void PrintAverageDaysInCourse(string id) const;
	void PrintInvalidEmails() const;
	void PrintByDegreeProgram(DegreeProgram degree) const;

private:
	Student** ClassRosterArray;
	int studentCount = 0;

};

//[] E.  Create a Roster class (roster.cpp) by doing the following:
//    [x] 1.  Create an array of pointers, classRosterArray, to hold the data provided in the “studentData Table.”
//    
//    [x] 2.  Create a student object for each student in the data table and populate classRosterArray.
//        [x] a.  Parse each set of data identified in the “studentData Table.”
//        [x] b.  Add each student object to classRosterArray.
//    
//    [x] 3.  Define the following functions
//        [x] a.  public void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram)  that sets the instance variables from part D1 and updates the roster.
//        [x] b.  public void remove(string studentID)  that removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found.
//        [x] c. public void printAll() that prints a complete tab-separated list of student data in the provided format: A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security. The printAll() function should loop through all the students in classRosterArray and call the print() function for each student.
//        [x] d.  public void printAverageDaysInCourse(string studentID)  that correctly prints a student’s average number of days in the three courses. The student is identified by the studentID parameter.
//        [x] e.  public void printInvalidEmails() that verifies student email addresses and displays all invalid email addresses to the user.
//        
//        Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
//        
//        [x] f.  public void printByDegreeProgram(DegreeProgram degreeProgram) that prints out student information for a degree program specified by an enumerated type.