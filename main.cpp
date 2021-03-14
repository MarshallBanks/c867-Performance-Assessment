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


	cout << "Scripting and Programming - Applications" << endl;
	cout << "C++" << endl;
	cout << "Student ID#: 000616668" << endl;
	cout << "Marshall Banks\n" << endl;

	Student marshall;

	int marshallDays[3] = { 51, 59, 60 };

	marshall.SetStudentId("A5");
	marshall.SetFirstName("Marshall");
	marshall.SetLastName("Banks");
	marshall.SetEmailAddress("marshallmelonhead@hotmail.com");
	marshall.SetAge(29);
	marshall.SetDaysToCompleteCourse(marshallDays);
	marshall.SetDegreeProgram(SOFTWARE);

	cout << marshall.GetStudentId() << endl;
	cout << marshall.GetFirstName() << endl;
	cout << marshall.GetLastName() << endl;
	cout << marshall.GetEmailAddress() << endl;
	cout << marshall.GetAge() << endl;

	//Loop to print each value in array marshall.daysToCompleteCourse
	for (int i = 0; i < Student::SIZE; ++i) {
		cout << marshall.GetDaysToCompleteCourse()[i] << " "; 
		if (i == Student::SIZE - 1) { //New line at the end of the array for readability
			cout << endl;
		}
	}
	cout << marshall.GetDegreeProgram() << endl;


	return 0;
}
