#include <iostream>

int BinarySearch(int arr[],int target,int size){
  int left=0;
  int right = size-1;
  int mid = left + (left-right)/2;

  while(left<=right){
    if(arr[mid] == target ) {return target;}
   
  
  if (arr[mid] < target){
    left = mid +1 ;
  }
  else {
    right = mid -1;
  }
  mid = left + (left-right)/2;
}
return -1;
}




int main(){
  //? Binary Search Algorithm is a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(log N). 

  //! suppose we are given a sorted array 'arr' and we have to find an element inside with O(Log N) time complexity.

  int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
  int target = 10;
  int size = 15;
  std::cout <<" The target is present at : " << BinarySearch(arr,target,size) << " position";
}