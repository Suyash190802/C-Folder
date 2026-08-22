/* #include <iostream>
int product(int a, int b)
{
    return a * b;
}
int main()
{
    int num1 = 10;
    int num2 = 20;
    int result = product(num1, num2);
    std::cout << "Product: " << result << std::endl;

    return 0;
} */






/*#include<iostream>
class Swapping
{
 public: void swap(int a, int b)
  {
    std::cout<<"before swap:"<<" "<<a<<" "<<b<<std::endl;;
    a=a+b;
    b=a-b;
    a=a-b;
    std::cout<<"after swap:";
    std::cout<<a<<"";
    std::cout<<b;
  }
};
int main()
{
  Swapping s;
  s.swap(20, 30);
  return 0;
} */
#include<iostream>
int sum(int a,int b)
{
    return a+b;
}
int sum(int a,int b, int c)
{
    return a+b+c;
} 
int main()
{
  std::cout<<sum(10,20)<<std::endl;
  std::cout<<sum(10,20,30);
  return 0;
} 