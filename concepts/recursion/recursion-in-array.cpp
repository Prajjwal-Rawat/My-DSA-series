#include <iostream>
using namespace std;

//------------------------------ is array is sorted or not by recursion method --------------------------------------



// bool isSorted(int *arr, int size){
//    if (size == 0 || size == 1)                    // base case 
//    {
//       return true;
//    }

//    if (arr[0] > arr[1])
//    {
//       return false;
//    }
//    else{
//      bool remainingArr = isSorted(arr + 1, size - 1);               // aaray ka address age bdh gya mtlv ek element ht gya and second element 0th index mai aa gya ab 
//      return remainingArr;
//    }

// }


// int arraySum(int *arr, int size){
//        if (size == 0)
//        {
//          return 0;
//        }

//        if (size == 1)
//        {
//           return arr[0];
//        }

//        int  ans = arraySum(arr + 1, size - 1);
//        int sum = arr[0] + ans;
//        return sum;
           
// }



// int main(){
//     int n;
//     cout<<"Enter the array size "<<endl;
//     cin>>n;
//     int *arr = new int[n];

//     cout<<"Enter the elements of the array "<<endl;

//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }

//     cout<<"Your array is "<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     cout<<endl;

//     int ans =  isSorted(arr, n);

//     if (ans)
//     {
//         cout<<"Your array is sorted"<<endl;
//     }else{
//         cout<<"Your array is not sorted"<<endl;
//     }

//     cout<<"The sum of the array is "<<arraySum(arr, n);
    
//     // deallocating memory
//     delete[] arr;
// }




//-----------------------------------             Question 2           ---------------------------------

//  ------------------------          Search key in array by recursion       ---------------------------


bool searchKey(int arr[], int size, int key, int count){
    count++;
    if (size == 0)
    {
        return false;    
    }
    
    if (arr[0] == key)
    {
        cout<<"key is present in "<<count<<" index of the array"<<endl;
        return true;
    }

    bool ans = searchKey(arr + 1, size -1, key, count);
    return ans;
    
}

int main(){
    int arr[5] = {2,3,1,5,6};
    int key = 1;
    int count = -1;          // to check the index of the key 
    bool ans = searchKey(arr, 5, key,count);

    if (ans)
    {
    cout<<"Yes your key is present "<<endl;
    }else{
        cout<<"No your key is not present "<<endl;
    }
    
}