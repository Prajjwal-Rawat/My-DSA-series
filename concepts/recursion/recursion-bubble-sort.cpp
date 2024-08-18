#include <iostream>
using namespace std;

// ---------------------------------              Bubble sort by the recursion              --------------------------------

void sortBubble(int arr[], int n){

    if (n == 0 || n == 1)             // okie so base case ye hi ki agr array 0 hai ya array mai 1 hi element hai to vo phle se sort hai
    {
        return ;
    }
    
    for (int i = 0; i < n-1; i++)                    // n-1 ke liye isliye chalaya hai kuki mujhe last wale or second last wale elemnt tk hi compare krna hai 
    {
        if (arr[i] > arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }

    }                                                // ek condition humne smhal li idhr ab baki recursion dekh lega
    
    sortBubble(arr, n-1);
    
}

int main(){
    int arr[7] = {2,5,1,7,6,8,4};
    
    sortBubble(arr,7);
    for (int  i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}