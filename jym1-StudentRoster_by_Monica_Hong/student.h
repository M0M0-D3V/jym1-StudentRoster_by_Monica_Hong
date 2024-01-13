#pragma once
#include <string>
#include <vector>
#include "degree.h"

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
		~Student();
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
