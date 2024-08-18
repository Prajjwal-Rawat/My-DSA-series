#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//  -------------------------------        Question -1         ---------------------------------------------------   




// Question -- > Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]

//  void moveZeroes(vector<int>& nums) {
//         int n = nums.size();
//         int i = 0;
//         for(int j = i; j<n; j++){
//             if(nums[j] != 0){
//                 swap(nums[i], nums[j]);
//                 i++;
//             }
//         }
//     }


// int main(){

// vector<int> arr = {0,1,0,3,12};
// int n = arr.size();
// moveZeroes(arr);
// for (int i = 0; i < n; i++)
// {
//     cout<<arr[i]<<" ";
// }

// }





//  ---------------------------             Question 2                 ---------------------------------------------------




// Question --- >   You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing
//  the number of elements in nums1 and nums2 respectively.

// Merge nums1 and nums2 into a single array sorted in non-decreasing order.

// The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has 
// a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be
//  ignored. nums2 has a length of n.



// ------- so first approach 
//  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

//    for (int j = 0, i = m; j<n; j++){
//             nums1[i] = nums2[j];
//             i++;
//         }
//         sort(nums1.begin(),nums1.end());
// }

// // ---------- approach two 2

//  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

//         int i = m - 1;
//         int j = n - 1;
//         int k = m + n - 1;
        
//         while (j >= 0) {
//             if (i >= 0 && nums1[i] > nums2[j]) {
//                 nums1[k--] = nums1[i--];
//             } else {
//                 nums1[k--] = nums2[j--];
//             }
//         }
// }

// // ---- approach 3 mai bs approach 2 ko hi extend krke likh skte hai mtlv j ki values ke liye alg se ek loop but that is not optimal


// int main() {
//   vector<int> nums1 = {4,5,6,0,0,0};
//   int m = 3;
//   vector<int> nums2 = {1,2,3};
//   int n = 3;
//   merge(nums1, m, nums2, n);
//   for (int i = 0; i < nums1.size(); i++) {
//     cout << nums1[i] << " ";
//   }
//   cout << endl;
//   return 0;
// }




// ---------------------------        Question 3        ----------------------------




// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
// Example 1:

// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]


//  ------- approach 1 ------

// void rotateArray(vector<int> &arr, int n, int k){
     
//      k = k % n;    // Ensure that k is in the array range [0 to n] like if arr = [3] and k = 2 so ye range ke bhr hai jese so hume 2 shift krna hai pr 2 to hai 
//                    // hi nhi array mai so hume ye ensure krna hai ki shifting array ke andr hi ho 
    
//     // reverse the entire array 
//     reverse(arr.begin(), arr.end());

//     // reverse the array from begin to k
//     reverse(arr.begin(), arr.begin() + k);

//     // reverse the array after the k to the end
//     reverse(arr.begin() + k, arr.end());
// }


//      ---------------Approach 2 ------------


// void rotateArray(vector<int> &arr, int n, int k){
//       vector<int> temp(n);
//       for (int i = 0; i < n; i++)
//       {
//         temp[(i + k) % n] = arr[i];
//       }
      
//      arr = temp;
// }

// int main(){
//     vector<int> arr = {2,4,5,6,8,9};
//     int k = 3;
//     int size = arr.size();
//     rotateArray(arr,size,k);
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
// }




//  -------------------------------           Question 4              -------------------------------



// Check if Array Is Sorted and Rotated
// Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions 
// (including zero). Otherwise, return false.


// bool check(vector<int> &arr, int n){
//      int count = 0;
//      for (int i = 1; i < n; i++)
//      {
//         if (arr[i-1] > arr[i])
//         {
//            count++;
//         }
//      }
//      if (arr[n-1] > arr[0])
//      {
//         count++;
//      }
//      return count <= 1;
// }


// int main(){
//    vector<int> arr = {3,4,5,1,2};
//    int n = arr.size();
//    bool ans = check(arr,n);
//    cout<<ans;
// }



//--------------------------             Question 5               ------------------------------



// Sum Of Two Arrays
// You are given two numbers 'A' and 'B' in the form of two arrays (A[] and B[]) of lengths 'N' and 'M' respectively,
//  where each array element represents a digit. You need to find the sum of these two numbers and return this sum in the form of an array.

// Note:
// 1. The length of each array is greater than zero.
// 2. The first index of each array is the most significant digit of the number. For example, if the array A[] = {4, 5, 1}, 
// then the integer represented by this array is 451 and array B[] = {3, 4, 5} so the sum will be 451 + 345 = 796. So you need to return {7, 9, 6}.


vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	vector<int> ans;
	int i = n - 1;
	int j = m - 1;
	int carry = 0;
	int sum = 0;

	while(i >= 0){
		if(j >= 0){
			sum = a[i] + b[j] + carry;
			carry = sum/10;
	        sum = sum % 10;
			ans.push_back(sum);
			i--;
			j--;
		}else{
			sum = a[i] + carry;
			carry = sum/10;
	        sum = sum % 10;
			ans.push_back(sum);
			i--;
		}
	}
	while(j >= 0){
		sum = b[j] + carry;
		carry = sum/10;
	    sum = sum % 10;
		ans.push_back(sum);
		j--;
	}
	if(carry > 0){
		ans.push_back(carry);
	}
	reverse(ans.begin(), ans.end());
	return ans;
}


int main() {
  vector<int> a = {9,9};
  int n = a.size();
  vector<int> b = {1, 3, 7, 3};
  int m = b.size();

  vector<int> ans = findArraySum(a,n,b,m);
  int size = ans.size();
  for(int i = 0; i < size; i++){
    cout<<ans[i]<<" ";
  }
}