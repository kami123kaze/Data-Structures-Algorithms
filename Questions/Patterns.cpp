#include <iostream>

void Pattern1(){
  int x,y;
  std:: cout << "enter the number of Rows :";
  std:: cin >> x;
  std:: cout << "enter the number of Columns :";
  std:: cin >> y;

  for(int i=0;i<x;i++){
    for(int j=0;j<y;j++) {std:: cout << "*";}
    std::cout << std:: endl ;
  }
  
}
void Pattern2(){
  
}


int main(){
//Pattern1();
Pattern2();

}