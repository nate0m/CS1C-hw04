#include "employee.h"

double employee::numEmployees = 0;

ostream &operator<<(ostream &cout, const employee& e) {

	cout << "Name : "        << e.name   << endl;
	cout << "ID Number: "    << e.idNum   << endl;
	cout << "Phone Number: " << e.pNumber << endl;
	cout << "Age: "          << e.age     << endl;
	cout << "Gender: "       << e.gender  << endl;
	cout << "Title: "        << e.title   << endl;
	cout << "Salary: "       << e.salary  << endl;
	cout << "Date Hired: "   << e.hired   << endl;  

	return cout;
}
istream &operator>>(istream &cin, employee& e) {

	cin >> e.name >> e.idNum >> e.pNumber >> e.age >> e.gender >> e.title >> e.salary >> e.hired;

	return cin;
}
bool comparePNumber(const employee& e, const employee& e2) {

	return e.pNumber == e2.pNumber;
}
bool employee::operator==(const employee& e) {

	return pNumber == e.pNumber;
}
bool employee::operator!=(const employee& e) {

	return !(pNumber == e.pNumber);
}
employee::employee() : name{"undefined-name"},
                       title{"undefined-title "},
                       pNumber{"undefined-phoneNumber"},
                       age{0},
                       gender{'X'},
                       salary{0} {

	numEmployees++;

	idNum = generateId();
}
employee::employee(string n, string t, string p, int a, char g, int s) : 

	// initializes employee object to set passed values
	name{n},
	title{t},
	pNumber{p},
	age{a},
	gender{g},
	salary{s} {

    date h;
    hired = h.today();
	numEmployees++;

    idNum = generateId();

}
double employee::generateId() {

	// takes number of employees and adds 10000 as the employees id number and returns as double    
    return numEmployees + 10000;
}
void const employee::printEmployee() {

	cout << "Name : " << name << endl;
	cout << "ID Number: " << idNum << endl;
	cout << "Phone Number: " << pNumber << endl;
	cout << "Age: " << age << endl;
	cout << "Gender: " << gender << endl;
	cout << "Title: " << title << endl;
	cout << "Salary: " <<  salary << endl;
	cout << "Date Hired: " << hired << endl;  
}

