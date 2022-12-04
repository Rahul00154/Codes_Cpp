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

  return 0;
}