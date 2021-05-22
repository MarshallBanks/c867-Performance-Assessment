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
	this->degreeProgram = DegreeProgram::NONE;
	
	
}

//Full constructor
Student::Student(string ID, string fname, string lname, string email, int studentAge, int days[], DegreeProgram degreeProgram) {
	this->studentId = ID;
	this->firstName = fname;
	this->lastName = lname;
	this->emailAddress = email;
	this->age = studentAge;
	for (int i = 0; i < DAYS_ARRAY_SIZE; ++i) this->daysToCompleteEachCourse[i] = days[i];
	this->degreeProgram = degreeProgram;
}


//setters
void Student::SetStudentId(string iD) {
	this->studentId = iD;
}

void Student::SetFirstName(string studentFirstName) {
	this->firstName = studentFirstName;
}

void Student::SetLastName(string studentLastName) {
	this->lastName = studentLastName;
}

void Student::SetEmailAddress(string studentEmail) {
	this->emailAddress = studentEmail;
}

void Student::SetAge(int studentAge) {
	this->age = studentAge;
}

void Student::SetDaysToCompleteEachCourse(int days[]) {

	for (int i = 0; i < DAYS_ARRAY_SIZE; ++i) {
		daysToCompleteEachCourse[i] = days[i];
	}
}

void Student::SetDegreeProgram(DegreeProgram studentDegreeProgram) {
	this->degreeProgram = studentDegreeProgram;
}

//getters
string Student::GetStudentId() const {
	return this->studentId;
}

string Student::GetFirstName() const {
	return this->firstName;
}

string Student::GetLastName() const {
	return this->lastName;
}

string Student::GetEmailAddress() const {
	return this->emailAddress;
}

int Student::GetAge() const {
	return this->age;
}

int * Student::GetDaysToCompleteEachCourse() {
	return this->daysToCompleteEachCourse;
}


DegreeProgram Student::GetDegreeProgram() const {
	return this->degreeProgram;
}

void Student::Print() {

	cout << /*No label needed*/   this->GetStudentId() << '\t';
	cout << "First Name: "     << this->GetFirstName() << '\t';
	cout << "Last Name: "      << this->GetLastName()  << '\t';
	cout << "Age: "            << this->GetAge() << '\t';
	cout << "daysInCourse: {"  << this->daysToCompleteEachCourse[0] << ',' << this->daysToCompleteEachCourse[1] << ',' << this->daysToCompleteEachCourse[2] << "} ";
	cout << "Degree Program: " << degreeProgramStrings[this->GetDegreeProgram()] << endl;

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






