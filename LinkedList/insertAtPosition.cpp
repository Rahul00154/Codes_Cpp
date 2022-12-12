#include <bits/stdc++.h>
using namespace std;

class Node{
   public:
   int data;
   Node* next;

   Node(int x){
     this->data = x;
     this->next = NULL;
   }
};

void insertAtStart(Node* &head,int x){
   Node* temp = new Node(x);
   temp->next = head;
   head= temp;
   
}

void insertAtEnd(Node* &head,int x){
   Node* temp = head;
   Node* new_node = new Node(x);

   while(temp->next!=NULL){
      temp = temp->next;
   }
   temp->next = new_node;
}

void insertAtposition(Node* &head,int pos,int x){
   Node* temp = head;

   int count = 1;

   while(count<pos-1){
       temp = temp->next;
       count++;
   }
   Node *nodeToInsert = new Node(x);

   nodeToInsert->next = temp->next;

   temp->next = nodeToInsert;
}

void print(Node* &head){
   Node* temp = head;

   while(temp!=NULL){
      cout<< temp->data <<" ";
      temp = temp->next;
   }
   cout<< endl;
}

int main(){
  Node* node1 = new Node(10);

  Node* head = node1;
  Node* tail = NULL;

  print(head);

  insertAtStart(head, 30);
  print(head);
  insertAtStart(head, 40);
  print(head);

  insertAtposition(head,2,20);
  print(head);

  insertAtEnd(head,50);

  print(head);


return 0;
}