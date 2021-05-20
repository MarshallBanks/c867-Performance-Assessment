#ifndef student_h
#define student_h
#include <iostream>
#include <string>
#include <iomanip>
#include "degree.h"
using namespace std;

class Student { //This class represents a Student
	public:
		static const int DAYS_ARRAY_SIZE = 3;
	
	private:
        string studentId;
		string firstName;
		string lastName;
		string emailAddress;
		int age;
		int daysToCompleteEachCourse[DAYS_ARRAY_SIZE];
		DegreeProgram degreeProgram;


	public:
		//setters
		void SetStudentId(string iD); 
		void SetFirstName(string studentFirstName); 
		void SetLastName(string studentLastName); 
		void SetEmailAddress(string studentEmail); 
		void SetAge(int studentAge); 
		void SetDaysToCompleteEachCourse(int days[]); 
		void SetDegreeProgram(DegreeProgram degreeProgram); 

		//constructors
		Student(); 
		Student(string ID, string fname, string lname, string email, int studentAge, int days[], DegreeProgram degreeProgram);

		//getters
		string        GetStudentId() const;  
	    string        GetFirstName() const; 
		string        GetLastName() const; 
		string        GetEmailAddress() const; 
		int           GetAge() const; 
		int*          GetDaysToCompleteEachCourse() const; 
		DegreeProgram GetDegreeProgram() const;

		//print function
		void Print(); 

		//destructor
		~Student();
   
	private:
	   
};

#endif