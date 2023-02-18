#ifndef _PROGRAMMER_H
#define _PROGRAMMER_H

#include "employee.h"

// --CLASS-- derived from employee class added specific programmer private date members
// used to store data of programmer employees
class programmer: public employee {

	public:
		programmer();
		programmer(string n, string t, string pNum, int a, char g, int s, 
				   string sN, int dNum, int lSInc, bool c, bool j) : 
			employee(n, t, pNum, a, g, s),
			suprName{sN},
			departNum{dNum},
			lSalInc{lSInc},
			cpp{c},
			java{j} {}

		void const printProgrammer();

		void changeSuprName (string sN) {suprName = sN;}
		void changeDepartNum(int dN)    {departNum = dN;}
		void changeLSalInc  (int lSInc) {lSalInc = lSInc;}
		void changeCpp      (bool c)    {cpp = c;}
		void changeJava     (bool j)    {java = j;} 

	private:
		string suprName;
		int departNum;
		int lSalInc;
		bool cpp;
		bool java;	
};

#endif
