#include <iostream>
using namespace std;

//  -----------------                 Quick-Select         -----------------------

//  So basically quick select is similar to the quick sort but it doesn't sort the array  
// This quick - Select is used to find the Kth smallest ya largest element 
//  So basically in this we do partition of the array into two parts by the help of pivot // mostly pivot is the last element in this algo 
//  then base on pivot elements are distributed left part of pivot is smaller then pivot and right part of pivot is greater then pivot 


// --------------------------------------         Question          ----------------------------------
// --------------------------------------          Kth smallest     ----------------------------------


// Given an array arr[] and an integer k where k is smaller than the size of the array, the task is to find the kth smallest element in the given array. It is given that all array elements are distinct.

// Note:-  l and r denotes the starting and ending index of the array.


// ----------------------------------------           Answer          ----------------------------------

int partition(int arr[], int l, int r){
   int i = l, j = l;
   int pivot = arr[r];

  while(i < r){
     if(arr[i] > pivot){
       i++;
     }else{
       swap(arr[i], arr[j]);
       i++;
       j++;
     }
  }
  swap(arr[r], arr[j]);
  return j;
}


int quickSelect(int *arr, int l, int r, int k){
   int pivotIndex = partition(arr, l, r);
   if(k == pivotIndex){
     return arr[pivotIndex];
   }
  if(k < pivotIndex){
    return quickSelect(arr, l, pivotIndex - 1, k);
  }else{
    return quickSelect(arr, pivotIndex + 1, r, k);
  }
  
}


int kthsmallest(int arr[], int l, int r, int k){
    int ans =  quickSelect(arr, l, r, k-1);            // so idhr k-1 isliye kia hai kuki hume kth smallest nikalna hai 
    return ans;                                        // agr mujhe kth largest bola hota to mai (arr length - k) krta kuki mujhe kth largest nikalna tha jo ki khi piche hi hoga isliye 
}


int main(){
    int arr[6] = {7,10,4,3,20,15};
    int l = 0;
    int r = 5;
    int k = 3;
   int result =  kthsmallest(arr, l , r, k);
  cout<<result;
}