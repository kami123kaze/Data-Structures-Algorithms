#include <iostream>

void SquarePattern(){
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
void PyramidPattern(){
  int x;
  std:: cout << "enter the number of Rows for the pyramid :";
  std:: cin >> x;

for(int i=0;i<x;i++){
  //spaces
  for(int j=0;j<x-i-1;j++){std::cout << " ";}
  //characters
  for(int c=0;c<2*i+1;c++){std::cout << "*";}
  //spaces
  for(int j=0;j<x-i-1;j++){std::cout << " ";}
  std:: cout << std:: endl;
}
}
void InvertedPyramid(){
  int x;
  std:: cout << "enter the number of Rows for the pyramid :";
  std:: cin >> x;

  for(int i=0;i<x;i++){
  //spaces
  for(int j=0;j<=i;j++){std::cout << " ";}
  //characters
  for(int c=0;c<2*x-1-2*i;c++){std::cout << "*";}
  //spaces
  for(int j=0;j<=i;j++){std::cout << " ";}
  std:: cout << std:: endl;
}
}
void HourGlass(){
  int x;
  std:: cout << "enter the number of Rows for the Hour-Glass :";
  std:: cin >> x;

  for(int i=0;i<x;i++){
  //spaces
  for(int j=0;j<=i;j++){std::cout << " ";}
  //characters
  for(int c=0;c<2*x-1-2*i;c++){std::cout << "*";}
  //spaces
  for(int j=0;j<=i;j++){std::cout << " ";}
  std:: cout << std:: endl;
}
for(int i=0;i<x;i++){
  //spaces
  for(int j=0;j<x-i-1;j++){std::cout << " ";}
  //characters
  for(int c=0;c<2*i+1;c++){std::cout << "*";}
  //spaces
  for(int j=0;j<x-i-1;j++){std::cout << " ";}
  std:: cout << std:: endl;
}
}
int main(){
// SquarePattern();
// PyramidPattern();
// InvertedPyramid();
// HourGlass();
}