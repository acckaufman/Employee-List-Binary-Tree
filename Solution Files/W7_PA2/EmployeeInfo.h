#pragma once
#include <string>
using namespace std;

class EmployeeInfo;		//Forward declaration

//Function prototype for overloaded stream operator
ostream &operator << (ostream &, const EmployeeInfo &);

class EmployeeInfo
{
private:
	int empID;
	string empName;
public:
	//###########################################################################
	//Default constructor, sets empID to 0 and empName string to empty.			#									#
	//###########################################################################
	EmployeeInfo()
	{
		empID = 0;
		empName = " ";
	}

	//###########################################################################
	//Constructor that accepts parameters.										#
	//###########################################################################
	EmployeeInfo(int id, string nm)
	{
		empID = id;
		empName = nm;
	}

	//###########################################################################
	//Destructor.																#
	//###########################################################################
	~EmployeeInfo()
	{

	}

	//Mutator functions for data members

	//###########################################################################
	//Sets the employee ID number.												#
	//###########################################################################
	void setID(int num)
	{
		empID = num;
	}

	//###########################################################################
	//Sets the employee name.													#
	//###########################################################################
	void setName(string name)
	{
		empName = name;
	}

	//Accessor functions for data members

	//###########################################################################
	//Returns the employee ID number.											#
	//###########################################################################
	int getID() const
	{
		return empID;
	}

	//###########################################################################
	//Returns the employee name.												#
	//###########################################################################
	string getName() const
	{
		return empName;
	}

	//Overloaded operators

	//###########################################################################
	//Overloaded assignment operator.											#
	//###########################################################################
	void operator = (const EmployeeInfo &right)
	{
		empID = right.empID;
		empName = right.empName;
	}

	//###########################################################################
	//Overloaded > operator, based on employee ID number.						#
	//###########################################################################
	bool operator > (const EmployeeInfo &right)
	{
		bool status;

		if (empID > right.empID)
			status = true;
		else
			status = false;

		return status;
	}

	//###########################################################################
	//Overloaded < operator, based on employee ID number.						#
	//###########################################################################
	bool operator < (const EmployeeInfo &right)
	{
		bool status;

		if (empID < right.empID)
			status = true;
		else
			status = false;

		return status;
	}

	//###########################################################################
	//Overloaded == operator, used for search function. Uses employee ID		#
	//number alone to determine if the two objects are equal.					#
	//###########################################################################
	bool operator == (const EmployeeInfo &right)
	{
		bool status;

		if (empID == right.empID)
			status = true;
		else
			status = false;

		return status;
	}

	//Friends
	friend ostream &operator << (ostream &, const EmployeeInfo &);
};

