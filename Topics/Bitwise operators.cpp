#include<iostream>

void BitwiseOperators(int a,int b){
  std:: cout << "let a =4 and b = 6" << std::endl;
  std:: cout << "a&b :- " <<(a&b) <<std::endl;
  std:: cout << "a|b :- " <<(a|b) <<std::endl;
  std:: cout << "~a :- " << ~a <<std::endl;
  std:: cout << "a^b :- " <<(a^b) <<std::endl;
}

int main(){
  int a =4;
  int b =6;

  BitwiseOperators(a,b);
}