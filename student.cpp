#include <iostream>
#include "student.h"
#include "roster.h"
#include "degree.h"
using namespace std;

void Student::SetStudentId(string iD) {
	studentId = iD;
	cout << studentId << endl; //FIXME: Remove after testing
	return;
}

void Student::SetFirstName(string studentFirstName) {
	firstName = studentFirstName;
	cout << firstName << endl; //FIXME: Remove after testing
	return;
}

void Student::SetLastName(string studentLastName) {
	lastName = studentLastName;
	cout << lastName; //FIXME: Remove after testing
	return;
}

void Student::SetEmailAddress(string studentEmail) {
	emailAddress = studentEmail;
	cout << emailAddress; //FIXME: Remove after testing
	return;
}

//void Student::Set
