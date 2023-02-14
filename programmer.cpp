#include "programmer.h"

programmer::programmer() : employee() {

	// initializes programmer object to default values
	suprName  = "undefined-name";
	departNum = 0;
	lSalInc   = 0;
	cpp       = 0;
	java      = 0;
}
void const programmer::printProgrammer() {

	employee::printEmployee();
	
	cout << "Superior Name: " << suprName << endl;
	cout << "Depart Number: " << departNum << endl;
	cout << "Last Salary Inc: " << lSalInc << endl;
	
	if(cpp == true)
		cout << "Cpp dev" << endl;

	if(java == true)
		cout << "Java dev" << endl;
}
