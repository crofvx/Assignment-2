//include calling functions for main and functions file.
#include <iostream>
#include "Functions.cpp"
using namespace std;
//main function
int main()
{
  //calling employee class and professional class
Employee *employee;
Professional professional;

  //pass employee base class through professional derived class and calling each of its functions corresponding to the class and data
employee=&professional;
  //point to function to find employee data
employee->getEmpData();
  //run data through insurance and other functions to find salary and vacations days 
employee->healthInsurance();
  
employee->weeklyEmpSalary();
  
employee->vacationDays();

  //pass base class through non professional employee class.
nonProfessional nonProfessional;
  
employee=&nonProfessional;
  //pass data through corresponding functions to determine outstanding salary and vacation earned
employee->getEmpData();
  
employee->healthInsurance();
  
employee->weeklyEmpSalary();
  
employee->vacationDays();
  
//end program
    return 0;
}