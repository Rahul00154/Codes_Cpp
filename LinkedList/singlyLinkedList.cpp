#include<bits/stdc++.h>
using namespace std;

class Node{
  
  public:
  int data;
  Node* next;
  
  //Constructor to set value
  Node(int data){
    this->data = data;
    this->next = NULL;
  }
  
  ~Node(){
    int value = this->data;
    //memory free
    if(this->next!=NULL){
      delete next;
      this->next = NULL;
    }
   cout<< "Memory is free for node With Data" << value <<endl;
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
  
  //tail ke next node ko temp ke node pe pointkrwa do
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

void insertAtPosition(Node* &tail,Node* &head,int position,int d){
   
   
   //Function To Insert Node at Position 1
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
   // Insert at last position
   if (temp->next == NULL){
    insertAtTail(tail, d);
    return;
   }

   //creating a node for d
   Node* nodeToInsert = new Node(d);

   nodeToInsert->next = temp->next;
   
   temp->next = nodeToInsert;

}

void deletion(int position,Node* &head){
    
    if(position==1){
      Node* temp = head;
      head = head->next;
      //Memory Free start node
      temp->next = NULL;
      delete temp;
    }
    else{
      Node* curr = head;
      Node* prev = NULL;
    
      int cnt = 1;
      while(cnt<position){
        prev = curr;
        curr = curr->next;
        cnt++;
      }
      prev->next = curr->next;
      curr->next = NULL;
      delete curr;
    }
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

    insertAtPosition(tail,head,4,33);
    print(head);

    deletion(4,head);
    print(head);

    cout << "Head " << head->data <<endl;
    cout << "Tail: " << tail->data <<endl;

  return 0;
}