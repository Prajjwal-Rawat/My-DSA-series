#include <iostream>
#include <vector>
using namespace std;



// Q ---->>> 1 
// Question ----->>> You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.



// Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.



// Note :
// 1. If ‘k’ is not present in the array, then the first and the last occurrence will be -1. 
// 2. 'arr' may contain duplicate elements.

// int firstOccurance(int arr[], int size, int key){

//     int startIndex = 0;
//     int endIndex = size - 1;
//     int ans = -1;             // -1 se isliye initialize kia hai taki agr koi key found nhi hui to -1 return ho ske

//     while (startIndex <= endIndex)
//     {
//         int midIndex = (startIndex + endIndex)/2;         // division ki presidence jada hoti hai isliye bracate lgae hai

//         if (key == arr[midIndex])
//         {
//             ans = midIndex;
//             endIndex = midIndex - 1;
//         }
//         else if (key > arr[midIndex])                        
//         {
//             startIndex = midIndex + 1;
//         }else{
//             endIndex = midIndex - 1;
//         }
//     }
//     return ans;
// }

// int secondOccurance(int arr[], int size, int key){

//     int startIndex = 0;
//     int endIndex = size - 1;
//     int ans = -1;

//     while (startIndex <= endIndex)
//     {
//         int midIndex = (startIndex + endIndex)/2;

//         if (key == arr[midIndex])
//         {
//             ans = midIndex;
//             startIndex = midIndex + 1;
//         }
//         else if (key > arr[midIndex])
//         {
//             startIndex = midIndex + 1;
//         }else{
//             endIndex = midIndex - 1;
//         }
//     }
//     return ans;
// }

// void totalNumberocc(int firstOccurrenceIndex,int lastOccurrenceIndex){
    
//     int totalnumber = (lastOccurrenceIndex - firstOccurrenceIndex) + 1;
//     cout<<"Total number of occurrence is "<<totalnumber<<endl;
// }


// int main(){
  
//   int oddarr[7] = {2,3,4,4,4,4,5};
//   int evenarr[8] = {2,2,2,2,2,2,3,4};

//   cout<<"first occurence of key 4 in oddarr is at index "<<firstOccurance(oddarr, 7, 4)<<endl;
//   cout<<"second occurence of key 4 in oddarr is at index "<<secondOccurance(oddarr, 7, 4)<<endl;
//   cout<<"first occurence of key 2 in Evenarr is at index "<<firstOccurance(evenarr, 8, 2)<<endl;
//   cout<<"second occurence of key 2 in evenarr is at index "<<secondOccurance(evenarr, 8, 2)<<endl;

//   totalNumberocc(firstOccurance(oddarr, 7, 4),secondOccurance(oddarr, 7, 4));
//   totalNumberocc(firstOccurance(evenarr, 8, 2),secondOccurance(evenarr, 8, 2));

// }


// Total number of occurrence nikalni ho to like upper wale evenarr[8] mai btao ki 2 kitni baar occur hua hai 
// so iska formula hai (lastoccurenceIndex - firstOccurrenceIndex) + 1




// Q --2---------------------------------------------------------------------------------------------------------------------------------------
// Q ---->>>> 2   -- > Peak Index in a Mountain Array

// Question -- > You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

// Return the index of the peak element.

// Your task is to solve it in O(log(n)) time complexity.

//example -- >>>   Input: arr = [0,1,0];   Output: 1  
//  so basically iss question mai adha array increasing order mai hai and adha decreasing so ye ek moutain form krta hai agr iski values ko hum graph mai dekhe to
// so basically isme hume btana hai ki max value ka index kya hoga maximum mtlv peak value


// note -- > so jruri nhi hai ki bich mai hi khi ho peak value first index mai bhi ho skti hai and last index mai so ye soch ke chaliyo



// int peakValue(int arr[], int size){
    
//     int startIndex = 0;
//     int endIndex = size - 1;
//     int ans = -1;

//     while (startIndex <= endIndex)
//     {
//         int midIndex = (startIndex + endIndex)/2;
        
//         // now edges ke liye check krna pdega agr midIndex = 0 mai aa jae ya fr midIndex last Index mai aa jae to uss case ke liye

//         if (midIndex == 0)                // agr midIndex 0th index mai aa gya to
//         {
//             if (arr[midIndex] > arr[midIndex + 1])      // checks agr phla element hi bda nikla to mtlv vhi peak value hai
//             {
//                 ans = midIndex;
//                 return ans;
//             }else{
//                 startIndex = midIndex + 1;
//             }
            
//         }else if (midIndex == size - 1)
//         {
//             if (arr[midIndex] > arr[midIndex - 1])
//             {
//                ans = midIndex;
//                return ans;
//             }else{
//                 endIndex = midIndex - 1;
//             }

//         }else if (arr[midIndex] > arr[midIndex - 1] && arr[midIndex] > arr[midIndex + 1])
//         {
//             ans = midIndex;
//             return ans;
//         }else if (arr[midIndex] < arr[midIndex + 1])
//         {
//             startIndex = midIndex + 1;
//         }else{
//             endIndex = midIndex - 1;
//         }
        
//     }

//     return ans; 
// }


// // ek or chota tarika iska -----------------------------------

// int peakValue(int arr[], int size){
    
//     int startIndex = 0;
//     int endIndex = size - 1;

//     while (startIndex < endIndex)            // so is tarike mai humne loop ko ek kaam ke liye chlaya hai taki baar repeat na ho
//     {
//         int midIndex = (startIndex + endIndex)/2;

//         if (arr[midIndex] < arr[midIndex + 1])
//         {
//             startIndex = midIndex + 1;
//         }else{
//             endIndex = midIndex;            // isme end index midindex ke brabar isliye rkha hai kuki agr midindex hi peak value hota to fr agr hum endindex ko midindex -1 krte to piche chle jata
//         }
//     }      
//         return startIndex;
// }


// int main(){

//   int arr[5] = {0,10,20,50,2};
//   cout<<peakValue(arr,5);
  
// }





// Q -- > 3 --------------------------------------------------------------------------------------------------------------------------------------

// Question -- >>  Find pivot element in a sorted rotated array 
//  example -- > arr[] = {7,9,1,2,3}  output --> 1    example 2 --> {4,5,6,7,0,1,2}  output-->> 0


// int pivotElement(vector<int> &arr, int size){

//       int start = 0;
//       int end = size-1;

//       while (start < end)
//       {
//           int mid = (start + end)/2;

//           if (arr[mid] >= arr[0])              // arr[0] se isliye compare kra hai kuki ye btaega ki mid first line mai hai ya second mai mtlv first
//           {                                    // part of array mai hai (7,9) ki second part of array mai (1,2,3)
//              start = mid + 1;
//           }else{
//             end = mid;
//           }
//       }
//     return arr[start];  
// }


// int main(){
    
//      vector<int> arr = {4,5,6,7,0,1,2};
//      int size = arr.size();

//      int ans = pivotElement(arr,size);
//      cout<<ans;
// }




//  Q ---> 4 ------------------------------------------------------------------------------------------------------------------------------------
//  Question ---> 4 
// You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.

// Now the array is rotated at some pivot point unknown to you.

// For example, if 'arr' = [ 1, 3, 5, 7, 8], then after rotating 'arr' at index 3, the array will be 'arr' = [7, 8, 1, 3, 5].

// Now, your task is to find the index at which ‘k’ is present in 'arr'.

// Note :
// 1. If ‘k’ is not present in 'arr', then print -1.
// 2. There are no duplicate elements present in 'arr'. 
// 3. 'arr' can be rotated only in the right direction.



// int findPivot(vector<int> &arr, int n)
// {
//     int start = 0;
//     int end = n - 1;

//     while(start < end)
//     {
//         int mid = (start + end)/2;

//         if(arr[mid] >= arr[0]){
//             start = mid + 1; 
//         }
//         else{
//             end = mid;
//         }
//     }     
//     return start;
// }

// int binaryfun(vector<int> &arr, int s, int e, int key)
// {
//      int start = s;
//      int end = e;

//      while(start <= end)
//      {
//          int mid = (start + end)/2;
//          if(key == arr[mid])
//          {
//              return mid;
//          }else if(key > arr[mid])
//          {
//              start = mid + 1;
//          }else{
//              end = mid - 1;
//          }
//      }

//      return -1;
// }



// int search(vector<int>& arr, int n, int k)
// {
//    int pivot = findPivot(arr, n);
//    if(k >= arr[pivot] && k <= arr[n-1])
//    {
//        return binaryfun(arr,pivot,n-1,k);
//    }else{
//        return binaryfun(arr,0, pivot-1,k);
//    }
// }


// int main(){

//     vector<int> arr = {12, 15, 18, 2, 4};
//     int k = 2;
//     int size = arr.size();
//     int ans = search(arr,size,k);
//     cout<<ans;
// }






// Q -- > 5 -------------------------------------------------------------------------------------------------------------------------------------

// Question --> 5 -- > You are given a positive integer ‘n’.

// Your task is to find and return its square root. If ‘n’ is not a perfect square, then return the floor value of sqrt(n).

// Example:
// Input: ‘n’ = 7
// Output: 2
// Explanation:
// The square root of the number 7 lies between 2 and 3, so the floor value is 2.  


// long long int sqrtByBinarysearch(int n){

//     int s = 0;                   // starting is 0 because jo bhi number hoga uska square root 0 se uss number ke hi bich to lie krta hoga na
//     int end = n;                 // and 0  to n mtlv ek sorted array type hi ho gya monotonic function so mtlv isme hum binary search lga skte hai
//     long long int ans;

//     while (s <= end)
//     {
//         long long int mid = (s + end)/2;
//         long long square = mid * mid;

//         if (square == n)
//         {
//             return mid;
//         }else if(square < n){
//             ans = mid;
//             s = mid + 1;
//         }else{
//             end = mid - 1;
//         }
//     }
//     return ans;
// }

// // now agr hume or precise value chaiye ki nhi mujhe to floor value nhi chaiye mujhe point ke baad bhi dikhao exact


// double morePreciseValue(int n, int floorValue, int afterPointIteration){   
// // n = number(37), floorvalue = jo upper wale function se ans aya hai jese 6 and afterPointiteration = point ke baad kitni value chaiye like 6.082 (3 digit chaiye)

//     double factor = 1;                // factor = 1 isliye liye hai taki jb ye 10 se divide ho to point mai de like 1/10 = 0.1                                                     
//     double ans = floorValue;

//     for (int i = 0; i < afterPointIteration; i++)  // flow smjh rha hai isme kese chl rha hoga i chlega like 3 iteration tk mtlv point ke baad 3 value tk ke liye
//     {
//         factor = factor/10;                        // now factor/10 taki hr iteration mai ye 0.1, 0.01, 0.001  de

//         for (double j = ans; j*j <= n; j = j+factor) // iss wale loop mai j ko ans se initialize kr diya mtlv j mai floorvalue daal di example 6 now 6 * 6 agr <= 37 hai to true
//         {                                        // ans vo value ans = mai j save kr do fr j mai factor plus kr do means 6 + 0.1 then frse check kro
//             ans = j;
//         }
        
//     }
//     return ans;
// }


// int main(){
    
//     int n;
//     cout<<"Enter the number you want to find square root of "<<endl;
//     cin>>n;
//     int floorvalue  = sqrtByBinarysearch(n);
//     cout<<"Floor square root of n "<<n<<" is = "<<floorvalue<<endl;
//     cout<<"precise square root of n "<<n<<" is = "<<morePreciseValue(n,floorvalue,3);
// }





// Q ----> 6 -------------------------------------------------------------------------------------------------------------------------------

//  Question ->> 6 Given an array ‘arr’ of integer numbers, ‘arr[i]’ represents the number of pages in the ‘i-th’ book.

// There are ‘m’ number of students, and the task is to allocate all the books to the students.

// Allocate books in such a way that:
// 1. Each student gets at least one book.
// 2. Each book should be allocated to only one student.
// 3. Book allocation should be in a contiguous manner.

// You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum.

// If the allocation of books is not possible, return -1.


int findPages(vector<int>& arr, int n, int m) {
    if(m > n){
        return -1;
    }
      int start = 0;
      int  end = 0;
      int ans;

      for(int i =0; i<n; i++){
          start = max(start,arr[i]);
          end += arr[i];
      } 

      while(start <= end){
          int mid = (start + end)/2;
          
          int pagealloc = 0;
          int student = 1;
          for(int i = 0; i<n; i++){
              pagealloc += arr[i];
              if(mid < pagealloc){
                  student++;
                  pagealloc = arr[i];
              }
          }
          if(student <= m){
              ans = mid;
              end = mid-1;
          }else{
              start = mid + 1;
          }
      }
      return ans;
}

int main(){
    vector<int> arr = {12, 34, 67, 90};
    int size = arr.size();
    int NumberOfStudents = 2;

    cout<<findPages(arr,size,NumberOfStudents);
}