#include<iostream>
#include<string>
class Student 
{
   public:
     std::string name;
     int marks;
     Student(std::string n, int m)
        : name(n), marks(m)
    {
    }
    bool operator>(const Student& s) const
    {
      return marks>s.marks;
    }
};
int main()
{
  Student s1("rahul",75);
  Student s2("Amit",62);
  if(s1>s2)
  {
    std::cout<<"rahul has higher marks";
  }
  return 0;
}




/* #include <iostream>
#include <string>
class Student
{
public:
    std::string name;
    int marks;
    Student(std::string n, int m)
        : name(n), marks(m)
    {
    }
    void display()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Marks: " << marks << std::endl;
    }
    Student& operator++()
    {
        marks += 5;
        return *this;
    }
    Student operator++(int)
    {
        Student temp = *this;
        marks += 5;
        return temp;
    }
};
int main()
{
    Student s("Suyash", 67);
    std::cout << "Original:" << std::endl;
    s.display();
    Student& a = ++s;
    std::cout << "\nThrough address:" << std::endl;
    a.display();
    Student b = s++;
    std::cout << "\nThrough normal op++:" << std::endl;
    s.display();
    return 0;
} */
/* #include <iostream>
#include <string>
class Address
{
private:
    std::string city;
    std::string state;
public:
    Address(std::string c, std::string s)
        : city(c), state(s)
    {
    }
    void displayAddress()
    {
        std::cout << "City: " << city << std::endl;
        std::cout << "State: " << state << std::endl;
    }
};
class Student
{
private:
    std::string name;
    int marks;
    Address address;
public:
    Student(std::string n, int m, Address a)
        : name(n), marks(m), address(a)
    {
    }
    void displayDetails()
    {
        std::cout << "Name: " <<name<< std::endl;
        std::cout << "Marks: " <<marks<< std::endl;
        address.displayAddress();
    }
};

int main()
{
    Address a("Patna", "Bihar");
    Student s("Suyash", 75, a);
    s.displayDetails();
    return 0;
}
 */
/* #include<iostream>
class CPU
{
  public:
    CPU()
    {
      std::cout<<"CPU constructor created"<<std::endl;
    }
    ~CPU()
    {
      std::cout<<"CPU constructor deleted"<<std::endl;
    }
};
class RAM
{
  public:
    RAM()
    {
      std::cout<<"RAM constructor created"<<std::endl;
    }
    ~RAM()
    {
      std::cout<<"RAM constructor deleted"<<std::endl;
    }
};
class Computer
{
  CPU cpu;
  RAM ram;
public:
     public:
    Computer()
    {
      std::cout<<"Computer constructor created"<<std::endl;
    }
    ~Computer()
    {
      std::cout<<"Computer constructor deleted"<<std::endl;
    }
};
int main()
{
  Computer c;
  return 0;
} */
/* #include <iostream>
#include <string>

class Student
{
private:
    std::string name;
    int marks;

    Student(std::string n, int m)
        : name(n), marks(m)
    {
    }
    int getMarks()
    {
        return marks;
    }
    void display()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Marks: " << marks << std::endl;
    }
    friend class Result;
};
class Result
{
public:
    void showResult(Student& s)
    {
        s.display();
        if (s.getMarks() < 33)
            std::cout << "Student is fail" << std::endl;
        else
            std::cout << "Student is pass" << std::endl;
    }
    Student createStudent(std::string name, int marks)
    {
        return Student(name, marks);
    }
};
int main()
{
    Result r;
    Student s = r.createStudent("Suyash", 5);
    r.showResult(s);
    return 0;
} */
/* #include <iostream>
#include <string>

class Student
{
private:
    std::string name;
    int marks;
public:
    Student(std::string n, int m) : name(n), marks(m) {}
    int getMarks()
    {
        return marks;
    }
    void display()
    {
        std::cout<<"Name: "<<name<< std::endl;
        std::cout<<"Marks: "<<marks<< std::endl;
    }
};
class Result
{
public:
    void showResult(Student& s)
    {
        if (s.getMarks()<40)
            std::cout << "Student is fail" << std::endl;
        else
            std::cout << "Student is pass" << std::endl;
    }
};
int main()
{
    Student s("Suyash", 75);
    s.display();
    Result r;
    r.showResult(s);
    return 0;
} */
/* #include <iostream>
#include <string>
class Employee
{
    std::string name;
    double salary;
public:
 void display()
    {
      std::cout<<"name: "<<name<<"salary: "<<salary<<std::endl;
    }
    Employee(double salary , std::string Name) : salary(salary) , name(name) {}
    friend class HR;
};
class HR
{
public:
    void increaseSalary(Employee& e, double amount)
    {
        e.salary += amount;
       // std::cout << "Increased Salary: " << e.salary << std::endl;
    }
};
int main()
{
    Employee e(20,"Suyash");
    std::cout<<"Old salary"<<std::endl;
    e.display();
    HR h;
    h.increaseSalary(e, 10);
    std::cout<<"Increased salary"<<std::endl;
    e.display();
    return 0;
} */
/* #include <iostream>
class Rectangle
{
private:
    int length, width;
public:
    Rectangle(int l, int w) : length(l), width(w)
    {
    }
    void modifyLength(int l)
    {
        length = l;
    }
    void display()
    {
        std::cout << "Length: " << length << std::endl;
        std::cout << "Width: " << width << std::endl;
        std::cout << "Area: " << length * width << std::endl;
    }
    friend Rectangle& largerRectangle(Rectangle& r1, Rectangle& r2);
};
Rectangle& largerRectangle(Rectangle& r1, Rectangle& r2)
{
    if ((r1.length * r1.width) > (r2.length * r2.width))
    {
        std::cout << "R1 is larger" << std::endl;
        return r1;
    }
    else
    {
        std::cout << "R2 is larger" << std::endl;
        return r2;
    }
}
int main()
{
    Rectangle r1(10, 5);
    Rectangle r2(8, 6);
    Rectangle& larger = largerRectangle(r1, r2);
    std::cout <<"Larger rectangle dimension:"<< std::endl;
    larger.display();
    larger.modifyLength(20);
    std::cout <<"modifying length of larger rectangle:"<< std::endl;
    std::cout<<"Rectangle 1:"<< std::endl;
    r1.display();
    std::cout<<"Rectangle 2:"<< std::endl;
    r2.display();
    return 0;
} */