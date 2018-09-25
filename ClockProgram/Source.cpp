//Earl Platt III
//Data Structures - BCS 370
//9/25/2018
//Clock Problem: 
// 1) Create Clock Class
// 2) Create Child Clock Class
// 3) Clock Class Holds & Prints Time
// 4) Child Clock Class Holds & Ajusts
//	  Time Zone Settings
// 5) Display Time & Time Zone Time Change

//Input: Prompt User for The Current Time
//Output: Displays Current Time & Current Time
//        in a Different Time Zone

#include <iostream>
#include "Clock.h"
#include "ExtClock.h"

using namespace std;

int main() {

	int hr;
	int min;
	int sec;
	int tZone;

	//Creates Clock Objects
	clock clock1;
	extClock extclock1;

	//User Input for Hours
	cout << "Enter Time" << endl;
	cout << "Hours: ";
	cin >> hr;

	//Checks User Input Verifies its in 24 Format
	if (hr > 24 || hr < 0) {

		cout << "Invalid Input" << endl;
		cout << "Re-enter Vaild Number" << endl;
		cin >> hr; 
	}

	//Checks User Input Verifies it is in Number Format
	while (cin.fail()) {

		cout << "Invalid Input Please Re-enter Your Number" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> hr;
		cout << " " << endl;
	}

	//Users Input for Minutes
	cout << "Minutes: ";
	cin >> min;

	//Checks User Input Verifies its in Time Format
	if (min > 59 || min < 0) {

		cout << "Invalid Input" << endl;
		cout << "Re-enter Vaild Number" << endl;
		cin >> min;
	}

	//Checks User Input Verifies it is in Number Format
	while (cin.fail()) {

		cout << "Invalid Input Please Re-enter Your Number" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> min;
		cout << " " << endl;
	}

	//Users Input for Seconds
	cout << "Second: ";
	cin >> sec;

	//Checks User Input Verifies its in Time Format
	if (sec > 59 || sec < 0) {

		cout << "Invalid Input" << endl;
		cout << "Re-enter Vaild Number" << endl;
		cin >> sec;
	}

	//Checks User Input Verifies it is in Number Format
	while (cin.fail()) {

		cout << "Invalid Input Please Re-enter Your Number" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> sec;
		cout << " " << endl;
	}
	cout << " " << endl;

	//Users Input for the Time Zone
	cout << "Enter Time Zone" << endl;
	cin >> tZone;

	//Checks User Input Verifies That the Time Zone Exists
	if (tZone > 12 || tZone < -12) {

		cout << "Invalid Input" << endl;
		cout << "Re-enter Vaild Number" << endl;
		cin >> tZone;
	}

	//Checks User Input Verifies it is in Number Format
	while (cin.fail()) {

		cout << "Invalid Input Please Re-enter Your Number" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> tZone;
		cout << " " << endl;
	}

	//Sets Orignal Values for Time
	clock1.setTime(hr, min, sec);

	//Displays Orignal Vales for Time
	clock1.printTime();

	cout << "Time After Time Zone has Been Ajusted" << endl; 

	//Sets Time Based on Ajustments for Time Zone
	clock1.setTime(extclock1.timeZone(tZone, clock1.getTime()), min, sec);

	//Displays New Time Based on Ajustments for Time Zone
	clock1.printTime();

	system("pause");

	return 0;
}