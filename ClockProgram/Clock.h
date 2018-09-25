#pragma once



class clock {

private: 

	int hr;
	int min;
	int sec;

public:


	clock() {

	}

	clock(int h, int m, int s) {

		h = hr;
		m = min;
		s = sec;

	}

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

	void printTime();

};
