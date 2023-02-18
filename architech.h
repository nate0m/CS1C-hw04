#ifndef _ARCHITECH_H
#define _ARCHITECH_H

#include "employee.h"

// --CLASS-- derived from employee added specific architech private data members
// used to store architech employee information 
class architech: public employee {

	public:
		architech();
		architech(string n, string t, string pNum, int a, char g, int s, 
				   string sN, int dNum, int lSInc, int yE) : employee(n, t, pNum, a, g, s),
															 suprName{sN},
															 departNum{dNum},
															 lSalInc{lSInc} {}
		void const printArchitech();

		void changeSuprName (string sN) {suprName = sN;}
		void changeDepartNum(int dN)    {departNum = dN;}
		void changeLSalInc  (int lSInc) {lSalInc = lSInc;}
		void changeYearsExp (int yE)    {yearsExp = yE;}

	private:
		string suprName;
		int departNum;
		int lSalInc;
		int yearsExp;
};

#endif
