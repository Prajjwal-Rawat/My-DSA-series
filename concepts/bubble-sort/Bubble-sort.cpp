#include <iostream>
#include <vector>
using namespace std;

   // -----------------Bubble sort -------------------


void bubblesort(vector<int> &arr, int n){
     
     for (int i = 0; i < n-1; i++)
     {
        bool isSwaptrue = false;
        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                isSwaptrue = true;
            }
        }
        if (isSwaptrue == false)    // agr koi swap nhi hue mtlv array sorted hai phli se to hum loop se bhr aa jaenge 
        {
            break;
        }
        
     }
     
}

int main(){
   vector<int> arr = {6,2,8,4,10};
   int n = arr.size();
   bubblesort(arr, n);
   for (int i = 0; i < n; i++)
   {
       cout<<arr[i]<<" ";
   }
   

}