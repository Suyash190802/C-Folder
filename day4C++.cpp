#include<iostream>
#include<string>
class Student
{
  public:  
        std::string name;
        int* marks;
    Student(std::string n, int m)
    {
        name=n;
        marks=new int;
        *marks=m;
    }
    Student(const Student& s)
    {
        name=s.name;
        marks=new int;
        *marks=*(s.marks);
    }
    ~Student()
    {
        delete marks;
        std::cout << "Memory deleted for " << name <<std::endl;
    }
    void display()
    {
         std::cout<<"Name of student:"<<name<<std::endl;
         std::cout<<"Marks of student:"<<*marks<<std::endl;
    }
};
int main()
{ 
    Student s1("Suyash", 85);
    Student s2 = s1;
    std::cout<< "Before modification:" <<std::endl;
    s1.display();
    s2.display();
    *s2.marks = 95;
    std::cout<< "After modifying copied student's marks:" <<std::endl;
    s1.display();
    s2.display();
    return 0;
}