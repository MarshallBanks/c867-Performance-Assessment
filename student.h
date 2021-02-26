#include <iostream>
#pragma once
#include <string>
#include "degree.h"
using namespace std;

class Student {
	public:
		void SetStudentId(string iD); 
		void SetFirstName(string studentFirstName); 
		void SetLastName(string studentLastName); 
		void SetEmailAddress(string studentEmail); 
		void SetAge(int studentAge); 
		void SetDaysToCompleteEachCourse(int course1, int course2, int course3); //FIXME: Define in student.cpp
		void SetDegreeProgram(DegreeProgram studentDegreeProgram); 

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