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
		void SetDaysToCompleteCourse(int* days); //FIXME: Define in student.cpp
		void SetDegreeProgram(DegreeProgram studentDegreeProgram); 
		Student(); 

		string        GetStudentId() const;  //FIXME: Define in student.cpp
	    string        GetFirstName()  const; //FIXME: Define in student.cpp
		string        GetLastName()   const; //FIXME: Define in student.cpp
		string        GetEmailAddress() const; //FIXME: Define in student.cpp
		int           GetAge() const; //FIXME: Define in student.cpp
		int*          GetDaysToCompleteCourse() const; //FIXME: Define in student.cpp
		DegreeProgram GetDegreeProgram() const; //FIXME: Define in student.cpp

		void Print(); //FIXME: Create a print function
   
   private:
	    string studentId;
		string firstName;
		string lastName;
		string emailAddress;
		int age;
		int daysToCompleteCourse[3];
		DegreeProgram degreeProgram; 
};