#include <iostream>
#include "ExtClock.h"

using namespace std;

int newtime;

//Method to aajust Time Based on Time Zone
int extClock::timeZone(int timeZone, int time) {


	if (timeZone < 0) {

		newtime = time + timeZone;
	}

	if (timeZone > 0) {

		newtime = time - timeZone;
	}
	

	return newtime;

}
