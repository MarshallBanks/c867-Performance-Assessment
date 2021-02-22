#include <iostream>
#pragma once
#include <string>
#include "degree.h"
using namespace std;

class Student {
	public:
	

	private:
		int studentId = 0;
		string firstName;
		string lastName;
		string emailAddress;
		int age = 0;
		int daysToCompleteEachCourse[2];
		DegreeProgram degreeProgram; 
};