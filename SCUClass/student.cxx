/*
 * Name: Anish Shanmuganathan
 * Email: ashanmuganathan@scu.edu
 *
 * Assignment: Container.
 * 3 of 4: student class implementation file.
 */

#include <iomanip>
#include <iostream>
using namespace std;

#include "scuclass.h"


namespace coen79 {
    Student::Student(){id=0;}
    Student::Student(int idnum,string n){id=idnum; name=n;}
    
    ostream& operator<<(ostream& os, const Student & student) {
    // Postcondition: Prints out the name and id of the student.
      cout << "Name: " << student.name << ", id: " << student.id << endl;
      return os;
    }
}