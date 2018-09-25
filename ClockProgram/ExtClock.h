#pragma once
#include "Clock.h"

//Child Class of Clock
//Used for Time Zone Ajustment
class extClock: public clock {

private:

	int tZone;

public:

	void setTimeZone(int tz) {

		tz = tZone;
	}

	int getTimeZone() {

		return tZone;
	}

	//Method Call to Ajust Time Based on Time Zone
	int timeZone(int tZone, int time);

};
