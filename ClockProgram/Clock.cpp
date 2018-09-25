
#include <iostream>
#include "Clock.h"

using namespace std;

void clock::printTime() {

	cout << "The Time is:" << endl;

	cout << hr << ":" << min << ":" << sec << endl;
}