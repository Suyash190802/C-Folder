#include<stdio.h>
#include<stdlib.h>
struct Node
{
  int data;
  struct Node* left;
  struct Node* Right;
};
struct Node* createNode(int x)
{
  struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
  newNode->data=x;
  newNode->left=NULL;
  newNode->Right=NULL;
  //printf("%d\n",newNode->data);
  return newNode;
}
void insertNode(struct Node* root,int x)
{
  if(x<root->data)
  {
    if(root->left!=NULL)
    {
      insertNode(root->left,x);
    }
    else
    {
      root->left=createNode(x);
    }
  }
  else
  {
    if(root->Right!=NULL)
    {
      insertNode(root->Right,x);
    }
    else
    {
      root->Right=createNode(x);
    }
  }
}
void searchNode(struct Node* root, int x)
{
    if(root==NULL)
    {
        printf("\nNot found\n");
        return ;
    }

    if(root->data==x)
    {
       printf("\nfound\n");
       return ;
       
    }
     if(x < root->data)
    {
        searchNode(root->left, x);
    }
    else
    {
        searchNode(root->Right, x);
    }
}
struct Node* deletion(struct Node* root, int ele)
{
    if(root == NULL)
    {
        printf("Nothing to delete\n");
        return NULL;
    }
    if(ele < root->data)
    {
        root->left = deletion(root->left, ele);
    }
    else if(ele > root->data)
    {
        root->Right = deletion(root->Right, ele);
    }
    else
    {
        if(root->left == NULL && root->Right == NULL)
        {
            free(root);
            return NULL;
        }     
        if(root->left == NULL)
        {
            struct Node* temp = root->Right;
            free(root);
            return temp;
        }
        if(root->Right == NULL)
        {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }  
        struct Node* temp = root->Right;
        while(temp->left != NULL)
        {
            temp = temp->left;
        }
        root->data = temp->data;
        root->Right = deletion(root->Right, temp->data);
    }
    return root;
}
void inorder(struct Node* root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d\t", root->data);
        inorder(root->Right);
    }
}
void preorder(struct Node* root)
{
   if(root != NULL)
   {
    printf("%d\t",root->data);
    preorder(root->left);
    preorder(root->Right);
   }
}
void postorder(struct Node* root)
{
   if(root != NULL)
   {
    postorder(root->left);
    postorder(root->Right);
    printf("%d\t",root->data);
   }
}
void levelorder(struct Node* root)
{ int rear=-1,front=-1;
  if(root != NULL)
  {
    struct Node* queue[50];
    queue[++rear]==root;
    front=0;
    while(front <= rear)
        {
            struct Node* temp = queue[front++];
            printf("%d ", temp->data);
            if(temp->left != NULL)
            {
                queue[++rear] = temp->left;
            }
            if(temp->Right != NULL)
            {
                queue[++rear] = temp->Right;
            }
        }
    }
  
}
int height(struct Node* root)
{
  if(root == NULL)
        return -1;
  int leftheight= height(root->left);
  int rightheight= height(root->Right);
     if(leftheight > rightheight)
        return 1 + leftheight;
    else
        return 1 + rightheight;
}
int main()
{

  struct Node* root=createNode(5);
  insertNode(root,3);
  insertNode(root,7);
  insertNode(root,1);
  insertNode(root,4);
  searchNode(root,4);
  //deletion(root,7);
  //inorder(root);
 // preorder(root);
  //postorder(root);
  printf("Height = %d\n", height(root));
  return 0;
}