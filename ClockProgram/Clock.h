#pragma once

//Creation of Clock Class
class clock {

private: 

	int hr;
	int min;
	int sec;

public:

	//Constructor
	clock() {

	}

	//Constructor
	clock(int h, int m, int s) {

		h = hr;
		m = min;
		s = sec;

	}

	//Mutators
	void setTime(int h, int m, int s) {

		hr = h;
		min = m;
		sec = s;
	}

	int getTime() {

		return hr;
		return min;
		return sec;
	}

	//Print Method Call
	void printTime();

};
