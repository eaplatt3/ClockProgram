#include <iostream>
#include "Clock.h"
#include "ExtClock.h"

using namespace std;

int main() {

	int hr;
	int min;
	int sec;
	int time;
	int tZone;

	clock clock1;
	extClock extclock1;

	cout << "Enter Time" << endl;
	cout << "Hours: ";
	cin >> hr;
	cout << "Minutes: ";
	cin >> min;
	cout << "Second: ";
	cin >> sec;
	cout << " " << endl;
	cout << "Enter Time Zone" << endl;
	cin >> tZone;

	clock1.setTime(hr, min, sec);

	clock1.printTime();

	extclock1.timeZone(tZone, clock1.getTime());

	clock1.setTime(hr, min, sec);

	clock1.printTime();

	system("pause");




	return 0;
}