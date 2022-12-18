#include <bits/stdc++.h>
using namespace std;

class Node{
   public:
   int data;
   Node* prev;
   Node* next;

   //Constructor
   Node(int d){
      this->data = d;
      this->prev = NULL;
      this->next = NULL;
   }
   /*~Node(){
      int val = this->data;
      if(next!=NULL){
         delete next;
         next = NULL;
      }
      
   }
*/
};

int getLength(Node* head){
   int len = 0;
   Node *temp = head;

   while (temp != NULL){
      len++;
      temp = temp->next;
   }
   
   return len;
}

void insertAtHead(Node* &tail,Node* &head, int d){
   
   //empty list
   if(head==NULL){
      Node* temp = new Node(d);
      head = temp;
      tail = temp;
   }
   else{
   Node* temp = new Node(d);
   temp ->next = head;
   head ->prev = temp;
   head = temp;
   }
}

void insertAtTail(Node* &tail,Node* &head,int d)
{
   if (tail == NULL){
   Node *temp = new Node(d);
   tail = temp;
   head = temp;
   }
   else{
   Node* temp = new Node(d);
   tail->next = temp;
   temp->prev = tail;
   tail = temp;
   }
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){

   // Function To Insert Node at Position 1
   if (position == 1){
      insertAtHead(tail,head, d);
      return;
   }

   Node *temp = head;
   int count = 1;

   while (count < position - 1){
      temp = temp->next;
      count++;
   }
   // Insert at last position
   if (temp->next == NULL){
      insertAtTail(tail,head, d);
      return;
   }

   // creating a node for d
   Node *nodeToInsert = new Node(d);

   nodeToInsert->next = temp->next;

   temp->next->prev = nodeToInsert;
   temp->next = nodeToInsert;
   nodeToInsert->prev = temp;

}

void deleteNode(int position,Node* &head){
    if(position==1){
      Node* temp = head;
      temp->next->prev = NULL;
      head = temp->next;
      temp->next = NULL;
      delete temp;
    }
    else{
       //deleting any middle node or last node
       Node* curr = head;
       Node* prev = NULL;
       
       int count = 1;
       while(count<position){
         prev = curr;
         curr = curr->next;
         count++; 
       }
       curr->prev = NULL;
       prev->next = curr->next;
       curr->next = NULL;
       
       delete curr;
    }
}

void print(Node* head){
   Node* temp = head;
   while(temp!=NULL){
     cout<<temp->data<<" ";
     temp = temp->next;
   }
   cout<<endl;
}


int main(){
   
   Node* node1= new Node(10);
   Node* head = node1;
   Node* tail = node1;

   print(head);
   //cout << getLength(head) << endl;
   insertAtHead(tail,head,11);
   print(head);

   insertAtHead(tail,head, 20);
   print(head);

   insertAtHead(tail,head, 19);
   print(head);

   insertAtTail(tail,head,25);
   print(head);

   insertAtPosition(tail,head,1,101);
   print(head);
   deleteNode(5,head);
   print(head);
   deleteNode(4,head);
   print(head);

   return 0;
}