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


	Student marshall;

	marshall.SetStudentId("A5");
	marshall.SetFirstName("Marshall");
	marshall.SetLastName("Banks");
	marshall.SetEmailAddress("marshallmelonhead@hotmail.com");
	marshall.SetAge(29);
	//FIXME: Finish setting this up. marshall.SetDaysToCompleteEachCourse();
	marshall.SetDegreeProgram(SOFTWARE);
	return 0;
}
