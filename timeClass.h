#ifndef _TIMECLASS_H
#define _TIMECLASS_H

#include "employee.h"

enum TimeZone {
	PACIFIC,
	MOUTAIN,
	CENTRAL,
	EASTERN
};
// --CLASS-- used to store a speciific point in time (hours, mins, secs)
//           also used for derived classes invoice and extendedTime
class Time {

	public:
		Time() {hours = 0; minutes = 0; seconds = 0;}
		Time(int hrs, int mins, int secs) : hours{hrs},
											minutes{mins},
											seconds{secs} {}
		void printTime(); 
	private:
		int hours;
		int minutes;
		int seconds;
};
// --CLASS-- used to store a time and time zone object. Time object is within Time class and time zone object is added in extendedTime class
class extentedTime: public Time {

	friend ostream &operator<<(ostream &cout, extentedTime& exT);

	public:
		extentedTime() {tZone = CENTRAL;}
		extentedTime(int hrs, int mins, int secs, TimeZone tZ) : Time(hrs, mins, secs),
																 tZone{tZ} {}
	private:
		static const int numTimeZones = 4;
		const string stringTZones[numTimeZones] = {"PACIFIC", "MOUNTAIN", "CENTRAL", "EASTERN"}; 
		TimeZone tZone;
};
// --CLASS-- used to store the time of a purchase with a Time object
class invoice: public Time {

	friend ostream &operator<<(ostream &cout, invoice& iv);
	public:
		invoice();
		invoice(Time t) : purchase{t} {}

	private:
		Time purchase;

};




#endif
