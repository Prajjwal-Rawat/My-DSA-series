#include<iostream>
using namespace std;

// Reversing an array

void Reversearray(int arr[],int size){

   int start = 0;
   int end = size-1;

   while (start<=end)
   {
      swap(arr[start],arr[end]);
      start++;
      end--;
   }
   

}

void printingarray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
       cout<<arr[i]<<",";
    }
    
}

int main(){
   
   int arr[6] = {1,2,3,4,5,6};
   int brr[5] = {10,20,30,40,-5};

   Reversearray(arr,6);
   Reversearray(brr,5);

   cout<<"Printing first array"<<endl;
   printingarray(arr,6);

   cout<<endl<<"printing second array"<<endl;
   printingarray(brr,5);


}