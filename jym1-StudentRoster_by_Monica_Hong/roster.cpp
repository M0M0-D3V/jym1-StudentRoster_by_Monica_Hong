#include <iostream>
#include <sstream>
using namespace std;

#include "roster.h"

Roster::Roster(const string students[])
{
	try
	{
		studentCount = 5;
		ClassRosterArray = new Student*[studentCount];

		//E2a. Parse string segments
		for (int i = 0; i < studentCount; i++)
		{
			// Use vector of string to save info bits for each student
			vector<string> info;
			// stringstream consolidates the string object with a string
			// this allows string to read similar to "cin"
			istringstream streamInput(students[i]);
			string nextInfo;

			// Separating details by ','
			while (getline(streamInput, nextInfo, ','))
			{
				info.push_back(nextInfo);
			}

			// string to int conversion
			int age = stoi(info[4]);
			int daysToComplete1 = stoi(info[5]);
			int daysToComplete2 = stoi(info[6]);
			int daysToComplete3 = stoi(info[7]);

			// string to enum conversion
			DegreeProgram degree;
			string degreeInput = info[8];

			if (degreeInput.compare("SECURITY") == 0)
			{
				degree = DegreeProgram::SECURITY;
			}
			else if (degreeInput.compare("NETWORK") == 0)
			{
				degree = DegreeProgram::NETWORK;
			}
			else if (degreeInput.compare("SOFTWARE") == 0)
			{
				degree = DegreeProgram::SOFTWARE;
			}
			else
			{
				degree = DegreeProgram::NONE;
			}

			// Adding each student object to ClassRosterArray
			ClassRosterArray[i] = new Student(info[0], info[1], info[2], info[3], age, daysToComplete1, daysToComplete2, daysToComplete3, degree);
		}
	}
	catch (const exception& e)
	{
		cerr << "ERROR: Processing student data " << e.what() << endl;
	}
}

Roster::~Roster()
{
	delete[] ClassRosterArray;
}

void Roster::Add(string id, string fName, string lName, string email, int age, int day1, int day2, int day3, DegreeProgram degree)
{
	Student* student = new Student(id, fName, lName, email, age, day1, day2, day3, degree);
	ClassRosterArray[studentCount] = student;
	studentCount++;
}

void Roster::Remove(string id)
{
	bool isFound = false;
	int i = 0;
	while (!isFound && i < studentCount)
	{
		if (ClassRosterArray[i]->GetStudentID() == id)
		{
			// null the index
			ClassRosterArray[i] = nullptr;
			// shift array
			for (int j = i; j < studentCount; ++j)
			{
				ClassRosterArray[j] = ClassRosterArray[j + 1];
			}
			// resize studentCount
			studentCount--;
			cout << "Student ID: " << id << " was successfully removed." << endl;
			isFound = true;
			return;
		}
		i++;
	}

	cout << "Student ID: " << id << " was not found." << endl;
}

void Roster::PrintAll() const
{
	cout << "Printing All Students..." << endl;
	for (int i = 0; i < studentCount; i++)
	{
		ClassRosterArray[i]->Print();
	}
	cout << "Print Complete" << endl;
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
//    [x] 1.  Create an array of pointers, classRosterArray, to hold the data provided in the “studentData Table.”
//    
//    [x] 2.  Create a student object for each student in the data table and populate classRosterArray.
//        [x] a.  Parse each set of data identified in the “studentData Table.”
//        [x] b.  Add each student object to classRosterArray.
//    
//    [] 3.  Define the following functions
//        [x] a.  public void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram)  that sets the instance                   variables from part D1 and updates the roster.
//        [x] b.  public void remove(string studentID)  that removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found.
//        [x] c. public void printAll() that prints a complete tab-separated list of student data in the provided format: A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree                      Program: Security. The printAll() function should loop through all the students in classRosterArray and call the print() function for each student.
//        [] d.  public void printAverageDaysInCourse(string studentID)  that correctly prints a student’s average number of days in the three courses. The student is identified by the studentID parameter.
//        [] e.  public void printInvalidEmails() that verifies student email addresses and displays all invalid email addresses to the user.
//        
//        Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
//        
//        [] f.  public void printByDegreeProgram(DegreeProgram degreeProgram) that prints out student information for a degree program specified by an enumerated type.