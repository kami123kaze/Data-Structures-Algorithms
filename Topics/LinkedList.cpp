#include <iostream>

class node{
   public:
   int data;
   node* next;

   //constructor
   node(int data){
    this -> data = data;
    this -> next = NULL;
   }
};

// Function for traversal
void Traversal(node* &head,node* &tail){
  using namespace std;
  node* temp = head;
  int cnt = 0;
  cout << "The Linked List is as follows : ";
  while(temp){
  cout << temp -> data << " ";
  temp = temp -> next;
  cnt++;
  }
  cout << endl << "Head : " << head -> data;
  cout << endl << "Tail : " << tail -> data;
  cout << endl << "Length of Linked List : " << cnt;
}

void InsertAtHead(node* &head,int d){
  node* temp = new node(d);
  temp -> next = head;
  head = temp;
}

void InsertAtTail(node* &tail,int d){
  node* temp = new node(d);
  tail -> next = temp;
  tail = tail -> next;
}

void InsertAtPosition(node* &head,node* &tail,int posi,int d){
  
  if(posi == 1){
    InsertAtHead(head,d);
    return;
  }
  node* temp = head;
  int cnt = 1;
  while(cnt < posi-1){
  temp = temp -> next;
  cnt++; 
  } 
  if(!temp ->next){
    InsertAtTail(tail,d);
  }
  else{
    node* ToInsert = new node(d);
    ToInsert -> next = temp -> next;
    temp -> next = ToInsert;
  }
}

int main(){
  node* node1 = new node(10);
  node* head = node1;
  node* tail = node1;
  InsertAtHead(head,5);
  InsertAtTail(tail,20);
  InsertAtPosition(head,tail,4,1000);
  Traversal(head,tail);    
}