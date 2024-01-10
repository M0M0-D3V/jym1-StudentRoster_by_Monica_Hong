#pragma once
#include <string>
#include <vector>
using namespace std;

class Student
{
	public:
		Student();
		Student(string id, string fName, string lName, string email, string, int age, vector<int> numDays, string degree);

	private:
		string studentID;
		string firstName;
		string lastName;
		string emailAddress;
		unsigned int age;
		vector<int> numDaysToComplete;	// chose to do vector instead of array for it's safety features and better practice
		string degreeProgram;
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
//    [] 2.  Create each of the following functions in the Student class:
//        [] a.  an accessor (i.e., getter) for each instance variable from part D1
//        [] b.  a mutator (i.e., setter) for each instance variable from part D1
//        [] c.  All external access and changes to any instance variables of the Student class must be done using accessor and mutator functions.
//        [] d.  constructor using all of the input parameters provided in the table
//        [] e.  print() to print specific student data