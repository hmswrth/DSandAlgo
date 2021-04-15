#include <iostream>
using namespace std;

//1)crateing the structure node
struct Node
{
   int data;
   struct Node *next;
};
//displays all the elements in the linked list
void display(struct Node *n)
{
   while (n != NULL)
   {
      cout << n->data << endl;
      n = n->next;
   }
};

void insertAfter(struct Node *prev_node, int newData)
{

   //check if previous node is the last node in the linked lisr
   if (prev_node == NULL)
      cout << "Previous node cannot be null" << endl;
   else
   {
      //create a new struct for the new node
      struct Node *new_node;
      new_node = (struct Node *)malloc(sizeof(struct Node));

      //assign data to the new node
      new_node->data = newData;

      //logic for pointers
      new_node->next = prev_node->next;
      prev_node->next = new_node;
   }
}

int main()
{

   //2)allocate structure in memory
   struct Node *head = NULL;
   struct Node *second = NULL;
   struct Node *first = NULL;

   head = (struct Node *)malloc(sizeof(struct Node));
   first = (struct Node *)malloc(sizeof(struct Node));
   second = (struct Node *)malloc(sizeof(struct Node));

   //3)Assign values to the data
   head->data = 1;
   head->next = first;

   first->data = 2;
   first->next = second;

   second->data = 3;
   second->next = NULL;

   //function call to display the nodes o the linked list
   // display(head);

   //function call to insert an element into the linked list
   insertAfter(head->next, 5);

   display(head);

   return 0;
}
