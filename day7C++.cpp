#include <iostream>
#include <string>
class Student
{
private:
    std::string name;
    int marks;
    int attendance;
public:
    Student(std::string n, int m, int a)
        : name(n), marks(m), attendance(a)
    {
    }
    void display()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Marks: " << marks << std::endl;
        std::cout << "Attendance: " << attendance << std::endl;
    }
    bool isEligible()
    {
        return attendance >= 75;
    }
    static std::string Student::* getNamePointer()
    {
        return &Student::name;
    }
    static int Student::* getMarksPointer()
    {
        return &Student::marks;
    }
    static int Student::* getAttendancePointer()
    {
        return &Student::attendance;
    }
    static void displayMember(Student& s, int Student::* member)
    {
        std::cout << s.*member << std::endl;
    }
     static void displayName(Student& s, std::string Student::* member)
    {
        std::cout << s.*member << std::endl;
    }
};
int main()
{
    Student s1("Suyash", 85, 95);
    Student s2("Diksha", 31, 33);
    Student s3("MSD", 100, 100);
    int Student::* members[2];
    members[0] = Student::getMarksPointer();
    members[1] = Student::getAttendancePointer();
    std::string Student::* member[1];
    member[0] = Student::getNamePointer();
    Student* students[3] = {&s1, &s2, &s3};
    for (int i = 0; i < 3; i++)
    {
        std::cout << "\nStudent " << i + 1 << ":" << std::endl;
        std::cout << "Name: ";
        Student::displayName(*students[i], member[0]);
        std::cout << "Marks: ";
        Student::displayMember(*students[i], members[0]);
        std::cout << "Attendance: ";
        Student::displayMember(*students[i], members[1]);
        std::cout << "Eligibility: ";
        if (students[i]->isEligible())
            std::cout << "Eligible" << std::endl;
        else
            std::cout << "Not Eligible" << std::endl;
    }
    return 0;
}



/* #include<iostream>
#include<string>
class Library
{
  public:
   class Book
   {
     private:
       std::string title;
       std::string author;
       public:
        Book(std::string t, std::string a): title(t), author(a)
        {
            std::cout << "Book constructed: "<< title << std::endl;
        }
        ~Book()
        {
            std::cout << "Book destroyed: "<< title << std::endl;
        }
        void display()
        {
            std::cout << "Title: " << title << std::endl;
            std::cout << "Author: " << author << std::endl;
        }
   };
};
int main()
{
    Library::Book books[3] =
    {
        Library::Book("C++ Primer","Stanley Lippman"),
        Library::Book("Clean Code","Robert Martin"),
        Library::Book("Effective C++","Scott Meyers")
    };
    std::cout << "Library Books:"<<std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout<<"Book"<<i+1<<":" <<std::endl;
        books[i].display();
    }
  return 0;
} */
/* #include <iostream>
#include<string>
class Shape
{
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
    virtual ~Shape()
    {
    }
};
class Circle : public Shape
{
private:
    double radius;
public:
    Circle(double r)
    {
        radius = r;
    }
    double area() override
    {
        return 3.14 * radius * radius;
    }
    double perimeter() override
    {
        return 2 * 3.14 * radius;
    }
};
class Rectangle : public Shape
{
private:
    double length, width;
public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }
    double area() override
    {
        return length * width;
    }
    double perimeter() override
    {
        return 2 * (length + width);
    }
};
class Triangle : public Shape
{
private:
    double a, b, c;

public:
    Triangle(double x, double y, double z)
    {
        a = x;
        b = y;
        c = z;
    }
    double area() override
    {
        double s = (a + b + c) / 2;
        return s * (s - a) * (s - b) * (s - c);
    }
    double perimeter() override
    {
        return a + b + c;
    }
};
int main()
{
    Shape* shapes[3];
    shapes[0] = new  Circle(5);
    shapes[1] = new Rectangle (10, 5);
    shapes[2] = new Triangle (3, 4, 5);
    for (int i = 0; i < 3; i++)
    {
        std::cout<< "Area: " << shapes[i]->area() <<std::endl;
        std::cout<< "Perimeter: " << shapes[i]->perimeter() <<std::endl;
        //cout << endl;
    }
    delete shapes[0];
    delete shapes[1];
    delete shapes[2];
    return 0;
} */
/* #include<iostream>
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
    Developer(std::string n, double s, int id,std:: string lang) : Employee(n, s, id), programmingLanguage(lang) {}
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
    Intern(std::string n, double s, int id, std::string u) : Employee(n, s, id), university(u) {}
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
    SeniorDeveloper(std::string n, double s, int id) : Employee(n, s, id) {}
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
    Manager m("Suyash",75000,101,10);
    Developer d("Ms Dhoni",65000,102,"C++");
    Intern i("Virat",25000,103,"Delhi University");
    TechLead t("Rohit",120000,104);
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
} */
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