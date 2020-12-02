/* employee.h
 * Class for one employee.
 * 
 */
 
#include <iostream>
#include <cstring>

using namespace std;

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

const int MAX_CHAR = 200;
/* another line */

/* THIS IS THE SECOND CHANGE */
class Employee {
	
    public: 
        
        // Default constructor (one with no parameters)
        Employee();
        ~Employee();
        
        // Another constructor (for adding all the info at declaration time)
        Employee(const char* fn, const char* ln, int hours, float rate);
        
        void print(); // prints all information about the Employee
        float getGrossPay();
        
     // these are assessors (getters)
         const char* getLastName();
         const char* getFirstName();
         int getHours();
         float getRate();
        
         
      // these are mutators (setters)
         void setLastName(const char* ln);
         void setFirstName(const char* fn);
         void setRate(float r);
         void setHours(int h);
         
	private:
	 // These are private and cannot be accessed
	// outside the class
	
	    char* lastName;
	    char* firstName;
	    int hours;
	    float rate;
	  
};

#endif
