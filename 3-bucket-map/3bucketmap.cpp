// Pierce Thompson
// 05/17/2026
// This is not separated into files for simplicity

#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

struct Employee {
	string name;
	int ID;

	Employee(string arg1, int arg2);
};

void printVector(vector<Employee*>& argE);
void cleanup(map<string, vector<Employee*>>& argM);

int main(void) {
	map<string, vector<Employee*>> categoryMap;

	categoryMap["Project Manager"].push_back(new Employee("Alice", 905239));
	categoryMap["Project Manager"].push_back(new Employee("Bob", 904778));
	categoryMap["Project Manager"].push_back(new Employee("Charlie", 902371));

	categoryMap["Programmer"].push_back(new Employee("David", 901234));
	categoryMap["Programmer"].push_back(new Employee("Eve", 900987));
	categoryMap["Programmer"].push_back(new Employee("Frank", 900123));

	categoryMap["Support Staff"].push_back(new Employee("Grace", 899876));
	categoryMap["Support Staff"].push_back(new Employee("Heidi", 899543));
	categoryMap["Support Staff"].push_back(new Employee("Ivan", 899210));

	int choice;

	cout << "Directory for Teckity Tecky Tech Inc. (Stanton)" << endl;

	do {
		cout << "\nEmployee Categories:" << endl;
		cout << "1. Project Managers" << endl;
		cout << "2. Programmers" << endl;
		cout << "3. Support Staff" << endl;
		cout << "4. Exit" << endl;
		cout << "\nChoice: ";
		cin >> choice;

		if (choice == 1) {
			cout << "\nProject Managers:" << endl;
			printVector(categoryMap["Project Manager"]);
		} else if (choice == 2) {
			cout << "\nProgrammers:" << endl;
			printVector(categoryMap["Programmer"]);
		} else if (choice == 3) {
			cout << "\nSupport Staff:" << endl;
			printVector(categoryMap["Support Staff"]);
		} else if (choice == 4) {
			cout << "Exiting..." << endl;
		} else {
			cout << "Invalid choice." << endl;
		}
	} while (choice != 4);

	cleanup(categoryMap);

	return (0);
}

Employee::Employee(string arg1, int arg2) {
	name = arg1;
	ID = arg2;
}

void printVector(vector<Employee*>& argE) {
	cout << "-----------------" << endl;
	cout << "Name\tID" << endl;
	cout << "-----------------" << endl;
	for (size_t i = 0; i < argE.size(); i++) {
		Employee* e = argE[i];
		cout << e->name << "\t" << e->ID << endl;
	}
	cout << "-----------------" << endl;
}

void cleanup(map<string, vector<Employee*>>& argM) {
	for (map<string, vector<Employee*>>::iterator it = argM.begin();
		it != argM.end();
		it++) {

		vector<Employee*>& employees = it->second;

		for (size_t i = 0; i < employees.size(); i++) {
			delete employees[i];
		}
		employees.clear();
	}
}