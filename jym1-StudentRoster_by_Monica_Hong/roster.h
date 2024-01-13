#pragma once
#include <array>
#include "student.h"
#include "degree.h"

class Roster
{
public:
	Roster(const string students[]);
	~Roster();
	Student** GetClassRosterArray();
	int GetStudentCount() const;
	void SetStudentCount(int number);
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