#include <iostream>
#pragma once
#include <string>
#include "student.h"
using namespace std;

class Roster {
	private:
		Student * classRosterArray[5];
		Student A1;
		Student A2;
		Student A3;
		Student A4;
		Student A5;
	public:
		void add(string studentID, string firstName, string lastName,
			string emailAddress, int age, int daysInCourse1, int daysInCourse2,
			int daysInCourse3, DegreeProgram degreeprogram);
		void remove(string studentID);
		void printAll();
		void printAverageDaysInCourse(string studentID);
		void printInvalidEmails();



};