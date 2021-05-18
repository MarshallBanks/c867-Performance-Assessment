#include <iostream>
#include "security.h"
using namespace std;

Security::Security():Student() {
	//The rest of the default constructor values are handled in Student class constructor, Student();
	degreeProgram = SECURITY;
}

Security::Security(string ID, string fname, string lname, string email, int studentAge, int days[], DegreeProgram dprogram)
	:Student(ID, fname, lname, email, studentAge, days) {
	degreeProgram = SECURITY;
}

DegreeProgram Security::GetDegreeProgram() {
	return SECURITY;
}

void Security::Print() {
	this->Student::Print();
	cout << "SECURITY" << endl;
}

Security::~Security() {
	Student::~Student(); //Calls the destructor in Student AKA the superdestructor
}