// oopPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std; 

class Employee
{
public: 
	string name; 
	string company; 
	int age; 


	void introduceYourself()
	{
		cout << "Name: " << name << endl; 
		cout << "Company: " << company << endl; 
		cout << "Age: " << age << endl;
	}

	// Class constructors 

	Employee(string name, string company, int age)
	{
		cout << "\nA new employee was created!\n" << endl; 
		this->name = name; 
		this->company = company; 
		this->age = age; 
	}
	
	Employee()
	{
		cout << "\nAn employee was created!\n" << endl; 
	}

	Employee(string name)
	{
		cout << "\nAn employee was created!\n" << endl; 
		cout << "Name: " << name << endl; 
		this->name; 
	}
};
int main()
{
	Employee employee1; 
	employee1.name = "John"; 
	employee1.company = "Amazon"; 
	employee1.age = 73; 
	employee1.introduceYourself(); 

	Employee employee2; 
	employee2.name = "Eric"; 
	employee2.company = "Youtuber"; 
	employee2.age = 23; 
	employee2.introduceYourself(); 
	
	// Create an employee with a constructor
	Employee employee3("Jeremy");

	// Avoid using raw pointers; use stack allocation

	

	Employee aThreeFiledEmployee("Jack", "Redbull", 19); 


	// Create an employee using a pointer
	Employee* pEmployee = new Employee("New Employee"); 
	pEmployee->introduceYourself(); 
	cout << "\n The new employee's name is: " << pEmployee->name << endl; 
	cout << "\n The new employee's company is: " << pEmployee->company << endl;
	cout << "\n The new employee's age is: " << pEmployee->age << endl;
	
	// Create a vector (list of objects) to stroe Employee objects 
	vector<Employee> employeesLoop; 
	

	// Create  a pointer for my employees
	Employee* pEmpList; 
	for (int i = 0; i < 10; i++)
	{
		cout << "\n in the for loop and i is " << i << endl; 
		pEmpList = new Employee("New Employee in my list"); 
		pEmpList->introduceYourself(); 
		// Add this object to our vector list 
		employeesLoop.push_back(*pEmpList); 
	}
	
	// Use a for : each loop to output the list 
	for (const auto& item : employeesLoop)
	{
		item.introduceYourself(); // No more erro because the method is const
	}



	// Create a vector to store Employee objects
	vector<Employee> employees; 


	// Add employees to the vector using constructor
	employees.push_back(Employee("John", "Amazon", 73)); 
	employees.push_back(Employee("Eric", "Youtuber", 23));
	employees.push_back(Employee("Jeremy", "In n Out", 20));
	employees.push_back(Employee("Another", "A company", 0));


	// Loop through and introduce each employee
	// This is how you loop through a vector list

	for (const auto& employee : employees)
	{
		employee.introduceYourself(); 
	}




	return 0; 
}

