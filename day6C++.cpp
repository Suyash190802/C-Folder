#include<iostream>
class StackOnly
{
   private:
      void* operator new(size_t size);
   public:
       StackOnly()
       {
        std::cout<<"Created on stack only";
       }   
};
int main()
{
  StackOnly s;
  //StackOnly *b=new StackOnly();
  return 0;
}

/* #include <iostream>
int main()
{
    int internalMarks = 80;
    int externalMarks = 70;
    auto totalMarks = [](int internal, int external)
    {
        return internal + external;
    };
    int result = totalMarks(internalMarks, externalMarks);
    std::cout <<"Total marks: "<< result << std::endl;
    return 0;
} */