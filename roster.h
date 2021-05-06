#ifndef roster_h
#define roster_h
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "student.h"
using namespace std;

const int numStudents = 5;

class Roster {
	public:
		void add(string studentID, string firstName, string lastName,
		   string emailAddress, int age, int daysInCourse1, int daysInCourse2,
		   int daysInCourse3, DegreeProgram degreeprogram);
		void remove(string studentID);
		void printAll();
		void printAverageDaysInCourse(string studentID);
		void printInvalidEmails();
		void parse();
		//Roster(); FIXME: Need to define in cpp
		//~Roster(); FIXME: Need to define in cpp

	private:
		Student * classRosterArray[5];
		
	



};

#endif