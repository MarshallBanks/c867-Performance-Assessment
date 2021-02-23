#include <iostream>
#pragma once
#include <string>
#include "degree.h"
using namespace std;

class Student {
	public:
		void SetStudentId(int studentID);
		void SetFirstName();
		void SetLastName();
		void SetEmailAddress();
		void SetAge();
		void SetDaysToCompleteEachCourse();
		void SetDegreeProgram();

		int SetStudentId(int studentID);
	    string SetFirstName();
		string SetLastName();
		string SetEmailAddress();
		int SetAge();
		int SetDaysToCompleteEachCourse();
		DegreeProgram SetDegreeProgram();

	

	private:
		int studentId = 0;
		string firstName;
		string lastName;
		string emailAddress;
		int age = 0;
		int daysToCompleteEachCourse[2];
		DegreeProgram degreeProgram; 
};