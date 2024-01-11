#pragma once
#include <string>
#include <vector>
using namespace std;

class Student
{
	public:
		Student();
		Student(
			string id,
			string fName,
			string lName,
			string email,
			unsigned int age,
			unsigned int day1,
			unsigned int day2,
			unsigned int day3,
			DegreeProgram degree
		);
		string GetStudentID() const;
		string GetFirstName() const;
		string GetLastName() const;
		string GetEmail() const;
		unsigned int GetAge() const;
		vector<int> GetNumDaysToComplete() const;
		DegreeProgram GetDegreeProgram() const;
		void SetStudentID(string id);
		void SetFirstName(string fName);
		void SetLastName(string lName);
		void SetEmail(string email);
		void SetAge(unsigned int age);
		void SetNumDaysToComplete(unsigned int day1, unsigned int day2, unsigned int day3);
		void SetDegreeProgram(DegreeProgram degree);
		void Print() const;

	private:
		string studentID;
		string firstName;
		string lastName;
		string emailAddress;
		unsigned int age;
		vector<int> numDaysToComplete;	// chose to do vector instead of array for it's safety features and better practice
		DegreeProgram degreeProgram;
};

//[] D.  For the Student class, do the following:
//    [x] 1.  Create the class Student in the files student.h and student.cpp, which includes each of the following variables:
//        •  student ID
//        •  first name
//        •  last name
//        •  email address
//        •  age
//        •  array of number of days to complete each course
//        •  degree program
//    [x] 2.  Create each of the following functions in the Student class:
//        [x] a.  an accessor (i.e., getter) for each instance variable from part D1
//        [x] b.  a mutator (i.e., setter) for each instance variable from part D1
//        [x] c.  All external access and changes to any instance variables of the Student class must be done using accessor and mutator functions.
//        [x] d.  constructor using all of the input parameters provided in the table
//        [x] e.  print() to print specific student data