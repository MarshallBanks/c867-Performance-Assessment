#pragma once
#include <string>
#include "student.h"

class Software : public Student { //inherits from class Student
public:
	Software();
	Software(string ID, string fname, string lname, string email, int studentAge, int days[], DegreeProgram dprogram);

	//Virtual Methods in the Student class
	DegreeProgram GetDegreeProgram();
	void Print();

	//Destructor
	~Software();
};
