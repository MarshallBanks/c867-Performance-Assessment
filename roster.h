#ifndef roster_h
#define roster_h
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "student.h"
using namespace std;



class Roster {
	public:
		void add(string studentID, string firstName, string lastName,
		   string emailAddress, int age, int daysInCourse1, int daysInCourse2,
		   int daysInCourse3, DegreeProgram degreeProgram);
		void remove(string studentID); //Searches array for ID and deletes it 
		void printAll(); //calls print() from student class for each student object
		void printAverageDaysInCourse(string StudentID);
		void printByDegreeProgram(DegreeProgram degreeProgram);
		void printInvalidEmails();
		void parse(string studentRow);

		~Roster(); 

	public:
		Student * classRosterArray[5];
		const int numStudents = 5;
		int indexPos = -1;
		
	



};

#endif