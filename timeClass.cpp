#include "timeClass.h"

void Time::printTime() {

	cout << hours << ":" << minutes << ":" << seconds;

}
ostream &operator<<(ostream &cout, extentedTime& exT) {

	cout << "Extented Time: ";
	exT.printTime();
	cout << " " << exT.stringTZones[exT.tZone];
	
	return cout;
}
ostream &operator<<(ostream &cout, invoice& iv) {

	cout << "Invoice Time: ";
	iv.purchase.printTime();

	return cout;
}
