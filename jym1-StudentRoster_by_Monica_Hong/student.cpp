#include <iostream>
#include "student.h"

Student::Student() {}

Student::Student(string id, string fName, string lName, string email, unsigned int age, vector<int> numDays, string degree)
{
	studentID = id;
	firstName = fName;
	lastName = lName;
	emailAddress = email;
	this->age = age;
	
	numDaysToComplete.resize(3);
	numDaysToComplete.at(0) = numDays.at(0);
	numDaysToComplete.at(1) = numDays.at(1);
	numDaysToComplete.at(2) = numDays.at(2);

	degreeProgram = degree;
}

string Student::GetStudentID() const
{
	return studentID;
}

string Student::GetFirstName() const
{
	return firstName;
}

string Student::GetLastName() const
{
	return lastName;
}

string Student::GetEmail() const
{
	return emailAddress;
}

unsigned int Student::GetAge() const
{
	return age;
}

vector<int> Student::GetNumDaysToComplete() const
{
	return numDaysToComplete;
}

string Student::GetDegreeProgram() const
{
	return degreeProgram;
}

void Student::SetStudentID(string id)
{
	studentID = id;
}
void Student::SetFirstName(string fName)
{
	firstName = fName;

}
void Student::SetLastName(string lName)
{
	lastName = lName;

}
void Student::SetEmail(string email)
{
	emailAddress = email;

}
void Student::SetAge(unsigned int age)
{
	this->age = age;

}
void Student::SetNumDaysToComplete(vector<int> numDays)
{
	numDaysToComplete.resize(3);
	numDaysToComplete.at(0) = numDays.at(0);
	numDaysToComplete.at(1) = numDays.at(1);
	numDaysToComplete.at(2) = numDays.at(2);
}
void Student::SetDegreeProgram(string degree)
{
	degreeProgram = degree;
}
string Student::Print() const
{
	cout << "Printing Student Details..." << endl;
}

//[x] D.  For the Student class, do the following:
//    [x] 2.  Create each of the following functions in the Student class:
//        [x] a.  an accessor (i.e., getter) for each instance variable from part D1
//        [x] b.  a mutator (i.e., setter) for each instance variable from part D1
//        [x] c.  All external access and changes to any instance variables of the Student class must be done using accessor and mutator functions.
//        [x] d.  constructor using all of the input parameters provided in the table
//        [x] e.  print() to print specific student data