#include <iostream>
#include "Clock.h"

using namespace std;

//Print Method Used to Display Time
void clock::printTime() {

	cout << "The Time is:" << endl;

	cout << hr << ":" << min << ":" << sec << endl;
}