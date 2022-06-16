#ifndef DATEUTIL_H_
#define DATEUTIL_H_

#include <string>
using namespace std;

string date_string(int day, int month, int year)
{
	/*
	 * Returns the string form of a date
	 */
	return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
}

#endif /* DATEUTIL_H_ */