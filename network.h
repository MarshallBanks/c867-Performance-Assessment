#pragma once
#include <string>
#include "student.h"

class Network : public Student { //inherits from class Student
public:
	Network();
	Network(string ID, string fname, string lname, string email, int studentAge, int days[], DegreeProgram dprogram);

	//Virtual Methods in the Student class
	DegreeProgram GetDegreeProgram();
	void Print();

	//Destructor
	~Network();
};
