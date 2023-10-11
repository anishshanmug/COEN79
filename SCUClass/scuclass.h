/*
 * Name: Anish Shanmuganathan
 * Email: ashanmuganathan@scu.edu
 *
 * Assignment: Container.
 * 1 of 4: SCU Container header file.
 */
#include <iostream>
using namespace std;

namespace coen79 {

    class Student {
    public:
        int id;
        Student();
        Student(int idnum,string n);
        string name;



    friend std::ostream& operator<<(std::ostream& os, const Student &); 
    };

	class SCUClass { 
	public:
		SCUClass(); //declare deck constructor and member functions
        void addStudent(int id,string n);
        void erase(int id);
        string* list(void);
        Student students[30];
        int size;


	friend std::ostream& operator<<(std::ostream& os, const SCUClass &); //declare friend functions



	};
}

