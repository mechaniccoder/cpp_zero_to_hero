#include <iostream>
#include "employee.h"

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
}