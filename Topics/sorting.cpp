

#include <iostream>


void SelectionSort(int arr[],int size){
  //! Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and moving it to the sorted portion of the list. 
  for(int i=0;i<size -1;i++){
    int min = i;
    for(int j=i+1;j<size;j++){
    if (arr[j] < arr[min]){
      min = j;
    }
    std::swap(arr[min],arr[i]);
    }
  }
    std:: cout << "The sorted array is ";
  for(int i=0;i<size;i++){
    std:: cout << arr[i] << " ";
  }
}
void BubbleSort(int arr[],int size){
  //!Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.
  bool swapped = false;
  for(int i=0;i<size-1;i++){
    for(int j=0;j<size-1-i;j++){
      if (arr[j] > arr[j+1]){
        std::swap (arr[j],arr[j+1]);
        swapped = true;
      }
      if (swapped == false) break;

    }
  }


  std:: cout << "The sorted array is ";
  for(int i=0;i<size;i++){
    std:: cout << arr[i] << " ";
}
}


void InsertionSort(int arr[],int size){
//! Insertion sort is a simple sorting algorithm that works by iteratively inserting each element of an unsorted list into its correct position in a sorted portion of the list. It is a stable sorting algorithm, meaning that elements with equal values maintain their relative order in the sorted output.

  for(int i=0;i<size;i++){
    for(int j=size-1;j<0;j++){
      if (arr[j] > arr[j-1]){
        std:: swap(arr[j],arr[j-1]);
      }
    }
  }
  std:: cout << "The sorted array is ";
  for(int i=0;i<size;i++){
    std:: cout << arr[i] << " ";
}

 }

int main(){
  int arr[] = {3,2,1,5,6,10,7,8};
  int size = 7;
  InsertionSort(arr,size);
}