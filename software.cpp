#include <iostream>
#include "software.h"
using namespace std;

Software::Software() :Student() {
	//The rest of the default constructor values are handled in Student class constructor, Student();
	degreeProgram = NETWORK;
}

Software::Software(string ID, string fname, string lname, string email, int studentAge, int days[], DegreeProgram dprogram)
	: Student(ID, fname, lname, email, studentAge, days) {
	degreeProgram = NETWORK;
}

DegreeProgram Software::GetDegreeProgram() {
	return SOFTWARE;
}

void Software::Print() {
	this->Student::Print();
	cout << "SECURITY" << endl;
}

Software::~Software() {
	Student::~Student(); //Calls the destructor in Student AKA the superdestructor
}