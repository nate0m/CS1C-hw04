#ifndef _TIMECLASS_H
#define _TIMECLASS_H

#include "hw04.h"

enum TimeZone {
	PACIFIC,
	MOUTAIN,
	CENTRAL,
	EASTERN
};
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
class invoice: public Time {

	friend ostream &operator<<(ostream &cout, invoice& iv);
	public:
		invoice();
		invoice(Time t) : purchase{t} {}

	private:
		Time purchase;

};




#endif
