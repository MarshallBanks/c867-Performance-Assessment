#ifndef student_h
#define student_h
#include <iostream>
#include <string>
#include "degree.h"
using namespace std;

class Student { //This class represents a Student
	public:
		static const int DAYS_ARRAY_SIZE = 3;
	
	protected:
        string studentId;
		string firstName;
		string lastName;
		string emailAddress;
		int age;
		int daysToCompleteEachCourse[DAYS_ARRAY_SIZE];
		DegreeProgram degreeProgram;

		cout << studentId


	public:
		//setters
		void SetStudentId(string iD); 
		void SetFirstName(string studentFirstName); 
		void SetLastName(string studentLastName); 
		void SetEmailAddress(string studentEmail); 
		void SetAge(int studentAge); 
		void SetDaysToCompleteEachCourse(int days[]); 

	   //void SetDegreeProgram(DegreeProgram degreeProgram); FIXME: May not need.

		//constructors
		Student(); 
		Student(string ID, string fname, string lname, string email, int studentAge, int days[]);

		//getters
		string        GetStudentId() const;  
	    string        GetFirstName() const; 
		string        GetLastName() const; 
		string        GetEmailAddress() const; 
		int           GetAge() const; 
		const int*    GetDaysToCompleteEachCourse() const; 
		virtual DegreeProgram GetDegreeProgram() = 0; 

		//print function
		virtual void Print() = 0; 

		//destructor
		~Student();
   
	private:
	   
};

#endif