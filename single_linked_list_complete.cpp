#include <iostream>
using namespace std;

struct Node{
   int data;
   struct Node *next;
};

void insertAtBeginning(){

};

void insertAtEnd(){

};

void insertAtPosition(){

}

void deleteAtBeginning(){

}

void deleteAtEnd(){

}

void deleteAtPosition(){

}

void display(){

}

int main()
{
   int flag = 1, element, choice;

   while (flag)
   {

      cout << "1. Insert Element at Beginning"<< "\n"<< "2. Insert Element at End"<< "\n"<<"3. Insert at Position"<<"\n"<<"4. Delete At Beginning"<<"\n"<<"5. Delete At End"<<"\n"<<"6. Delete At Position"<<"\n"<<"7. Display"<<"\n"<<"8. Exit";
      cout<<"\n Enter your choice : ";
      cin >> choice;
      switch (choice)
      {
      case 1:
         cout<<"Enter the element : ";
         cin>>element;
         insertAtBeginning(element);
         break;
      case 2:
         insertAtEnd();
         break;
      case 3:
         insertAtPosition();
         break;
      case 4:
         deleteAtBeginning();
         break;
      case 5:
         deleteAtEnd();
         break;
      case 6:
         deleteAtPosition();
         break;
      case 7:
         display();
         break;
      case 8: 
         flag = 0;
         break;
      default:
         cout << "Enter a valid choice" << endl;
         break;
      }
   }
   return 0;
}