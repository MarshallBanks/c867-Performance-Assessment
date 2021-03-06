#include <iostream>
#include <string>
#include "student.h"
using namespace std;


void Student::SetStudentId(string iD) {
	studentId = iD;
	cout << "\n" << studentId << endl; //FIXME: Remove after testing
	return;
}

void Student::SetFirstName(string studentFirstName) {
	firstName = studentFirstName;
	cout << firstName << endl; //FIXME: Remove after testing
	return;
}

void Student::SetLastName(string studentLastName) {
	lastName = studentLastName;
	cout << lastName << endl; //FIXME: Remove after testing
	return;
}

void Student::SetEmailAddress(string studentEmail) {
	emailAddress = studentEmail;
	cout << emailAddress << endl; //FIXME: Remove after testing
	return;
}

void Student::SetAge(int studentAge) {
	age = studentAge;
	cout << age << endl; //FIXME: Remove after testing
	return;
}

void Student::SetDaysInCourse(int day1, int day2, int day3) {
	//FIXME: Define and change paramters if need be. 
}

void Student::SetDegreeProgram(DegreeProgram studentDegreeProgram) {
	degreeProgram = studentDegreeProgram;
	cout << degreeProgram << endl;
	return;
}
//FIXME: FINISH CONSTRUCTOR
//Default Constructor
Student::Student() {
	studentId = "NoId";
	firstName = "NoName";
	lastName  = "NoName";
	emailAddress = "NoAddress";
	age = 0;
	//daysInCourse[2] = 

}