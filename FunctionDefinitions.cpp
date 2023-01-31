
//FunctionDefinitions.cpp Source File Method Definitions
#include "Header.h"

//Get Employee Method
int Employee::getAge() {
	return age;
}

//Get ID Method
int Employee::getId() {
	return id;
}

//Get Salary Method
float Employee::getSalary() {
	return salary;
}

//Get Method to Put Information into Output File
void Employee::getAll(int& a, int& i, float& sal) {
	a = age;
	i = id;
	sal = salary;

}

//Stream Operator Methods for File
ostream& operator<<(ostream& out, const Employee& e) {
	out << e.age << e.id << e.salary;
	return out;
}
istream& operator>>(istream& in, Employee& e) {
	in >> e.age;
	in >> e.id;
	in >> e.salary;
	return in;
}


//Print Method to Print Object Information to Screen
void Employee::Print() {
	cout << "Employee: " << " Age: " << age << " Id: " << id << " Salary: " << salary << endl;
}
