#include <iostream>
#include <string>
#include "student.h"
#include "roster.h"
using namespace std;


int main() {
	const string studentData[] =

  { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Marshall,Banks,marshallmelonhead@hotmail.com,29,51,59,60,SOFTWARE" };


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
