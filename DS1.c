#include<stdio.h>
#include<stdlib.h>
struct Node
{
  int data;
  struct Node *next;
};
struct Node* head=NULL;
struct Node* create(int value)
{
struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=value;
newNode->next=NULL;
}
void insertBegin(int data)
{
struct Node* newNode=create(data);
newNode->next=head;
head=newNode;
//printf("%d",newNode->data);
}
void insertEnd(int data)
{
 
  struct Node* newNode=create(data);
  if(head==NULL)
  {
    head=newNode;
    return;
  }
   struct Node *temp=head;
  while(temp->next!=NULL)
  {
    temp=temp->next;
  }
  temp->next=newNode;
}
void insertpos(int pos,int data)
{
 struct Node* temp=head;
 for(int i=0;i<pos-1;i++)
 {
   temp=temp->next;
 }
 struct Node* newNode=create(data);
 newNode->next=temp->next;
 temp->next=newNode;
}
void deleteFirst()
{
  struct Node* temp=head;
  head=temp->next;
  free(temp);
}
void deleteLast()
{
  struct Node* temp=head;
  while(temp->next->next!=NULL)
  {
    temp=temp->next;
  }
  free(temp->next);
  temp->next=NULL;
}
void display()
{
  struct Node *temp=head;
  while(temp!=NULL)
  {
    printf("%d",temp->data);
    temp=temp->next;
  }
}
void deletePos(int pos)
{
  struct Node* temp=head;
  for(int i=0;i<pos-1;i++)
  {
    temp=temp->next;
  }
  struct Node* nodeDelete=temp->next;
  temp->next=nodeDelete->next;
  free(nodeDelete);
}
void search(int data)
{
     
}

int main()
{    
     //create(5);
     insertBegin(6);
     insertBegin(8);
     insertEnd(9);
     insertEnd(10);
     insertMid(2,4);
    //deleteFirst();
    // deleteLast();
    deletePos(1);
     display();
     return 0;
}
