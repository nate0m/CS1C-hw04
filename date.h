#ifndef _DATE_H 
#define _DATE_H

#include <string>
#include <iostream> 
#include <ctime>
using namespace std;

// --CLASS DATE-- used to create date object that is used for employee information within employee class
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

#endif
