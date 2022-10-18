//include and library call
#include <iostream>
#include "Functions.h"
using namespace std;
//class declaration & definition
class Employee
{
//public implements of class
    public:
    //employee data input
    virtual void getEmpData()
    {
      
    }
    //vacation dat function declaration
    virtual void vacationDays()
    {
        
    }
    //health insurance declaration
    virtual void healthInsurance()
    {
        
    }
    //employee weekly salary deaclations
    virtual void weeklyEmpSalary()
    {
        
    }
};
//Professional class definition derived from Employee class.
class Professional:public Employee{
  //variables declared as public so that class can access them when necessary.
  public:
  int numDays;
  int dailySalary = 250;
  //employee data functions definition
  void getEmpData()
  {
      cout<<"(Professional)Please enter the number of days you worked this week: "<<endl;
      cin>>numDays;
  }
  //vacation days function definition
  void vacationDays()
  {
      if(numDays>=6)
      {
          cout<<"Based on given information you qualify for vacation this month: "<<endl;
      }
      else
      {
          cout<<"Based on given information you are not eligible for vacation this month: "<<endl;
      }
  }
  //health insurance functions definition. (I was not sure what concept to implement in the health insurance function corresponding to the employee)
  void healthInsurance()
  {
      
    if(numDays>=4)
    {
      cout << "You have earned 5 hours of paid time off this week" << endl;
    }
    else
    {
      cout << "You did not earn any paid time off this week" << endl;
    }
  }
  void  weeklyEmpSalary()
  {
    cout<<"Your weekly salary is :"<<numDays*dailySalary<<endl;  
  }
    
};
//non professional employee class defition derived from base class.
class nonProfessional :public Employee{
    //public members so that they can be accessed at all times necessary.
     public:
     int hoursWorked;
     int perHourSalary =24.70;
    //get employee data for all corresponding factors
     void getEmpData()
     {
         cout<<endl << "(Non-Professional)Please enter number of hours you worked this week: "<<endl;
         cin>>hoursWorked;
     }
  //adjust vacation elegibility corresponding to data. Defintion.
  void vacationDays()
  {
     if(hoursWorked>=36)
      {
          cout<<"Based on given information you qualify for vacation: "<<endl;
      }
      else
      {
          cout<<"Based on given information you are not eligible for vacation: "<<endl;
      } 
  }
  //health insurance function definition 
  void healthInsurance()
  {
      if(hoursWorked >= 30)
      {
        cout << "You earned 2.5 hours of paid time off this week" << endl;
      }
    else
      {
        cout << "You did not earn any paid time off this week" << endl;
      }
  }
  //weekly salary functios definition.
  void weeklyEmpSalary()
  {
    //math to find the weekly salary for employee
    cout<<"Your weekly salary is: "<<hoursWorked*perHourSalary<<endl;  
  }
};