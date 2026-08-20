#include<iostream>
class product
{
 public: void swap(int a, int b)
  {
    std::cout<<"before swap:"<<a<<b<<std::endl;;
    a=a+b;
    b=a-b;
    a=a-b;
    std::cout<<"after swap:";
    std::cout<<a;
    std::cout<<b;
  }
};

int main()
{
  product p;
  p.swap(20, 30);
  return 0;
}
/* int sum(int a,int b)
{
    return a+b;
}
float sum(float a,float b)
{
    return a+b;
} */