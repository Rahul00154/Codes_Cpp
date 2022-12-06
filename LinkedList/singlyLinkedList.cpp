#include<bits/stdc++.h>
using namespace std;

class Node{
  
  public:
  int data;
  Node* next;
  
  //CONSTRUCTOR
  Node(int data){
    this->data = data;
    this->next = NULL;
  }
};

void insertAtHead(Node* &head,int d){
  //new node create
  Node* temp = new Node(d);
  temp->next = head;
  head = temp;
}

void insertAtTail(Node* &tail, int d){
  //create new node
  Node *temp = new Node(d);
  
  //tail ke next node ko temp ke node pe poinkrwa do
  tail->next = temp;
  tail = tail->next;
}

void print(Node* &head){
  
  Node* temp = head;

  while(temp!=NULL){
     cout<<temp->data <<" ";
     temp = temp->next;
  }
  cout<<endl;

}

void insertAtPosition(Node* &head,int position,int d){
   
   //insert at start
   if(position == 1){
     insertAtHead(head,d);
     return;
   }
   
   Node* temp = head;
   int count = 1;

   while(count<position-1){
    temp = temp->next;
    count++;
   }

   //creating a node for d
   Node* nodeToInsert = new Node(d);

   nodeToInsert->next = temp->next;
   
   temp->next = nodeToInsert;

}


int main(){

    Node* node1 = new Node(10);

    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;

    Node* head = node1;
    Node* tail = node1;

    print(head);
    insertAtTail(tail,12);

    print(head);
    insertAtTail(tail,15);
    print(head);

    insertAtPosition(head,1,22);
    print(head);

  return 0;
}