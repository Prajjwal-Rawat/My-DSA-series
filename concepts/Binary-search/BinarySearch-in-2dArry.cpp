#include <iostream>
#include <vector>
using namespace std;

//  -----------------------------------           Question 1              -----------------------------------

// Search in 2D matrix

// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.

// You must write a solution in O(log(m * n)) time complexity.

// Example -  1  3  5  7
//            10 11 16 20
//            23,30,34,60          target is = 3 if it is present return true else false


// ---------------------------------               Answer               --------------------------------------



//  bool searchMatrix(vector<vector<int>>& matrix, int target) {
//      int rowSize = matrix.size();
//      int colSize = matrix[0].size();

//      int start = 0;
//      int end = rowSize * colSize -1;

//      while(start <= end){
//          int mid = start + (end - start)/2;
//          int element = matrix[mid / colSize][mid % colSize];

//          if(element == target){
//              return true;
//          }
//          if(element < target){
//              start = mid + 1;
//          }else{
//              end = mid - 1;
//          }
//      }
//      return false;
//  }


// int main(){
//    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
//    int target = 3;
//    if(searchMatrix(matrix , target)){
//     cout<<"Yes your target is present in 2D matrix";
//    }else{
//     cout<<"No your target is not present in 2D matrix";
//    }
// }


// ----------------------------------------           Question 2              ----------------------------------------

// Search in 2D matrix II

// Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.

// example -   1,4,7,11,15
//             2,5,8,12,19
//             3,6,9,16,22
//             10,13,14,17,24
//             18,21,23,26,30          Target is = 5 


// ---------------------------------------          Answer       ------------------------------------------------

//  bool searchMatrixII(vector<vector<int>>& matrix, int target) {
//     int rowSize = matrix.size();
//     int colSize = matrix[0].size();

//     int start = 0;
//     int end = colSize - 1;

//      while(start < rowSize && end >= 0){
//             int element =  matrix[start][end];
//          if(element == target){
//               return true;
//          }
//           if(element < target){
//                 start++;
//           }else{
//               end--;
//           }
//       }
//      return false;
//  }

// int main(){
//    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30 }};
//    int target = 5;
//    if(searchMatrixII(matrix , target)){
//     cout<<"Yes your target is present in extream 2D matrix ";
//    }else{
//     cout<<"No your target is not present in extream 2D matrix";
//    }
// }



