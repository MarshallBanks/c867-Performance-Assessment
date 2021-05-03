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

void Student::SetDaysToCompleteEachCourse(int* newDays) {
	int i = 0; //loop variable
	for (i = 0; i < SIZE; ++i) {
		daysToCompleteEachCourse[i] = newDays[i];
	}
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

const int* Student::GetDaysToCompleteEachCourse() const {
	return daysToCompleteEachCourse;
}

DegreeProgram Student::GetDegreeProgram() const {
	return degreeProgram;
}

void Student::Print() {
	cout << "FIXME: Finish defining Print(); when you know it will be used" << endl;

	return;
}


//Default Constructor
Student::Student() {
	studentId = "NoId";
	firstName = "NoName";
	lastName  = "NoName";
	emailAddress = "NoAddress";
	age = 0;
	for (int i = 0; i < SIZE; ++i) {
		daysToCompleteEachCourse[i] = 0;
	}
	degreeProgram = SOFTWARE;
}