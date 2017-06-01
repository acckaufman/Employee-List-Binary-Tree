//This program demonstrates the implementation of a binary tree using an EmployeeInfo class.
//Instances of EmployeeInfo contain an employee's name and ID number.
#include "BinaryTree.h"
#include "EmployeeInfo.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Create the binary tree and fill it with the data given in the assignment.
	cout << "Now creating a binary tree of the EmployeeInfo data type..." << endl;
	BinaryTree<EmployeeInfo> employeeTree;
	cout << "Done." << endl << endl;

	cout << "Now adding the following employees: " << endl;
	cout << left << setw(8) << "1021" << setw(30) << "John Williams" << endl;
	cout << left << setw(8) << "1057" << setw(30) << "Bill Witherspoon" << endl;
	cout << left << setw(8) << "2487" << setw(30) << "Jennifer Twain" << endl;
	cout << left << setw(8) << "3769" << setw(30) << "Sophia Lancaster" << endl;
	cout << left << setw(8) << "1017" << setw(30) << "Debbie Reece" << endl;
	cout << left << setw(8) << "1275" << setw(30) << "George McMullen" << endl;
	cout << left << setw(8) << "1899" << setw(30) << "Ashley Smith" << endl;
	cout << left << setw(8) << "4218" << setw(30) << "Josh Plemmons" << endl << endl;

	//Create an instance of EmployeeInfo for use in adding new nodes to the binary tree.
	EmployeeInfo temp(1021, "John Williams");

	//Add the first employee to the binary tree.
	employeeTree.insertNode(temp);

	//Set the values in temp to the data for the other employees, and then continue to add the nodes to the tree.
	temp.setID(1057);
	temp.setName("Bill Witherspoon");
	employeeTree.insertNode(temp);

	temp.setID(2487);
	temp.setName("Jennifer Twain");
	employeeTree.insertNode(temp);

	temp.setID(3769);
	temp.setName("Sophia Lancaster");
	employeeTree.insertNode(temp);

	temp.setID(1017);
	temp.setName("Debbie Reece");
	employeeTree.insertNode(temp);

	temp.setID(1275);
	temp.setName("George McMullen");
	employeeTree.insertNode(temp);

	temp.setID(1899);
	temp.setName("Ashley Smith");
	employeeTree.insertNode(temp);

	temp.setID(4218);
	temp.setName("Josh Plemmons");
	employeeTree.insertNode(temp);

	cout << "Done." << endl << endl;

	//Display the values in the tree "in order," based on employee ID number.
	system("pause");

	cout << endl;
	cout << "The following employees are now in the system (sorted by Employee ID #):" << endl;
	employeeTree.displayInOrder();
	cout << endl;

	system("pause");

	char again;		//For do-while loop

	cout << endl;
	cout << "You may now search for any employee, using their employee ID." << endl;

	//Repeat the following do-while loop as long as the user wants to keep searching for employee ID numbers.
	do{
		//Define an integer to hold the user's input
		int input;

		cout << endl << "Enter the employee ID number you would like to search for: ";
		cin >> input;

		//Create a temporary EmployeeInfo variable, and assign the user's input as the employee ID number.
		EmployeeInfo searchTemp;
		searchTemp.setID(input);

		bool found = employeeTree.searchNode(searchTemp);
		//*Note: the searchNode() function has been modified in this program, to pass the temporary EmployeeInfo object by reference.
		//If the employee ID number is found within the tree, the function not only returns true, but it also assigns the name of
		//the employee in the tree to the employee name attribute of the searchTemp object (for display purposes).

		if (found)
		{
			cout << endl << "The employee ID you searched for was found:" << endl << endl;
			cout << searchTemp << endl << endl;
		}
		else
			cout << endl << "The employee ID you searched for was not found." << endl << endl;

		cout << "Would you like to search for another employee ID? (y/n): ";
		cin >> again;
	} while (again == 'y' || again == 'y');

	cout << endl << "Thank you for using the program!" << endl;

	system("pause");
	return 0;
}