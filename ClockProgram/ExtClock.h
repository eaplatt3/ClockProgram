#pragma once

#include "Clock.h"

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

	int timeZone(int tZone, int time);

	void printTime();

};
