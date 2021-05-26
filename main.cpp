#include <iostream>
#include <string>
#include "student.h"
#include "roster.h"

using namespace std;



int main() {
	const string studentData[] =
	{
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Marshall,Banks,marshallmelonhead@hotmail.com,29,51,59,60,SOFTWARE"
	};

	cout << "C867-Scripting and Programming: Applications" << endl;
	cout << "Language: C++" << endl;
	cout << "Student ID#: 000616668" << endl;
	cout << "Name: Marshall Banks\n" << endl;

	const int numStudents = 5;
	Roster classRoster;
	int i = 0;
	
	for (i = 0; i < numStudents; i++) {
		classRoster.parse(studentData[i]);
	}

	cout << "Displaying all students:" << endl;
	classRoster.printAll();

	classRoster.printInvalidEmails();

	for (i = 0; i < numStudents; i++) {
		classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->GetStudentId());
	}

	classRoster.printByDegreeProgram(SOFTWARE);

	classRoster.remove("A3");

	classRoster.printAll();

	classRoster.remove("A3");
	
	
	return 0;
}
