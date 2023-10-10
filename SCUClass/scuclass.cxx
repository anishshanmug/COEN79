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
    SCUClass::SCUClass(){
        Student students[30]={0};
        int size=0;
    }

    void SCUClass::addStudent(int id,string n){
        assert(size<30);
        Student s(id);
        for(int i=0;i<size;i++){
            if(students[i].id=id){
                cout<<"Student already in class! ";
                return;
            }
        }
        students[size]=s;
        size++;
    }

    void SCUClass::erase(int id){
        int pos=-1;
        for(int i=0;i<size;i++){
            if(students[i].id=id){
                pos=i;
                break;
            }
        }
        if(pos==-1){
            cout<<"Student not in classx ";
            return;
        }
        for(int i=pos;i<size;i++){
            students[i]=students[i+1];
        }

    }

    void SCUClass::list(){
        for(int i=0;i<size;i++){
            cout<<students[i];
        }
    }


    int SCUClass::length() const {return size;}
    

}