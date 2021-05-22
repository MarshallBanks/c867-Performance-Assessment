#include "roster.h"
#include "student.h"
#include <vector>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;


void Roster::parse(string studentRow) {

	//DegreeProgram degreeProgram = NONE;
	//if (studentData.at())

	DegreeProgram dprogram = NONE;

	int firstComma = studentRow.find(","); //gets location of the comma
	string sID = studentRow.substr(0, firstComma); //gets substring from just before the firstCommaLoc

	int secondComma = studentRow.find(",", (firstComma + 1));
	int afterLastComma = firstComma + 1;
	string fName = studentRow.substr(afterLastComma, (secondComma - afterLastComma));

	int thirdComma = studentRow.find(",", (secondComma + 1));
	afterLastComma = secondComma + 1;
	string lName = studentRow.substr(afterLastComma, (thirdComma - afterLastComma));

	int fourthComma = studentRow.find(",", (thirdComma + 1));
	afterLastComma = thirdComma + 1;
	string eMail = studentRow.substr(afterLastComma, (fourthComma - afterLastComma));

	int fifthComma = studentRow.find(",", (fourthComma + 1)); //
	afterLastComma = fourthComma + 1;
	int age = stoi(studentRow.substr(afterLastComma, (fifthComma - afterLastComma)));

	int sixthComma = studentRow.find(",", (fifthComma + 1));
	afterLastComma = fifthComma + 1;
	int day1 = stoi(studentRow.substr(afterLastComma, (sixthComma - afterLastComma)));

	int seventhComma = studentRow.find(",", (sixthComma + 1));
	afterLastComma = sixthComma + 1;
	int day2 = stoi(studentRow.substr(afterLastComma, (seventhComma - afterLastComma)));

	int eighthComma = studentRow.find(",", (seventhComma + 1));
	afterLastComma = seventhComma + 1;
	int day3 = stoi(studentRow.substr(afterLastComma, (eighthComma - afterLastComma)));

	if (studentRow.find("SECURITY") != string::npos) {
		dprogram = SECURITY;
	}
	else if (studentRow.find("SOFTWARE") != string::npos) {
		dprogram = SOFTWARE;
	}
	else if (studentRow.find("NETWORK") != string::npos) {
		dprogram = NETWORK;
	}
	else {
		dprogram = NONE;
	}
	
	add(sID, fName, lName, eMail, age, day1, day2, day3, dprogram);

}

void Roster::add(string studentID, string firstName, string lastName,
	string emailAddress, int age, int daysInCourse1, int daysInCourse2,
	int daysInCourse3, DegreeProgram degreeProgram) {

	int daysArray[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };

	classRosterArray[++indexPos] = new Student(studentID, firstName, lastName, emailAddress, age, daysArray, degreeProgram);

}

void Roster::printAll() {
	
	
	for (int i = 0; i <= Roster::indexPos; i++) {
		cout << /*No label needed*/   classRosterArray[i]->GetStudentId() << '\t';
		cout << "First Name: "     << classRosterArray[i]->GetFirstName() << '\t';
		cout << "Last Name: "      << classRosterArray[i]->GetLastName() << '\t';
		cout << "Age: "            << classRosterArray[i]->GetAge() << '\t';
		cout << "daysInCourse: {"  << classRosterArray[i]->GetDaysToCompleteEachCourse()[0] << ", "
		                           << classRosterArray[i]->GetDaysToCompleteEachCourse()[1] << ", "
		                           << classRosterArray[i]->GetDaysToCompleteEachCourse()[2] << "} ";
		cout << "Degree Program: " << degreeProgramStrings[classRosterArray[i]->GetDegreeProgram()] << endl;
	}
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {

}







