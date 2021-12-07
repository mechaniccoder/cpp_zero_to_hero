#include <iostream>
#include "Employee.h"

using namespace std;

namespace Records {
	Employee::Employee(const std::string& firstName, const std::string& lastName) : mFirstName(firstName), mLastName(lastName) {}

	void Employee::promote(int raiseAmount) {
		setSalary(getSalary() + raiseAmount);
	}

	void Employee::demote(int demeritAmount) {
		setSalary(getSalary() - demeritAmount);
	}

	void Employee::hire() {
		mHired = true;
	}

	void Employee::fire() {
		mHired = false;
	}

	void Employee::display() const {
		cout << "Employee: " << getLastName() << ", " << getFirstName() << endl;
		cout << "============================" << endl;
		cout << (isHired() ? "Current Employee" : "Former Employee") << endl;
		cout << "Salary: $" << getSalary() << endl;
		cout << endl;
	}

	void Employee::setFirstName(const string& firstName) {
		mFirstName = firstName;
	}

	const std::string& Employee::getFirstName() const {
		return mFirstName;
	}

	void Employee::setEmployeeNumber(int num) {
		mEmployeeNumber = num;
	}

	int Employee::getEmployeeNumber() const {
		return mEmployeeNumber;
	}

	void Employee::setSalary(int sal) {
		mSalary = sal;
	}

	int Employee::getSalary() const {
		return mSalary;
	}
}
