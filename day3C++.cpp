#include<iostream>
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
}
