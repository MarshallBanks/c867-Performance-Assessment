#include <iostream>
#pragma once
#include <string>
#include "degree.h"
using namespace std;

class Student {
	public:
		void SetStudentId(string iD); 
		void SetFirstName(string studentFirstName); 
		void SetLastName(string studentLastName); //FIXME: Define in student.cpp
		void SetEmailAddress(string studentEmail); //FIXME: Define in student.cpp
		void SetAge(int studentAge); //FIXME: Define in student.cpp
		void SetDaysToCompleteEachCourse(); //FIXME: Define in student.cpp
		void SetDegreeProgram(int studentDegreeProgram); //FIXME: Verify this is correct to use an int as a parameter.

		int           GetStudentId() const;  //FIXME: Define in student.cpp
	    string        GetFirstName()  const; //FIXME: Define in student.cpp
		string        GetLastName()   const; //FIXME: Define in student.cpp
		string        GetEmailAddress() const; //FIXME: Define in student.cpp
		int           GetAge() const; //FIXME: Define in student.cpp
		int*          GetDaysToCompleteEachCourse() const; //FIXME: Define in student.cpp
		DegreeProgram GetDegreeProgram() const; //FIXME: Define in student.cpp

		void Print(); //FIXME: Create a print function
   
   private:
	    string studentId;
		string firstName;
		string lastName;
		string emailAddress;
		int age = 0;
		int daysToCompleteEachCourse[2];
		DegreeProgram degreeProgram; 
};