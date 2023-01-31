Header.h File:
//Header.h File for Class Definition 
#pragma once
#include <iostream>
using namespace std;

class Employee {
	//Private Attributes
	int age;
	int id;
	float salary;


//Public Methods
public:

	//Default Constructor Written as Inline Definition
	Employee() { age = 0; id = 0; salary = 0; }

	//Copy Constructor With Inline Definition
	Employee(Employee& x) { age = x.age; id = x.id; salary = x.salary; }

	//= Operator Method to Assign Content of b to d
	Employee& operator=(Employee& x) { age = x.age; id = x.id; salary = x.salary; return *this; }

	//Set Functions Written as Inline Definitions
	void setAge(int x) { age = x; }
	void setId(int x) { id = x; }
	void setSalary(float x) { salary = x; }


	//Member Functions
	int getAge();
	int getId();
	float getSalary();
	void getAll(int&, int&, float&);
	void Print();

	//Stream Operators for File
	friend ostream& operator<<(ostream& out, const Employee&);
	friend istream& operator>>(istream& in, Employee&);

};
