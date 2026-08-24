#include <iostream>
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
}