#include <iostream>
#include "student.h"
#include "degree.h"

Student::Student()
{
	studentID = "00";
	firstName = "Test";
	lastName = "Mc Testerson";
	emailAddress = "newkid@wgu.edu";
	age = 0;
	degreeProgram = DegreeProgram::SOFTWARE;
}

Student::Student(string id, string fName, string lName, string email, unsigned int age, unsigned int day1, unsigned int day2, unsigned int day3, DegreeProgram degree)
{
	studentID = id;
	firstName = fName;
	lastName = lName;
	emailAddress = email;
	this->age = age;
	
	numDaysToComplete.resize(3);
	numDaysToComplete.at(0) = day1;
	numDaysToComplete.at(1) = day2;
	numDaysToComplete.at(2) = day3;

	degreeProgram = degree;
}

Student::~Student()
{

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

DegreeProgram Student::GetDegreeProgram() const
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
void Student::SetNumDaysToComplete(unsigned int day1, unsigned int day2, unsigned int day3)
{
	numDaysToComplete.resize(3);
	numDaysToComplete.at(0) = day1;
	numDaysToComplete.at(1) = day2;
	numDaysToComplete.at(2) = day3;
}
void Student::SetDegreeProgram(DegreeProgram degree)
{
	degreeProgram = degree;
}
void Student::Print() const
{
	cout << studentID << '\t';
	cout << firstName << '\t';
	cout << lastName << '\t';
	cout << emailAddress << '\t';
	cout << age << '\t';
	for (unsigned int i : numDaysToComplete)
	{
		cout << i << " ";
	}
	cout <<'\t';
	switch (degreeProgram)
	{
	case DegreeProgram::SECURITY:
		cout << "SECURITY";
		break;
	case DegreeProgram::NETWORK:
		cout << "NETWORK";
		break;
	case DegreeProgram::SOFTWARE:
		cout << "SOFTWARE";
		break;
	case DegreeProgram::NONE:
		cout << "NONE";
		break;
	}
	cout << endl;
}

//[x] D.  For the Student class, do the following:
//    [x] 2.  Create each of the following functions in the Student class:
//        [x] a.  an accessor (i.e., getter) for each instance variable from part D1
//        [x] b.  a mutator (i.e., setter) for each instance variable from part D1
//        [x] c.  All external access and changes to any instance variables of the Student class must be done using accessor and mutator functions.
//        [x] d.  constructor using all of the input parameters provided in the table
//        [x] e.  print() to print specific student data