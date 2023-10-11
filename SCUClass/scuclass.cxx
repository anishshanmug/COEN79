/*
 * Name: Anish Shanmuganathan
 * Email: ashanmuganathan@scu.edu
 *
 * Assignment: Container.
 * 2 of 4: SCU class implememtation file.
 */

#include <iomanip>
#include <iostream>
using namespace std;

#include "scuclass.h"


namespace coen79 {
    SCUClass::SCUClass(){ //
        Student students[30]={};
        size=0;
    }

    void SCUClass::addStudent(int idnum,string n){
        if(size>=30){
            cout<<"Class full" << endl;
            return;
        }
        Student s(idnum,n);
        for(int i=0;i<size;i++){
            if(students[i].id==idnum){
                cout<<"Student already in class! " << endl;
                return;
            }
        }
        students[size++]=s;
        //size++;
    }

    void SCUClass::erase(int idnum){ //erases student by id
        if(size<=0){
            cout<<"Class empty" << endl;
            return;
        }
        int pos=-1;
        for(int i=0;i<size;i++){
            if(students[i].id==idnum){
                pos=i;
                break;
            }
        }
        if(pos==-1){
            cout<<"Student not in class " << endl;
            return;
        }
        for(int i=pos;i<size;i++){
            students[i]=students[i+1];
        }
        size--;

    }

    string* SCUClass::list(void) {
    // Postcondition: Returns a string array of the student information in the class.
        string studentList[size];

        for (int i = 0; i < size; i++) {
            studentList[i] = "ID: "+students[i].id;
        }

        return studentList;
    }


	ostream& operator<<(std::ostream& os, const SCUClass &scuclass){ //declare friend functions
    // Postcondition: Prints out the name and id of the student.
        for(int i=0;i<scuclass.size;i++){
            cout<<scuclass.students[i];
        }
        return os;

    }

}