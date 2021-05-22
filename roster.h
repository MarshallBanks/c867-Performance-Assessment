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
		void printAverageDaysInCourse();
		void printByDegree(DegreeProgram degreeProgram);
		void printInvalidEmails();
		void parse(string studentDataRow);

		~Roster(); 

	private:
		Student * classRosterArray[5];
		const int numStudents = 5;
		int indexPos = -1;
		
	



};

#endif