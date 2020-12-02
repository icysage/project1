/* employeelist.h
 * Class to hold a 
 * linked list of
 * employees.
 */
 
#include <iostream>
#include <cstring>
#include "employee.h"

using namespace std;

#ifndef EMPLOYEELIST_H
#define EMPLOYEELIST_H

/* this is the info for
 * one node in the list
 */
 
 
struct Node 
{
    Employee *data;
    Node *next;	
};

/* here is a comment */

class EmployeeList {
	
    public: 
        
        // Default constructor (one with no parameters)
        EmployeeList();
        // default destructor (needed to delete dynamically allocated memory
        ~EmployeeList();
        
        void printAll(); // prints all employees
        Employee* findEmployeeByLastName(char* ln); // finds employee object
                                                     // or passes back and NULL pointer
        void addEmployee(Employee* emp);
        
	private:
	   // this is the front of the linked list
	   // note that you only need one of these (not an array of them)
	   Node *head;
};

#endif
