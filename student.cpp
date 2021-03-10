#include <iostream>
#include <string>
#include "student.h"
using namespace std;


void Student::SetStudentId(string iD) {
	studentId = iD;

	return;
}

void Student::SetFirstName(string studentFirstName) {
	firstName = studentFirstName;

	return;
}

void Student::SetLastName(string studentLastName) {
	lastName = studentLastName;

	return;
}

void Student::SetEmailAddress(string studentEmail) {
	emailAddress = studentEmail;
	return;
}

void Student::SetAge(int studentAge) {
	age = studentAge;

	return;
}

void Student::SetDaysToCompleteCourse(int* days) {
	this->daysToCompleteCourse[0] = days[0];
	this->daysToCompleteCourse[1] = days[1];
	this->daysToCompleteCourse[2] = days[2];

	return;
}

void Student::SetDegreeProgram(DegreeProgram studentDegreeProgram) {
	degreeProgram = studentDegreeProgram;
	return;
}

string Student::GetStudentId() const {
	return studentId;
}

string Student::GetFirstName() const {
	return firstName;
}

string Student::GetLastName() const {
	return lastName;
}

string Student::GetEmailAddress() const {
	return emailAddress;
}

int Student::GetAge() const {
	return age;
}

int* Student::GetDaysToCompleteCourse() const {
	cout << "FIXME: Finish Defining GetDaysInCourse" << endl;

    return 0;
}

DegreeProgram Student::GetDegreeProgram() const {
	return degreeProgram;
}



//FIXME: FINISH CONSTRUCTOR
//Default Constructor
Student::Student() {
	studentId = "NoId";
	firstName = "NoName";
	lastName  = "NoName";
	emailAddress = "NoAddress";
	age = 0;
	//daysInCourse[3] = { 0, 0, 0 };

}