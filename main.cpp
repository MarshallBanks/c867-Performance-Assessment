#include <iostream>
#include <string>
#include "student.h"
#include "roster.h"
#include "degree.h"
using namespace std;

/*const string studentData[] =

{"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", 
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", 
"A5,Marshall,Banks,marshallmelonhead@hotmail.com,29,60,65,70,SOFTWARE"*/

int main() {
	cout << "Hello World" << endl;
	cout << "A single change." << endl;
	//cout << studentData;

	Student marshall;

	marshall.SetFirstName("Marshall");
	marshall.SetStudentId("0001234");
	marshall.SetEmailAddress("marshallmelonhead@hotmail.com");
	return 0;
}
