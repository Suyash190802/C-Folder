#include <iostream>
class Product
{
public:
    static int count;
    Product()
    {
        count++;
        std::cout << "Product created Count = "<< count << std::endl;
    }
    ~Product()
    {
        count--;
        std::cout << "Product deleted Count = "<< count << std::endl;
    }
   static void printTotalCount()
    {
        std::cout << "Total products: " << count << std::endl;
    }

};
int Product::count = 0;
int main()
{
    Product p1;
    Product p2;
    Product p3;
    std::cout<<"----------"<<std::endl;
    Product::printTotalCount();
   // std::cout << "\nTotal products: " << Product::count << std::endl;
    std::cout << "\nProducts after delete: " << Product::count << std::endl;
    return 0;
} 




/* #include<iostream>
class Employee
{ 
  public:
   int employeeId;
   char name[20];
   float salary;
   void details()
   {
         std::cout << "Enter Employee ID: ";
          std::cin >>employeeId;
          std::cout << "Enter Name: ";
          std::cin >>name;
          std::cout << "Enter Salary: ";
          std::cin >>salary;       
   }
   void display()
   {
            std::cout << "Employee ID: " <<employeeId << std::endl;
            std::cout << "Name: " <<name << std::endl;
            std::cout << "Salary: " <<salary << std::endl;
   }
   void increaseSalary(float percentage)
   {
            salary += salary * (percentage / 100);
            std::cout << "Salary increased by " << percentage << "%." << std::endl;
   }
   void exit()
   {

                std::cout << "Employee object deleted."
                          << std::endl;
   }

};
int main()
{
  Employee *emp=new Employee();
  int op;
  while(1)
  {
  std::cout<<"1.Enter employee details\n 2.Display Employee\n 3.Increase salary\n 4.Exit\n";
  std::cout<<"Enter you choice:"<<std::endl;
  std::cin>>op;
  switch(op)
  {
    case 1: emp->details();
            break;
          
    case 2:emp->display();
            break;
    case 3:
            float percentage;
            std::cout << "Enter percentage to increase salary by: ";
            std::cin >> percentage;
            emp->increaseSalary(percentage);
            break;
    case 4:
            emp->exit();
    default:   
            std::cout<<"Invalid input"<<std::endl;        
  }
}
  return 0;
} */
/* #include <iostream>

class Test
{
public:
    Test()
    {
        std::cout << "Constructor called" << std::endl;
    }
    ~Test()
    {
        std::cout << "Destructor called" << std::endl;
    }
};

int main()
{
   Test *p1=new Test();
   Test *p2=p1;
   delete p1;
   delete p2;
} */
/* #include<iostream>
class Rectangle
{ 
  public:
    int length,width;
    Rectangle()
    {
        length = 10;
        width = 5;
        std::cout<< "Default Constructor called" <<std::endl;
    }
    Rectangle(int l,int w)
    {
        length = l;
        width = w;
        std::cout<< "Parameterized Constructor called" <<std::endl;
    }
    ~Rectangle()
    {
        std:: cout << "Destructor called" << std::endl;
    }
};
void area(Rectangle& r, int factor)
{ 
   r.length=factor*r.length;
   r.width=factor*r.width;
   int area=r.length* r.width;
   std::cout<<area<<std::endl;
}
int main()
{
    Rectangle r1,r2(30,40);
    std::cout << "Area of r1: "<<std::endl;
    area(r1,2);
    std::cout << "Area of r2: "<<std::endl;
    area(r2,2);  
    return 0;
} */
