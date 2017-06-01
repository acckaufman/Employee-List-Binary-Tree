#include "EmployeeInfo.h"
#include <fstream>
#include <iomanip>

//###########################################################################
//Overloaded << operator, for use with display functions.					#
//###########################################################################
ostream &operator << (ostream &strm, const EmployeeInfo &obj)
{
	strm << left << setw(8) << obj.getID() << setw(30) << obj.getName();
	return strm;
}