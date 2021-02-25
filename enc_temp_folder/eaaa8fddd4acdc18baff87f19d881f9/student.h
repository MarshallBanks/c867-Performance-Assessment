#include <iostream>
#pragma once
#include <string>
#include "degree.h"
using namespace std;

class Student {
	public:
		void SetStudentId(int studentID);
		void SetFirstName(string studentFirstName);
		void SetLastName(string studentLastName);
		void SetEmailAddress(string studentEmail);
		void SetAge(int studentAge);
		void SetDaysToCompleteEachCourse(); //FIXME: Figure out how to set as array since it's 3 integers.
		void SetDegreeProgram(int studentDegreeProgram); //FIXME: Verify this is correct to use an int as a parameter.

		int           GetStudentId() const;
	    string        GetFirstName()  const;
		string        GetLastName()   const;
		string        GetEmailAddress() const;
		int           GetAge() const;
		int*           GetDaysToCompleteEachCourse() const;
		DegreeProgram GetDegreeProgram() const;

		void Print();
   
   private:
		int studentId = 0;
		string firstName;
		string lastName;
		string emailAddress;
		int age = 0;
		int daysToCompleteEachCourse[2];
		DegreeProgram degreeProgram; 
};