#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr, int size){

    for (int i = 0; i < size -1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

   // time complexity =  o(n^2)
int main(){
    vector<int> arr = {3,5,2,9,10,1};
    int size = arr.size();
    selectionSort(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}