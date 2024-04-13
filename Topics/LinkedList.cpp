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
   //destructor
   ~node(){
     int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
    std::cout << std::endl << "meomory is free for node with data " << value << std::endl;
   }
};


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

void DeleteNode(node* &head,node* &tail,int posi){
if(posi == 1){
  node*temp = head;
  head = head -> next;
  temp -> next = NULL;
  delete temp;
  return;
}
int cnt =0;
node* prev =NULL;
node* curr = head;
while(cnt<posi){
prev = curr;
curr = curr -> next;
cnt++;
}
if(curr-> next = NULL){
node* temp = tail;
tail = prev;
temp -> next = NULL;
delete temp;
return;
}
 else{
  prev -> next = curr -> next;
  curr -> next = NULL;
  delete curr;
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
  DeleteNode(head,tail,3);
  Traversal(head,tail);
}