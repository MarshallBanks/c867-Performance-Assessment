#include "roster.h"
#include "student.h"
#include <vector>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;


void Roster::parse(string studentRow) {

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
	
	for (int i = 0; i <= indexPos; i++) {
		cout << /*No label needed*/   classRosterArray[i]->GetStudentId() << '\t';
		cout << "First Name: "     << classRosterArray[i]->GetFirstName() << '\t';
		cout << "Last Name: "      << classRosterArray[i]->GetLastName() << '\t';
		cout << "Age: "            << classRosterArray[i]->GetAge() << '\t';
		cout << "daysInCourse: {"  << classRosterArray[i]->GetDaysToCompleteEachCourse()[0] << ", "
		                           << classRosterArray[i]->GetDaysToCompleteEachCourse()[1] << ", "
		                           << classRosterArray[i]->GetDaysToCompleteEachCourse()[2] << "} ";
		cout << "Degree Program: " << degreeProgramStrings[classRosterArray[i]->GetDegreeProgram()] << endl;
	}
	cout << endl;
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {

	cout << "Showing students in degree program: " << degreeProgramStrings[degreeProgram] << "\n\n";
	
	for (int i = 0; i <= indexPos; i++) {
		if (classRosterArray[i]->GetDegreeProgram() == degreeProgram) {
			classRosterArray[i]->Print();
		}
	}
	cout << endl;
}

void Roster::printInvalidEmails() {

	cout << "Displaying invalid emails: \n\n";

	bool invalidEmail = false;
	for (int i = 0; i <= indexPos; i++) {

		string email = (classRosterArray[i]->GetEmailAddress());
		if (email.find(' ') != string::npos) {
			invalidEmail = true;
			cout << email << " - no spaces allowed." << endl;
		}
		if (email.find('@') == string::npos) {
			invalidEmail = true;
			cout << email << " - must have an @ symbol." << endl;
		}
		if (email.find('.') == string::npos) {
			invalidEmail = true;
			cout << email << " - must have a period." << endl;
		}
		
	}
	if (!invalidEmail) {
		cout << "No invalid eMails found." << endl;
	}
	cout << endl;
}

void Roster::printAverageDaysInCourse() {

	for (int i = 0; i <= indexPos; i++) {
		int average = 
		 ((classRosterArray[i]->GetDaysToCompleteEachCourse()[0])
		+ (classRosterArray[i]->GetDaysToCompleteEachCourse()[1])
		+ (classRosterArray[i]->GetDaysToCompleteEachCourse()[2])) / 3; 

		cout << "Student ID: " << classRosterArray[i]->GetStudentId() << ", averages " << average << "days in a course." << endl;
	}
	cout << endl;
}

void Roster::remove(string studentID) {

	cout << "Removing " << studentID << ":\n" << endl;

	bool foundId = false;

	for (int i = 0; i <= indexPos; i++) {

		if (classRosterArray[i]->GetStudentId() == studentID) {
			foundId = true;

			if (i < numStudents - 1) {
				Student* tempObject = classRosterArray[i];
				classRosterArray[i] = classRosterArray[numStudents - 1];
				classRosterArray[numStudents - 1] = tempObject;
			}
			Roster::indexPos--;
		}
	}

	if (foundId == true) {
		cout << "Student " << studentID << " removed from the student roster.\n" << endl;
		this->printAll();
	}
	else {
		cout << studentID << " was not found." << endl;
	}
	cout << endl;
}

Roster::~Roster() {
	for (int i = 0; i < numStudents; i++) {
		delete classRosterArray[i];
		classRosterArray[i] = nullptr;
	}
}






