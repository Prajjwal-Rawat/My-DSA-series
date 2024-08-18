#include <iostream>
#include <vector>
using namespace std;


// -------------Insertion sort-----------------------

void insertionSort(int n, vector<int> &arr){
    int i = 1;
    while(i < n){
        int temp = arr[i];
        int j = i - 1;

        while(j >= 0){
           if(arr[j] > temp){
               arr[j+1] = arr[j];
           }else{
               break;
           }
           j--;
        }
       arr[j+1] = temp;
       i++;
    }
}


int main(){
     vector<int> arr = {3,5,8,6,7,1,0};
     int size = arr.size();
     insertionSort(size,arr);
     for (int i = 0; i < size; i++)
     {
        cout<<arr[i]<<" ";
     }
     
}