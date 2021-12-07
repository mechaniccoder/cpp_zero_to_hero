#pragma once
#include <iostream>
#include <vector>
#include "Employee.h"

namespace Records {
	const int kFirstEmployeeNumber = 100;

	class Database {
		public:
			Employee& addEmployee(const std::string& fistName, const std::string lastName);

			Employee& getEmployee(int employeeNumber);
			Employee& getEmployee(const std::string& fistName, const std::string lastName);

			void displayAll() const;
			void displayCurrent() const;
			void displayFormer() const;

		private:
			std::vector<Employee> mEmployees;
			int mNextEmployeeNumber = kFirstEmployeeNumber;

	};
}
