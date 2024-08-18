#include <iostream>
using namespace std;

//  -----------------------------            Binary search questions by recursion          --------------------------------


// kya ho rha hoga isme kese call ho rhi hongi dekhte hai 

// void print(int arr[],int start, int end){
//     for (int i = start; i <=end; i++)
//     {
//         cout<<arr[i]<<" ";
//     }cout<<endl;
    
// }


// bool findElement(int arr[], int start, int end, int key){

//     print(arr,start, end);                         //by this call we are checking how is the flow going

//       if (start > end)                 // base case
//       {
//          return false;
//       }

//       int mid =  (start + end)/2;

//       if (arr[mid] == key)
//       {
//         cout<<"The key is present in the index of "<<mid<<endl;
//         return true;
//       }
//       if (arr[mid] < key)
//       {
//           return findElement(arr, mid + 1, end, key);
//       }else{
//           return findElement(arr, start, mid - 1, key);
//       }     
// }

// int main(){
//     int arr[10] = {2,4,5,6,8,9,10,14,20,24};
//     int key = 29;

//     int ans = findElement(arr, 0 , 9, key);          // 0 mtlv kha se start krna hai 9 mtlv kha end krna hai 
//     if (ans)
//     {
//      cout<<"Yes your key is present "<<endl;
//     }else{
//      cout<<"No your key not present in the array "<<endl;
//     }
// }




// --------------------------------           Question 2               ----------------------------------

// ---------------      first and last position of an element in sorted array       ------------------
// example -->   0,0,1,1,2,2,2,2;             key = 2  
//     output -> first and last occurence of 2 is   4,7


// -----------------------------------            Answer            ------------------------------


// int secondOccurence(int *arr, int s, int e, int key){
//    if (s > e)
//    {
//       return -1;
//    }
   
//    int mid = (s+e)/2;

//    if (arr[mid] == key)
//    {
//        if (mid == e || arr[mid + 1] != key)
//        {
//            return mid;
//        }else{
//          return secondOccurence(arr, mid + 1, e, key);
//        }
//    }else if (arr[mid] < key)
//    {
//        return secondOccurence(arr, mid + 1, e, key);
//    }else{
//     return secondOccurence(arr, s, mid -1, key);
//    }
   
   
// }

// int firstOccurence(int *arr, int s, int e, int key){

//     if (s > e)
//     {
//         return -1;
//     }
    
//     int mid = (s+e)/2;

//     if (arr[mid] == key)
//     {
//         if (mid == s || arr[mid - 1] != key)
//         {
//             return mid;
//         }else{
//             return firstOccurence(arr, s, mid - 1, key);
//         }
        
//     }else if (arr[mid] < key)
//     {
//       return firstOccurence(arr, mid + 1, e, key);
//     }else{
//       return firstOccurence(arr, s, mid - 1, key);
//     }
    
// }

// int main(){
//     int arr[10] = {0, 0, 1, 1, 1, 2, 2, 2, 3, 3 };
//     int key  = 2;
//     int firstOccur = firstOccurence(arr, 0, 9, key);
//     int secondOccur = secondOccurence(arr, 0, 9, key);
//     cout<<"first position of occurence of the 2 is "<<firstOccur<<endl;
//     cout<<"Second position of occurence of the 2 is "<<secondOccur<<endl;
//     cout<<"Total number of occurence is "<<(secondOccur - firstOccur) + 1 <<endl;
// }




// ------------------------------------           Question 3              -----------------------------------

//  Square root of a number if it is not a perfect square root then return floor value by recursion



int squareRoot(int s, int e, int value) {
  if (s > e) {
    return e; // Base case: if start > end, return the end value           
  }
  int mid = s + (e - s) / 2;
  int square = mid * mid;
  if (square == value) {
    return mid; // Found perfect square
  } else if (square < value) {
    return squareRoot(mid + 1, e, value); // Search in the right half
  } else {
    return squareRoot(s, mid - 1, value); // Search in the left half
  }
}
int main() {
  int n;
  cout << "Enter the value " << endl;
  cin >> n;
  cout << "Square root of " << n << " is " << squareRoot(0, n, n) << endl;
  return 0;
}