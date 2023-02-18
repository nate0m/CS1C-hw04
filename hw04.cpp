#include "employee.h"
#include "programmer.h"
#include "architech.h"
#include "timeClass.h"

 /*******************************************************
 Createe differnt types of employee objects which has
 special private date members. All employee and
 derived objects such as programmer and architech
 can be created using default or alternate constructors
 each private data member in a class has a public
 member function which can change it.
 ******************************************************/
// added functionality to employee class and derived
// - overloaded '==' & '!=' to compare pNumbers
// - overloaded '<<' & '>>' for input output
// - overloaded pre and post increment for age
// - overloaded '+' to add to age

int main() {

	// output  for class heading
	cout << "***********************************\n";
	cout << "Programmed By: Nathan Milton\n";
	cout << "Student Id   : 1204398\n";
	cout << "Assignment   : HW04\n";
	cout << "CS1C         : T/TH 1:30\n";   
 	cout << "***********************************\n" << endl;

	// initializing objects
    employee user;

	date random(12, 7, 02);
	employee tod;
	programmer bill;

	tod.printEmployee();
	cout << endl;
	bill.printProgrammer();
	cout << endl;

    if(tod == bill)
        cout << "Phone numbers are the same" << endl;
    else
        cout << "Phone numbers are differen" << endl;

    cout << endl;

	// changing private data members with public member functions
	tod.changeName("Tod");
	tod.changeTitle("Landscaper");
	tod.changePnumber("888-888-8888");
	tod.changeId(87878);
	tod.changeSalary(999999);
	tod.changeAge(14);
	tod.changeGender('X');
	tod.changeHiredDate(random);
		
	bill.changeName("Bill");
	bill.changeTitle("Different-Programmer");
	bill.changePnumber("555-555-5555");
	bill.changeId(00000);
	bill.changeSalary(77777);
	bill.changeAge(88);
	bill.changeGender('F');
	bill.changeHiredDate(random);
	bill.changeSuprName("Boof");
	bill.changeDepartNum(3);
	bill.changeLSalInc(27);
	bill.changeCpp(false);
	bill.changeJava(false);

	// printing objects
	tod.printEmployee();
	cout << endl;
	bill.printProgrammer();
	cout << endl;

    if(tod != bill)
        cout << "Phone numbers are different" << endl;
    else
        cout << "Phone numbers are same" << endl;

    cout << endl << "Tod got older" << endl;
    tod + 15;
    cout << endl;
    tod.printEmployee();
    cout << endl;

    cout << "Input a Employee in this formate (name id-number phone-number age gender title salary date-hired(12 12 12)):";
    cin >> user;

    cout << endl << user << endl;

    cout << "__TESTING_PRE_POST_INCREMENT__" << endl;

    cout << "Post Increment of user age\n";
    user++;
    cout << user << endl;

    cout << "Pre Increment of user age\n";
    ++user;
    cout << user;


    return 0;
}
