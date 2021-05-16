#include <iostream>
#include <string>
#include <iomanip>
#include "student.h"
using namespace std;


//Empty Constructor
Student::Student() {
	this->studentId    = "";
	this->firstName    = "";
	this->lastName     = "";
	this->emailAddress = "";
	this->age = 0;
	for (int i = 0; i < DAYS_ARRAY_SIZE; ++i) this->daysToCompleteEachCourse[i] = 0;
	
	
}

//Full constructor
Student::Student(string ID, string fname, string lname, string email, int studentAge, int days[]) {
	this->studentId = ID;
	this->firstName = fname;
	this->lastName = lname;
	this->emailAddress = email;
	this->age = studentAge;
	for (int i = 0; i < DAYS_ARRAY_SIZE; ++i) this->daysToCompleteEachCourse[i] = days[i];
}


//setters
void Student::SetStudentId(string iD) {
	studentId = iD;
}

void Student::SetFirstName(string studentFirstName) {
	firstName = studentFirstName;
}

void Student::SetLastName(string studentLastName) {
	lastName = studentLastName;
}

void Student::SetEmailAddress(string studentEmail) {
	emailAddress = studentEmail;
}

void Student::SetAge(int studentAge) {
	age = studentAge;
}

void Student::SetDaysToCompleteEachCourse(int days[]) {

	for (int i = 0; i < DAYS_ARRAY_SIZE; ++i) {
		daysToCompleteEachCourse[i] = days[i];
	}
}

//FIXME: May not need at all
/*void Student::SetDegreeProgram(DegreeProgram studentDegreeProgram) {
	degreeProgram = studentDegreeProgram;
}*/

//getters
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

const int * Student::GetDaysToCompleteEachCourse() const {
	return daysToCompleteEachCourse;
}

//May not need at all. 
/*DegreeProgram Student::GetDegreeProgram() const {
	return degreeProgram;
}*/ 

void Student::Print() {

	cout << left << setw(5) << studentId;
	cout << left << setw(45) << firstName;
	cout << left << setw(20) << lastName;
	cout << left << setw(10) << emailAddress;
	cout << left << setw(10) << age;
	cout << left << setw(10) << daysToCompleteEachCourse[0];
	cout << left << setw(10) << daysToCompleteEachCourse[1];
	cout << left << setw(10) << daysToCompleteEachCourse[2];

}
	
Student::~Student() {}
	
	//Another way to print pulled from example project made need if we revert back away from derived classes.
	/*cout << studentId << '\t' << "First name: " << firstName << '\t' << "Last name: " << lastName << '\t';
	cout << "Email: " << emailAddress << '\t' << "Age: " << age << '\t' << "Days In Course: ";
	cout << "{";

	int i = 0;
	for (i = 0; i < DAYS_ARRAY_SIZE; ++i) {
		cout << daysToCompleteEachCourse[i];
		if (i != DAYS_ARRAY_SIZE - 1) {
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
	}*/






