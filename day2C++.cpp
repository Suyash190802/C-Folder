 #include<iostream>
#include<string.h>
class Student
{
  public:
         std::string name;
         int marks;
         void display()
         {
            std::cout<<"Name:"<<name<<std::endl;
            std::cout<<"Marks:"<<marks<<std::endl;
         }
};
void addmarks(Student &s, int amounts)
{
    s.marks += amounts;
}
void resetMarks(Student &s)
{
    s.marks = 0;
}
Student& topper(Student &s1, Student &s2)
{
    if (s1.marks > s2.marks)
        return s1;
      
    else
        std::cout<<"Bob is topper"<<std::endl;
        return s2;
}
int main()
{
  Student s1;
  s1.name="Alice";
  s1.marks=70;
  Student s2;
  s2.name="Bob";
  s2.marks=85;
  std::cout<<"Marks without any change"<<std::endl;
  s1.display();
  s2.display();
  addmarks(s1,10);
  std::cout<<"Marks of Alice after addition of 10"<<std::endl;
  s1.display();
  resetMarks(s2);
  std::cout<<"Marks of Bob after reset"<<std::endl;
  s2.display();
  std::cout<<"Topper is:"<<std::endl;
  Student& s3=topper(s1,s2);
  s3.display();

  return 0;
}
 


/* 
 #include <iostream>
int main()
{
    for (int i=0; i<5; i++)
    {
        for (int space=0;space <4-i;space++)
        {
            std::cout << " ";
        }      
        for (int j=0; j<=i; j++)
        {
            std::cout << char('A' + i) << " ";
        }
        std::cout << std::endl;
    }
    return 0;
} */
/*  
 #include <iostream>
int main()
{
    int num=1;
    for (int i=0;i<4;i++)
    {
        for (int j=0; j<=i; j++)
        {
            std::cout<<num<<" ";
            num++;
        }
        std::cout<<std::endl;
    }
    return 0;
}   */
/* #include<iostream>
#include<string>
void car(std::string msg,int num=123)
{
   std::cout<<"car number"<<" "<<num<<" "<<"model name"<<" "<<msg << "\n";
}
int main()
{
   car("EZ6");
   car("EZ8",125);
  return 0;
} */
/*  #include<iostream>
int palindrome(int num) 
{
    int rev = 0, originalNum = num;
    while (num > 0)
     {
        rev = rev * 10 + (num % 10);
        num /= 10;
      }
    return (originalNum == rev);
}
int main()
{
    int num;
    std::cin>>num;
    if (palindrome(num))
        std::cout << num << " is a palindrome." << std::endl;
    else
        std::cout << num << " is not a palindrome." << std::endl;
    return 0;
}  */
/* #include<iostream>
int reverseNumber(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    return rev;
}

int main()
{
  int x=12345;
  std::cout<<reverseNumber(x);

} */
/* #include<iostream>
int fibonacci(int n)
{ 
  if(n<=1)
  return n;
  return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{
   int index;

    std::cout << "Enter index: ";
    std::cin >> index;

    std::cout << "Fibonacci value: " << fibonacci(index) <<std:: endl;
    return 0;
}   */
/*   #include <iostream>
void recursion(int n)
{
    if (n == 0)
        return;
    std::cout <<n << " ";
    recursion(n - 1);   
    //std::cout << n << " "<<std::endl;
}
int main()
{
    int n;
    std::cout<<"enter the value of n:";
    std::cin>>n;
    recursion(n);
    return 0;
}   */
/* #include<iostream>
int main()
{  
int x=10;
  int* p=&x;
  int** q=&p;
  int*** r=&q;
  **q=25;
  std::cout<<x<<std::endl;
  std::cout<<(***r)<<std::endl;
  std::cout<<*q<<std::endl; 
  return 0;
}   */