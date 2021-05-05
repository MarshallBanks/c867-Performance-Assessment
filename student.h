#ifndef student_h
#define student_h
#include <iostream>
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
		void SetDaysToCompleteEachCourse(int* newDays); 
		void SetDegreeProgram(DegreeProgram degreeProgram); 
		Student(); 

		string        GetStudentId() const;  
	    string        GetFirstName() const; 
		string        GetLastName() const; 
		string        GetEmailAddress() const; 
		int           GetAge() const; 
		const int*    GetDaysToCompleteEachCourse() const; 
		DegreeProgram GetDegreeProgram() const; 

		void Print(); //FIXME: Create a print function

		static const int SIZE = 3;
   
   private:
	    string studentId;
		string firstName;
		string lastName;
		string emailAddress;
		int age;
		int daysToCompleteEachCourse[SIZE];
		DegreeProgram degreeProgram; 
};

#endif