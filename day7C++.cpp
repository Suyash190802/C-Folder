#include<iostream>
#include<string>
class Employee
{
  public:
     std::string name;
  protected:
     double salary;
  private:
    int employeeId;
  public:
      Employee(std::string n, double s, int id) : name(n) , salary(s), employeeId(id) {}
      void displayBasicInfo()
      {
        std::cout << "Name: " << name <<std::endl;
        std::cout << "Salary: " << salary <<std::endl;
        std::cout << "Employee ID: " << employeeId <<std::endl;
      }        
};
class Manager : public Employee
{
   public:
       int teamSize;
       Manager(std::string n , double s, int id, int t) : Employee(n, s, id), teamSize(t) {}
       void displayManagerInfo()
       {
        std::cout<<"\n--Manager--"<<std::endl;
        std::cout << "Name: " << name <<std::endl;
        std::cout << "Salary: " << salary << std::endl;
        std::cout << "Team Size: " << teamSize <<std:: endl;
       }
};
class Developer : protected Employee
{
public:
    std::string programmingLanguage;
    Developer(std::string n, double s, int id,std:: string lang)
        : Employee(n, s, id), programmingLanguage(lang) {}
    void displayDeveloperInfo()
    {
        std::cout << "\n--Developer--" <<std::endl;
        std::cout << "Name: " << name <<std::endl;
        std::cout << "Salary: " << salary <<std::endl;
        std::cout << "Programming Language: "<< programmingLanguage <<std::endl;
    }
};
class Intern : private Employee
{
public:
    std::string university;
    Intern(std::string n, double s, int id, std::string u)
        : Employee(n, s, id), university(u) {}
    void displayInternInfo()
    {
        std::cout<< "\n--Intern--" <<std::endl;
        std::cout<< "Name: " << name <<std::endl;
        std::cout<< "Salary: " << salary <<std::endl;
        std::cout << "University: " << university <<std::endl;
    }
};
class TeamLead : virtual public Employee
{
   public:
        TeamLead(std::string n, double s, int id) : Employee(n ,s ,id) {}
};
class SeniorDeveloper : virtual public Employee
{
public:
    SeniorDeveloper(std::string n, double s, int id)
        : Employee(n, s, id) {}
};
class TechLead : public TeamLead, public SeniorDeveloper
{
public:
    TechLead(std::string n, double s, int id)
        : Employee(n, s, id),
          TeamLead(n, s, id),
          SeniorDeveloper(n, s, id) {}
    void displayTechLeadInfo()
    {
        std::cout<< "\n--Tech Lead--" <<std::endl;
        std::cout<< "Name: " << name <<std::endl;
        std::cout<< "Salary: " << salary <<std::endl;
        displayBasicInfo();
    }
};
  int main()
{
    Manager m("Suyash", 75000, 101, 10);
    Developer d("Ms Dhoni", 65000, 102, "C++");
    Intern i("Virat", 25000, 103, "Delhi University");
    TechLead t("Rohit", 120000, 104);
    m.displayManagerInfo();
    std::cout << "\nManager basic information:" <<std::endl;
    m.displayBasicInfo();
    d.displayDeveloperInfo();
    i.displayInternInfo();
    t.displayTechLeadInfo();
    std::cout << "\nUsing Manager object:" <<std::endl;
    m.displayBasicInfo();
    std::cout<< "\nTechLead name directly: "<< t.name <<std::endl;
    return 0;
}


/*  #include <iostream>
#include <string>
class Person
{
public:
    std::string name;
    int age;
    void displayPerson()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};
class Student : public Person
{
protected:
    int rollno;
public:
    void displayStudent()
    {
        std::cout << "Roll No: " << rollno << std::endl;
    }
};
class ExamStudent : protected Student 
{
  public:
    int marks=87;
      void setDetails()
    {
        name = "Rahul";
        age = 20;
        rollno = 103;
    }
    void displayMarks()
    {
        std::cout << "Exam Student:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Roll No: " << rollno << std::endl;
        std::cout << "Marks: " << marks << std::endl;
    }
};
class ScholarshipStudent : protected Student
{
public:
    void setDetails()
    {
        name = "Suyash";
        age = 20;
        rollno = 101;
    }
    void displayScholarship()
    {
        std::cout << "Scholarship Student:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Roll No: " << rollno << std::endl;
    }
};
class SportsStudent : private Student
{
public:
    void setDetails()
    {
        name = "MS Dhoni";
        age = 21;
        rollno = 102;
        //city = "Ranchi";
    }
    void displaySports()
    {
        std::cout << "Sports Student:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Roll No: " << rollno << std::endl;
    }
};
int main()
{
    ScholarshipStudent s1;
    SportsStudent s2;
    ExamStudent e;
    s1.setDetails();
    s2.setDetails();
    e.setDetails();
    s1.displayScholarship();
    s2.displaySports();
    e.displayMarks();
    return 0;
}  */