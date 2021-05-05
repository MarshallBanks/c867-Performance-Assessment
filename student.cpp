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
	cout << studentId << '\t' << "First name: " << firstName << '\t' << "Last name: " << lastName << '\t';
	cout << "Email: " << emailAddress << '\t' << "Age: " << age << '\t' << "Days In Course: ";
	cout << "{";

	int i = 0;
	for (i = 0; i < SIZE; ++i) {
		cout << daysToCompleteEachCourse[i];
		if (i != SIZE - 1) {
			cout << ", ";
		}
	}

	cout << "}" << '\t' << "Degree Program: ";

	if (degreeProgram == SECURITY) {
		cout << "SECURITY" << endl;
	}
	else if (degreeProgram == NETWORK) {
		cout << "NETWORK" << endl;
	}
	else {
		cout << "SOFTWARE" << endl;
	}

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

