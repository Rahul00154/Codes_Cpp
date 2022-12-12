#include <bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

  //conntructor to set value
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

void print(Node* &head){
   Node* temp = head;
   while(temp!=NULL){
      cout<<temp->data << " ";
      temp = temp->next; 
   }
   cout<<endl;
}


int main(){

  Node* node1 = new Node(10);

  Node* head = node1;
  Node* tail = NULL;

  print(head);

  insertAtStart(head,30);
  print(head);
  insertAtStart(head,40);
  print(head);




return 0;
}