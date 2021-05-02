#include <iostream>
#include <string>
#include <sstream>
#include "student.h"
#include "roster.h"

using namespace std;



int main() {

	

	cout << "C867-Scripting and Programming: Applications" << endl;
	cout << "Language: C++" << endl;
	cout << "Student ID#: 000616668" << endl;
	cout << "Name: Marshall Banks\n" << endl;

	Student marshall;

	int marshallDays[3] = { 51, 59, 60 }; //FIXME: For iterative testing

	marshall.SetStudentId("A5"); //FIXME: For iterative testing
	marshall.SetFirstName("Marshall"); //FIXME: For iterative testing
	marshall.SetLastName("Banks"); //FIXME: For iterative testing
	marshall.SetEmailAddress("marshallmelonhead@hotmail.com"); //FIXME: For iterative testing
	marshall.SetAge(29); //FIXME: For iterative testing
	marshall.SetDaysToCompleteCourse(marshallDays); //FIXME: For iterative testing
	marshall.SetDegreeProgram(SOFTWARE); //FIXME: For iterative testing

	cout << marshall.GetStudentId() << endl; //FIXME: For iterative testing
	cout << marshall.GetFirstName() << endl; //FIXME: For iterative testing
	cout << marshall.GetLastName() << endl; //FIXME: For iterative testing
	cout << marshall.GetEmailAddress() << endl; //FIXME: For iterative testing
	cout << marshall.GetAge() << endl; //FIXME: For iterative testing

	//Loop to print each value in array marshall.daysToCompleteCourse
	for (int i = 0; i < Student::SIZE; ++i) {
		cout << marshall.GetDaysToCompleteCourse()[i] << " "; 
		if (i == Student::SIZE - 1) { //New line at the end of the array for readability
			cout << endl;
		}
	}
	cout << marshall.GetDegreeProgram() << endl; //FIXME: For iterative testing

	marshall.Print(); //FIXME: For iterative testing



	return 0;
}
