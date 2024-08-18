#include<iostream>
using namespace std;
#include<vector>
#include <algorithm>

// Q  -->>  swapping alternate array values
// example = {1,2,3,4,5,6}  --> output -- >  {2,1,4,3,6,5}

// void Swappingarr(int arr[],int size){

//     int start = 0;
//     int end = 1;

//     while (end<=size-1)
//     {
//         swap(arr[start],arr[end]);
//         start += 2;
//         end += 2;
//     }
    
// }

// void printingarr(int arr[],int size){

//     for (int i = 0; i <size; i++)
//     {
//         cout<<arr[i]<<",";
//     }
//     cout<<endl;
    
// }


// int main(){

//     int arr[6] = {1,2,3,4,5,6};
//     int brr[5] = {10,20,30,40,50};

//     Swappingarr(arr,6);
//     Swappingarr(brr,5);

//     printingarr(arr,6);
//     printingarr(brr,5);

// }


// -----------------------------------------------------------------------------------------------------------------------------------------------



// Q --->> 2
//  Question is --->>  you have been given an integer array(arr) of size N. Where N is equal to [2M + 1].
// Now in the given array, "M" numbers are present twice and one number is present only once. You need to find and return that number which is unique in array/list
// so Basically question mai ye kha hai ki N = 2M + 1 means it's an odd size array. lets assume M = 3 so aray size will be 2*3+1 = 7
// so aage kha hai ki M numbers are present twice so mtlv M like 3 hai like = 1,4,5 so ye numbers twice baar array mai present honge
// so that mean 1,4,1,5,4,5 and ek unique number hoga inme jisse hume find krna hai so arr[7] = 1,4,1,5,2,4,5  so output will be 2 that is unique  

// int value (int arr[],int size){
//   int ans = 0;
     
//      for (int i = 0; i < size; i++)
//      {
//          ans = ans ^ arr[i];     // okie so ek tarika ye hai ki hum xor kr de sbko jo same digit hogi vo apas mai xor hoke 0 ho jaegi and jo 
//      }                           // unique hogi vo 0 se xor hoke vhi same value aa jaegi mtlv unique wala hi bachega 
     
//     return ans;
// }


// int main(){
    
//     int arr[10] = {1,4,1,5,2,2,3,4,5};

//      cout<<value(arr,10);

   
// }


  //  ( second tarika solve krne ka 2nd question ) 

// int uniquevalue(int arr[], int size){      // ye second tarika hai but isme complexity jada ho jari hai so upper wala tarika jada sahi hai 

//     for (int i = 0; i < size; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//             }
            
//         }
//         if (count == 1)
//         {
//            return arr[i];
//         }
        
//     }
//     return -1;   // return default value in case if there's no unique value
    
// }

// int main(){

//     int arr[10] = {1,4,1,5,2,3,2,4,5};

//     cout<<uniquevalue(arr,10);

// }



// ------------------------------------------------------------------------------------------------------------------------------------------------



      // Q ---->> 3

// Question -- > Duplicate in array

// you are given an array "ARR" of size "N" containing each number between 1 and N-1 at least once. There is a single integer value that is present
//  in the array twice. Your task is to find the duplicate integer value present in the array 
// so like ek array dia hai N size ka jiske andr 1 se lekar n-1 tk number hai ya value hai at least one baar so unme se ek single integer esa 
// hai jo ki do baar present hai mtlv let's say N = 6 so n-1 tk values hai like 1,5,3,2,4 and ek number esa hai inme se jo ek or baar hai last mai
//  so let's say 3 hai vo number so arr = 1,5,3,2,4,3 so hume output mai 3 dena hai jo ki duplicate hai 


// so first approach brute force hr kisi mai treverse krke usko check kro 

// int duplicate(int arr[], int size){

//     for (int i = 0; i < size; i++)
//     {
//       for (int j = 0; j < size; j++)
//       {
//         if (arr[i] == arr[j] && i != j)
//         {
//           return arr[i];                // so ye to hai brute force method and ye basically not suitable hai kuki ye O(n2) - > complexity lera hai  
//         }                               // so we have to do it in less complexity like O(n) and less space complexity like O(1);
        
//       }
//     }
//       return -1;
    
// }


//                               // ek or tarika XOR krke hai so
// int duplicate(int arr[], int size){
//    int ans = 0;
//    for (int i = 0; i < size; i++)
//    {
//        ans = ans ^ arr[i];                    // explaination copy mai hai
//    }
//    for (int i = 1; i < size; i++)     
//    {
//        ans = ans ^ i;
//    }
//    return ans;
   
   
// }

// int main(){

//   int arr[6] ={1,5,3,2,4,3};

//   cout<<duplicate(arr,6);
// }




// ------------------------------------------------------------------------------------------------------------------------------------------------

// Q --->> 4    Intersection of two array 

// Question -->>  You are given two arrays "A" and "B" of size "N" and "M" resepectively. Both these arrays are sorted in non-decreasing order.
// you have to find the intersection of these two arrays.
// example --> arr1[6] = {1,2,2,2,3,4} intersection arr2[4] ={2,2,3,3} so output will be 2,2,3

// so first approach -- but it takes more complexity

// vector<int>arrayIntercestion(vector<int> &arr1, int n, vector<int> &arr2, int m){
//         n = arr1.size();
//         m = arr2.size();
//         vector<int> ans;
//         for (int i = 0; i < n; i++)
//         {
//            for (int j = 0; j < m; j++)
//            {
//               if (arr1[i] == arr2[j])
//               {
//                 ans.push_back(arr1[i]);
//                 arr2[j] = -1;
//                 break;
//               }
              
//            }
           
//         }
//         if (ans.empty())            // agr koi intersection nhi ho rha mtlv ans empty hai to uss case mai -1 return kr diya
//         {
//           return {-1};
//         }
        
//         return ans;
// }

    // as upper wale solution mai 2 loop chlre hai so it is taking 0(n2) complexity
    // now if we optimize this to gain a better solution in better time and space complexity

    // so isme ek point likha tha ki ye array sorted hai non -decreasing mai means chote se bde mai so kya hum isse kch kr skte hai 
  
// vector<int> arrayIntercestion(vector<int> &arr1, int n, vector<int> &arr2, int m){
      
//       int i = 0;
//       int j = 0;
//       vector<int> ans;

//       while (i<n && j<m)                                    // now this is the optimized solution coz isme hum ek hi baar traverse kre hai array mai
//       {
//         if (arr1[i] < arr2[j])
//         {
//            i++;
//         }else if (arr1[i] == arr2[j])
//         {
//            ans.push_back(arr1[i]);
//            i++;
//            j++;
//         }else{
//           j++;                       // agr koi arr1[i] > arr2[j] so is case mai hum agr ki value check krenge na second array ke j ki 
//         }
//       }
//       return ans;
      
// }

// int main(){

//   vector<int> arr1 = {1,2,2,2,3,4};
//   vector<int> arr2 = {2,2,3,3};

//   vector<int> intersection = arrayIntercestion(arr1, arr1.size(), arr2, arr2.size());
//   for (int i = 0; i < intersection.size(); i++)
//   {
//     cout<<intersection[i]<<" ";
//   }
// }



// ----------------------------------------------------------------------------------------------------------------------------------------------


// Q --->> 5 
// Question -->> You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements 
// such that each sum of elements of each pair equals 'S'.

// Note:

// Each pair should be sorted i.e the first value should be less than or equals to the second value. 

// Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair 
// with a smaller second value should come first.


// vector<vector<int>> pairSum(vector<int> &arr, int size, int s){   // so in this we use double vector because we want pairs 
//                                                                   // but iski jgh hum vector<pair<int,int> (pair key word bhi use kr skte the but then hume code ka structure thoda change krna pdta)
//       vector<vector<int>> ans;

//       for (int i = 0; i < size; i++)
//       {
//         for (int j = i+1; j < size; j++)
//         {
//            if (arr[i] + arr[j] == s)
//            {
//               ans.push_back({min(arr[i],arr[j]), max(arr[i],arr[j])}); 
//            }
           
//         }
        
//       }
//      sort(ans.begin(), ans.end());
//      return ans;
// }



// int main(){
   
//    vector<int> arr = {1,2,3,4,5};
//    int size = arr.size();
//    int s = 5;
//    vector<vector<int>> ans = pairSum(arr,size,s);
//    for (int i = 0; i < ans.size(); i++)
//    {
//      cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
//    }
   
// }




// -----------------------------------------------------------------------------------------------------------------------------------------------

// Q --->> 6

// Question -->> You have been given an integer array/list(ARR) of size 'N'. It only contains 0s, 1s and 2s. Write a solution to sort this array/list.

// Note :
// Try to solve the problem in 'Single Scan'. ' Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be
//  visiting each element in the array/list just once.


// phla tarika with only 2 pointers but not optimal 


// vector<int> sort012(vector<int> &arr, int n )
// {
//   int i = 0;
//   int j = n - 1;
//   while(i<=j){
//      if(arr[i] == arr[j]){
//         i++;
//         j--;
//      }else{
//         break;
//      }
//   }

//     i = 0;
//     j = n - 1;

//     // Handle the case of 0s and 1s
//     while (i <= j && i < n) {
//       if(arr[i] == 2 || arr[j] == 2){
//         break;
//       }
//         if (arr[i] == 0) {
//             i++;
//         } else if (arr[j] == 1) {
//             j--;
//         } else if (arr[i] == 1 && arr[j] == 0) {
//             swap(arr[i], arr[j]);
//             i++;
//             j--;
//         } else {
//             i++;
//             j--;
//         }
//     }

//    // Handles 1s and 2s
//     i = 0;
//     j = n - 1;
//     while (i <= j) {
//        if(arr[i] == 0 || arr[j] == 0){
//           break;
//        }
//         if (arr[i] == 1) {
//             i++;
//         } else if (arr[j] == 2) {
//             j--;
//         } else if (arr[i] == 2 && arr[j] == 1) {
//             swap(arr[i], arr[j]);
//             i++;
//             j--;
//         } else {
//             i++;
//         }
//     }

//     // Handle the case of 1s and 2s and 0s
//     i = 0;
//     j = n - 1;
//     while (i <= j) {
//         if (arr[i] == 0) {
//             i++;
//         } else if (arr[j] == 2) {
//             j--;
//         } else if (arr[i] == 2 && arr[j] == 0) {
//             swap(arr[i], arr[j]);
//             i++;
//             j--;
//         } else if (arr[i] == 2 && arr[j] == 1) {
//             swap(arr[i], arr[j]);
//             j--;
//         } else if (arr[i] == 1 && arr[j] == 0) {
//             swap(arr[i], arr[j]);
//             i++;
//         } else if (arr[i] == 1 && arr[j] == 1) {
//             swap(arr[i], arr[i + 1]);
//             swap(arr[j], arr[j - 1]);
//             if (arr[i] == 1 && arr[j] == 1) {
//                 i++;
//                 j--;
//             }
//         }
//     }
//   return arr;
// }






               // second tarika with 3 pointers  -------------



vector<int> sort012(vector<int> &arr, int n ){

  int low =0;
  int mid =0;
  int high = n-1;

  while(mid<=high){

      if(arr[mid] == 0){
          swap(arr[mid], arr[low]);
          mid++;
          low++;
      }else if(arr[mid] == 1){
          mid++;
      }else{
          swap(arr[mid],arr[high]);
          high--;
      }
  }
  return arr;  
}

int main() {
   vector<int> arr = {0,0,2,2,0,1,2,0,2,2,1};
   int n = arr.size();
   sort012(arr,n);
   for(int i = 0; i<n; i++){
     cout<<arr[i]<<" ";
   }
  
}



