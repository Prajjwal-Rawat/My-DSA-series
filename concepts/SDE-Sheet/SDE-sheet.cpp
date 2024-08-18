#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>
using namespace std;

// ---------------------------------         Love-babbar-SDE- sheet           ------------------------------------------

// ---------------------------------              Question 3                  -----------------------------------------

// Given an array arr[] and an integer k where k is smaller than the size of the array, the task is to find the kth smallest element in the given array. It is given that all array elements are distinct.

// Note:-  l and r denotes the starting and ending index of the array.

// Example : Input:
// n = 6
// arr[] = 7 10 4 3 20 15
// k = 3
// l=0 r=5

// Output :
// 7

// ----------------------------------------           Answer          ----------------------------------

// int partition(int arr[], int l, int r)
// {
//     int i = l, j = l;
//     int pivot = arr[r];

//     while (i < r)
//     {
//         if (arr[i] > pivot)
//         {
//             i++;
//         }
//         else
//         {
//             swap(arr[i], arr[j]);
//             i++;
//             j++;
//         }
//     }
//     swap(arr[r], arr[j]);
//     return j;
// }

// int quickSelect(int *arr, int l, int r, int k)
// {
//     int pivotIndex = partition(arr, l, r);
//     if (k == pivotIndex)
//     {
//         return arr[pivotIndex];
//     }
//     if (k < pivotIndex)
//     {
//         return quickSelect(arr, l, pivotIndex - 1, k);
//     }
//     else
//     {
//         return quickSelect(arr, pivotIndex + 1, r, k);
//     }
// }

// int kthsmallest(int arr[], int l, int r, int k)
// {
//     int ans = quickSelect(arr, l, r, k - 1); // so idhr k-1 isliye kia hai kuki hume kth smallest nikalna hai
//     return ans;                              // agr mujhe kth largest bola hota to mai (arr length - k) krta kuki mujhe kth largest nikalna tha jo ki khi piche hi hoga isliye
// }

// int main()
// {
//     int arr[6] = {7, 10, 4, 3, 20, 15};
//     int l = 0;
//     int r = 5;
//     int k = 3;
//     int result = kthsmallest(arr, l, r, k);
//     cout << result;
// }

// ------------------------------             Question 5              --------------------------------

// ------------------------       Alternate positive and negative numbers       --------------------------

// Given an unsorted array Arr of N positive and negative numbers. Your task is to create an array of alternate positive and negative numbers without changing the relative order of positive and negative numbers.
// Note: Array should start with a positive number and 0 (zero) should be considered a positive element.

// example :  N = 9
//  Arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2}
//  Output:
//  9 -2 4 -1 5 -5 0 -3 2

// ---------------------------------             Answer                  -------------------------------

// -------------------------------             Approach 1                ------------------------------
// -----------       allocating 2 temp arrays --- time = O(n), space = O(n)       ---------------------

// void rearrange(int arr[], int n)
// {
//     vector<int> temp;
//     vector<int> temp2;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] >= 0)
//         {
//             temp.push_back(arr[i]);
//         }
//         else
//         {
//             temp2.push_back(arr[i]);
//         }
//     }
//     int i = 0;
//     int j = 0;
//     int k = 0;

//     while (j < temp.size() && k < temp2.size())
//     {
//         arr[i++] = temp[j++];
//         arr[i++] = temp2[k++];
//     }
//     while (j < temp.size())
//     {
//         arr[i++] = temp[j++];
//     }
//     while (k < temp2.size())
//     {
//         arr[i++] = temp2[k++];
//     }
// }

// // ---------------------------            Approach 2            -------------------------------------
// // ------------        Two pointer better time complexity ---  time = O(n), space = O(1)       ----------------------

// void rearrange(int arr[], int n){
//     int pos = 0, neg = 1;

//     while (true)
//     {
//        while (pos < n && arr[pos] >= 0)
//        {
//           pos += 2;
//        }
//        while (neg < n && arr[neg] < 0)
//        {
//           neg += 2;
//        }
//        if (pos < n && neg < n)
//        {
//            swap(arr[pos], arr[neg]);
//        }else{
//           break;
//        }

//     }
// }

// int main(){
//     int arr[9] = {9, 4, -2, -1, 5, 0, -5, -3, 2};
//     rearrange(arr, 9);

//     for (int i = 0; i < 9; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

// }

// ----------------------------              Question 6               -----------------------------------
// -----------------------             Union of two arrays            ------------------------------

// Given two arrays arr1[] and arr2[], the task is to find the number of elements in the union between these two arrays.

// The Union of the two arrays can be defined as the set containing distinct elements from both arrays. If there are repetitions, then only one element occurrence should be there in the union.

// Note: Elements are not necessarily distinct.

// Example : Input: arr1[] = [1, 2, 3, 4, 5], arr2[] = [1, 2, 3]
// Output: 5
// Explanation: 1, 2, 3, 4 and 5 are the elements which comes in the union setof both arrays. So count is 5.


// ------------------------------                 Answer               -----------------------------------



// int doUnion(vector<int> arr1, vector<int> arr2)
// {
//     unordered_set<int> s;       // unordered set isliye kuki ye sort krke nhi deta isliye iski time and space complexity sahi h ni to hum only set bhi use kr skte the 
//     for (int i = 0; i < arr1.size(); i++)
//     {
//         s.insert(arr1[i]);
//     }
//     for (int i = 0; i < arr2.size(); i++)
//     {
//         s.insert(arr2[i]);
//     }
//     return s.size();
// }

// int main(){
//     vector<int> arr1 = {1, 2, 3, 4, 5};
//     vector<int> arr2 = {1,2,3};
//     int ans = doUnion(arr1, arr2);
//     cout<<ans;
// }



// ---------------------------------            Question 7               --------------------------------
//-----------------------------           Rotate Array by One          ------------------------------------

// Given an array arr, rotate the array by one position in clock-wise direction.

// --------- isme only 1 se rotate krna hai isliye hum isme ye code likh skte hai -----------

// Example : Input: arr = [1, 2, 3, 4, 5]
// Output: [5, 1, 2, 3, 4]

// ---------------------------------              Answer             ---------------------------------

void rotate(vector<int> &arr){
    int n = arr.size();
    int lastEle = arr[n-1];              // kuki ek se shift krna hai isliye last element bhr aa jaega isliye usko phle hi store kr liya

    for (int i = n-2; i >= 0 ; i--)        // second last element se loop suru kia hai kuki second last se shift krte hue jana hai 
    {
        arr[i+1] = arr[i];
    }
    arr[0] = lastEle;
}


// --------------  but what if 2 or 4 or more shift krne ke liye bola hota   ----------
// --------------         on that case         -----------

void rotateK(vector<int> &arr){
    int k = 1;        // kitne se shift krna hai 
    int n = arr.size();
    k = k % n;            //ensure that shifting krte tym value bhr na jae 0 to n-1 mai rhe 
    cout<<k<<endl;
    // now reverse the array
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr.begin() + k, arr.end());
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    vector<int> arr = {1,2,3,4,5};
    // rotate(arr);
    rotateK(arr);
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    
}
