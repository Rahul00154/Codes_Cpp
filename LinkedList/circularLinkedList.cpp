#include <bits/stdc++.h>
using namespace std;

class Node{
   public:
   int data;
   Node* next;

   Node(int d){
     this->data = d;
     this->next = NULL;
   }

   ~Node(){
      int val = this->data;
      if(this->next!=NULL){
        delete next;
        next =NULL;
      }

      cout<<"Memory is free for node with data "<<val <<endl;
   }
};

void insertNode(Node* &tail,int element,int d){
   
   //empty list
   if(tail==NULL){
     Node* new_Node = new Node(d);
     tail = new_Node;
     new_Node->next = new_Node;
   }
   else{
     //non-empty list
     Node* curr = tail;
     while(curr->data!=element){
      curr = curr->next;
     }
     //elemwnt found
     Node* temp = new Node(d);
     temp->next = curr->next;
     curr->next = temp;
   }
}

void deleteNode(Node* &tail,int value){
    //empty list
    if(tail==NULL){
      cout<<" List is empty," << endl;
    }
    else{
        //non-empty list
        Node* prev = tail;
        Node* curr = prev->next;
        while(curr->data!=value){
           prev = curr;
           curr = curr->next;
        }

        prev->next = curr->next;
        //1 Node linked list
        if(curr==prev){
          tail=NULL;
        }
        // >2 Node
        else if(tail==curr){
           tail=prev;
        }
        if(tail == curr){
          tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }

}

void print(Node* tail){
    Node* temp = tail;

    //empty list
    if(tail==NULL){
     cout << "List is empty" << endl;
     return;
    }

    do{
      cout<<tail->data <<" ";
      tail = tail->next;
    }while(tail!=temp);
     
    cout<<endl;
    
    

}

int main(){


   Node* tail = NULL;
   //Empty list me insert
   insertNode(tail,1,3);
   print(tail);
   
   insertNode(tail,3,5);
   print(tail);
   
   insertNode(tail,5,7);
   print(tail);

   insertNode(tail,7,9);
   print(tail);

   insertNode(tail,5,6);
   print(tail);

   insertNode(tail,3,4);
   print(tail);

   deleteNode(tail,3);
   print(tail);


return 0;
}