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
	cout << "FIXME: Finish defining SetDaysInCourse" << endl;
}

void Student::SetDegreeProgram(DegreeProgram studentDegreeProgram) {
	degreeProgram = studentDegreeProgram;
	cout << degreeProgram << endl;
	return;
}

int Student::GetStudentId() const {
	cout << "FIXME: Finish defining GetStudentId" << endl;
}

string Student::GetFirstName() const {
	cout << "FIXME: Finish defining GetFirstName" << endl;
}

string Student::GetLastName() const {
	cout << "FIXME: Finish defining GetLastName" << endl;
}

string Student::GetEmailAddress() const {
	cout << "FIXME: Finish defining GetEmailAddress" << endl;
}

int Student::GetAge() const {
	cout << "FIXME: Finish defining GetAge" << endl;
}

int* Student::GetDaysInCourse() const {
	cout << "FIXME: Finish Defining GetDaysInCourse" << endl;
}

DegreeProgram Student::GetDegreeProgram() const {
	cout << "FIXME: Finish defining GetDegreeProgram" << endl;
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