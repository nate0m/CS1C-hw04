#include "architech.h"

architech::architech() : employee() {

	// initialize architech object to default values
	suprName  = "undefined-name";
	departNum = 0;
	lSalInc   = 0;
	yearsExp  = 0;
}
void const architech::printArchitech() {

	// print architch object to console
	employee::printEmployee();
	
	cout << "Superior Name: " << suprName << endl;
	cout << "Depart Number: " << departNum << endl;
	cout << "Last Salary Inc: " << lSalInc << endl;
	cout << "Years of Experience: " << yearsExp << endl;
}
