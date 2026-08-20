#include<stdio.h>
int stack[5];
int top=-1;
void push(int value)
{
  top++;
  stack[top]=value;
  printf("element inserted:%d\n",stack[top]);
}
void pop()
{
  int temp = stack[top];
  top--;
  printf("element deleted: %d",temp);
}
void ispeek()
{
   printf("top element:%d\n",stack[top]);
}
int main()
{ 
  int op;
  printf("Enter your choice(1-3):");
  scanf("%d",&op);
  switch (op)
  {
  case 1:
            push(7);
            
            break;
   case 2:
            pop();
            break;
    case 3:
            ispeek();
            break;                 
  
  default:
    break;
  }
  
  return 0;

}