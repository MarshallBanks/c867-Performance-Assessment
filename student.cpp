#include <iostream>
#include "student.h"
#include "roster.h"
#include "degree.h"
using namespace std;

void Student::SetStudentId(int iD) {
	studentId = iD;
	return;
}
void Student::SetFirstName