#ifndef _HW04_H
#define _HW04_H

#include <string>
#include <iostream> 
#include <ctime>
using namespace std;

class date {

	friend ostream &operator<<(ostream &cout, const date& d);	
	friend istream &operator>>(istream &cin,  date& d);

    public:
    	date();
    	date(int m, int d, int y) : month{m}, day{d}, year{y} {}

		date today();

    	void const printDate();
    
    private:
        int month;
        int day;
        int year;
};
class employee {

	friend ostream &operator<<(ostream &cout, const employee& e); // PRECONDITION  - employee object created
                                                                  // POSTCONDITION - employee output

	friend istream &operator>>(istream &cin,  employee& e); // PRECONDITION  - employee object created
                                                            // POSTCONDITION - employee input

	friend bool comparePNumber(const employee& e, const employee&); // PRECONDITION  - 2 employee objects created
                                                                    // POSTCONDITION - employees pNumbers compared

    public:

    	employee();
    	employee(string n, string t, string p, int a, char g, int s); // contructor for new hire

		void const printEmployee(); // PRECONDITION  - employee object created
                                    // POSTCONDITION - employee printed

        /**********************************************
		 POSTCONDITON FOR ALL CHANGE FUNCTIONS
		 - employee object made
		 PRECONDITION FOR ALL CHAGNE FUNCTIONS
		 - private data member chagned
		 ********************************************/
    	void changeName     (string n)  {name = n;}
    	void changeTitle    (string t)  {title = t;}
		void changePnumber  (string p)  {pNumber = p;}
    	void changeId       (double id) {idNum = id;}
    	void changeSalary   (int s)     {salary = s;}
    	void changeAge      (int a)     {age = a;}
    	void changeGender   (char g)    {gender = g;}
    	void changeHiredDate(date d)    {hired = d;}

		void addAge(int i)    {age+=i; cout << "added " << i << " to " << name << "'s age.\n";} // PRECONDITION  - employee object created
                                                                                                // POST CONDITION - i is added to employee age
		void operator+(int i) {addAge(i);} // PRECONDITION  - employee object created
                                           // POSTCONDITION - i is added to employee age

		employee operator++()    {++age; return *this;} // PRECONDITION  - employee object created
                                                        // POSTCONDITION - employee age pre incremented
                                                        
		employee operator++(int) {employee temp = *this; ++age; return temp;} // PRECONDITION  - employee object created
                                                                              // POSTCONDITION - employee age post incremented

		bool operator==(const employee& e); // PRECONDITION  - 2 employee objects created
                                            // POSTCONDITION - employee objects compared if '=='

		bool operator!=(const employee& e); // PRECONDITION  - 2 employee objects created
                                            // POSTCONDITION - employee objects compared if '!='

    	double generateId();

    private:
        string name;
        string title;
        string pNumber;
        double idNum;
        int age;
        char gender;
        int salary;
        date hired;
        static double numEmployees;
};




#endif
