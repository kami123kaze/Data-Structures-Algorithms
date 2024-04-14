#include <iostream>


void Answer1(int x,int cnt){
if(cnt == x)return;
std :: cout << "Name" << std::endl;
cnt++;  
 
Answer1(x,cnt);
}
void Answer2(int x){
if (x ==0)return;
int sum = sum + x;
}
void PrintName(){
  int x;
    std:: cout << "Enter the amount of times name should be printed "; 
    std:: cin >> x;
  int cnt =0;
  Answer1(x,cnt);
}
void sum(){
  
  int x;
  std:: cout << "Enter number : ";
  std::cin >> x;
  
  Answer2(x-1);

}

int main(){
   //? print name 'x' amount of times
   PrintName();
   //? Sum of N numbers
   sum();
}
 