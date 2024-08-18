#include <iostream>
#include <vector>
using namespace std;


// void merge(int arr[], int s, int e, int mid){
     
//     int temp[e - s + 1];                               // in this approach we made a single temp array wich is not suitable for large array's
//     int i = s;                                         // so we can use different approach here that we will create two sub arrays 
//     int j = mid + 1;                                   // then copy the elements who is coming from recursion(from original array to sub arrays)
//     int index = 0;                                     // then compare them and will put them into original array 

//     while (i <= mid && j <= e)
//     {
//         if (arr[i] <= arr[j])
//         {
//             temp[index++] = arr[i++];
//         }else{
//             temp[index++] = arr[j++];
//         }
//     }

//     while (i <= mid)
//     {
//         temp[index++] = arr[i++];
//     }
//     while (j <= e)
//     {
//         temp[index++] = arr[j++];
//     }
    
//     index = 0;
    
//      while (s <= e)
//      {
//         arr[s++] = temp[index++];
//      }
     
    
// }


// --------------------------  merge function by creating two sub arrays

// void merge(int arr[], int s, int e, int mid){
//     int l1 = mid - s + 1;
//     int l2 = e - mid;

//     // creating sub arrays
//     int left[l1], right[l2];

//     // copying those elements(which is coming from mergeSort funtion) from original array to sub arrays
//     for (int i = 0; i < l1; i++)
//     {
//         left[i] = arr[s + i];         // arr[s] mai jo element aya hai 
//     }
//     for (int i = 0; i < l2; i++)
//     {
//         right[i] = arr[mid + 1 + i];
//     }

//     // now merge function will merge this two sub arrays into orignal array
//     int i = 0, j = 0, k = s;
//     while (i < l1 && j < l2)
//     {
//         if (left[i] <= right[j])
//         {
//             arr[k++] = left[i++];
//         }else{
//             arr[k++] = right[j++];
//         }
//     }
//     while (i < l1)
//     {
//         arr[k++] = left[i++];
//     }
//     while (j < l2)
//     {
//         arr[k++] = right[j++];
//     }

// }


// void mergeSort(int *arr, int s, int e){

//       if (s >= e)
//       {
//          return ;
//       }

//       int mid = s + (e - s)/2;
     
//     //  left part divide
//      mergeSort(arr, s, mid);

//     //  right part divide
//      mergeSort(arr, mid + 1, e);

//     // merging sorted array
//      merge(arr, s, e, mid);

// }

// int main(){
//     int arr[7] = {3, 4, 1, 6, 2, 5, 7};
//     int n = 7;

    
//    for (int i = 0; i < n; i++)
//    {
//       cout<<arr[i]<<" ";
//    }

// }



// ----------------------------            similar  Question        ------------------------------
// ---------------------------             count Inversion          -------------------------------

// For a given integer array/list 'ARR' of size 'N' containing all distinct values, find the total number of 'Inversions' that may exist.

// An inversion is defined for a pair of integers in the array/list when the following two conditions are met.

// A pair ('ARR[i]', 'ARR[j]') is said to be an inversion when:

// 1. 'ARR[i] > 'ARR[j]' 
// 2. 'i' < 'j'

// Where 'i' and 'j' denote the indices ranging from [0, 'N').


// --------------------------------        Answer           -------------------------------

//------------- First approach brute force----------- complexity is o(n^2)

// int InversionCnt(int *arr, int n){
//     int count = 0;

//     for (int i = 0; i < n-1; i++)            // idhr n-1 isliye chalaya hai loop kuki mujhe i and j compare krna hai n-1 nhi rkhta to j wala loop array se bhr nikl jata
//     {
//         for (int j = i+1; j < n; j++)      // ye to ho gai brute force  
//         {
//             if (arr[i] > arr[j])
//             {
//                 count++;
//             }
            
//         }
        
//     }
//     return count;
// }

// int main(){
//     int arr[7] = {12,8,9,3,11,5,4};
//     int n = 7;
//     cout<<InversionCnt(arr, n);
// }



// --------------  second approach By merge sort algo    --------------------
//            iski complexity o(n log n) hogi coz of merge sort


int merge(int *arr, int s, int mid, int e){
    int leftSize = mid - s + 1;
    int rightSize = e - mid;

    int count = 0;

    // sub- arrays
    int left[leftSize], right[rightSize];
 
    // coping elements
    for (int i = 0; i < leftSize; i++)
    {
         left[i] = arr[s + i];
    }
    for (int i = 0; i < rightSize; i++)
    {
        right[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = s;
    while (i < leftSize && j < rightSize)
    {
        if (left[i] <= right[j])
        {
            arr[k++] = left[i++];
        }else{
            count += (leftSize - i);
            arr[k++] = right[j++];
        } 
    }

    while (i < leftSize)
    {
        arr[k++] = left[i++];
    }
    
    while (j < rightSize)
    {
        arr[k++] = right[j++];
    }
    
    return count;
        
}


int InversionCnt(int arr[], int s, int e){
    int count = 0;

    if (s >= e)
    {
        return count;
    }
    
    int mid = (s + e)/2;

    count += InversionCnt(arr, s, mid);
    count += InversionCnt(arr, mid + 1, e);
    count += merge(arr, s, mid, e);

    return count;
}



int main(){
    int arr[7] = {12,8,9,3,11,5,4};
    int n = 7;
    cout<<InversionCnt(arr, 0, n -1);
}


