#include <iostream>
#include <cmath>

void Question1(){
  int n;
  std::cout << "Input the number to be reversed :";
  std::cin >> n;
  int ReverseNumber =0;

  while(n > 0){
    int LastDigit = n%10;
    ReverseNumber = (ReverseNumber*10) + LastDigit;
    n = n/10;
  }
  std::cout << ReverseNumber;
}
void Question2(){
  int n;
  std::cout << "Input the number to be checked :";
  std::cin >> n;
  int ReverseNumber =0;
  int duplicate = n;

  while(n > 0){
    int LastDigit = n%10;
    ReverseNumber = (ReverseNumber*10) + LastDigit;
    n = n/10;
  }
  if(duplicate == ReverseNumber){
    std:: cout << "The number is a palindrome";
  }
  else std:: cout << "The number is not a palindrome";
  
}
void Question3(){
  int n;
  std::cout << "Input the number to be checked :";
  std::cin >> n;
  int sum =0;
  int duplicate = n;

  while(n>0){
    int LastDigit = n%10;
    sum = sum + (LastDigit*LastDigit*LastDigit);
    n = n/10;
  }

  if(sum == duplicate){
    std::cout << "The number is an armstrong number";
  }
  else std::cout << "The number is not an armstrong number";
}
void Question4(){
  using namespace std ;
  int n;
  cout << "Write number to check for divisions :";
  cin >> n;
  //brute force
  cout << " Brute Force :";
  for(int i=1;i<=n;i++){
    if(n%i == 0){
      cout <<" " << i;
    }
  }
  //Optimal solution
cout << endl <<"Optimal Solution :";

for(int i=1;i<sqrt(n);i++){
  if(n%i==0){cout << " " << i;
  if(n/i!=i){cout <<" "<<n/i;}}
}
}


int main(){
  // Q1) reverse a given number.
  //Question1();

  // Q2) Check if the given number is a plaindrome.
  //Question2();

  //Q3) Check if the given number is an armstrong number.
  // Question3();

  //Q4) Print all divisions
  // Question4();
}