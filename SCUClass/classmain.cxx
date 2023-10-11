/*
 * Name: Anish Shanmuganathan
 * Email: ashanmuganathan@scu.edu
 *
 * Assignment: Container.
 * 4 of 4: SCU Container main file.
 */

#include "scuclass.h"
#include <iomanip>
#include <iostream>
using namespace std;
using namespace coen79;

int main() {

    SCUClass coen79;

   // Student a(45,"Emily"); 
    //Student b(66,"Eric");
    //Student c(46,"Anish");  

    // Testing addStudent, erase, and list functionality as well as duplicate id checking in addStudent

    coen79.addStudent(45,"Emily");
    coen79.addStudent(66,"Eric");
    coen79.addStudent(46,"Anish");
    coen79.erase(66);
    cout<<" "<<endl;

    cout<<coen79;
    //coen79.addStudent(46,"Anish");
    cout<<coen79;
    //Student coen79L=coen79.list();
/*
    for (int i = 0; i < 31; i++) {
        //Student x();
        coen79.addStudent(i,"");
    }
*/
    return 0;
    
}
