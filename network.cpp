#include <iostream>
#include "network.h"
using namespace std;

Network::Network() :Student() {
	//The rest of the default constructor values are handled in Student class constructor, Student();
	degreeProgram = NETWORK;
}

Network::Network(string ID, string fname, string lname, string email, int studentAge, int days[], DegreeProgram dprogram)
	: Student(ID, fname, lname, email, studentAge, days) {
	degreeProgram = NETWORK;
}

DegreeProgram Network::GetDegreeProgram() {
	return NETWORK;
}

void Network::Print() {
	this->Student::Print();
	cout << "SECURITY" << endl;
}

Network::~Network() {
	Student::~Student(); //Calls the destructor in Student AKA the superdestructor
}