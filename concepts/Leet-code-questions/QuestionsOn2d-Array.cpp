#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//  ------------------------------           Question 1           --------------------------------

// Print the sum of rows 
// example =   1 2 3 4  = 10
//             5 6 7 8  = 26 
//             9 3 2 1  = 15 


// void sumOfrows(int arr[][4], int row){
//    int max = 0;
//    int rowIndex = -1;
//    for (int i = 0; i < row; i++)
//    {
//       int sum = 0;
//      for (int j = 0; j < 4; j++)
//      {
//         sum += arr[i][j];
//         cout<<arr[i][j]<<"+";
//      }
//      cout<<" = ";
//      cout<<sum<<endl;
//      if(max < sum){
//       max = sum;
//       rowIndex = i;
//      }
//    }
//    cout<<"maximum sum of these rows are "<<max<<endl<<"and row - Index is "<<rowIndex;
// }


// int main(){
//    int arr[3][4];
//    cout<<"Enter the Elements"<<endl;

//    for (int row = 0; row < 3; row++)
//    {
//       for (int col = 0; col < 4; col++)
//       {
//          cin>>arr[row][col];
//       }
      
//    }
//    sumOfrows(arr,3);
   
// }



// -----------------------------------          Question 2          ----------------------------------------------

// Print Like a wave

// For a given two-dimensional integer array/list ‘ARR’ of size (N x M), print the ‘ARR’ in a sine wave order,
// i.e., print the first column top to bottom, next column bottom to top, and so on.

// For eg:-

// The sine wave for the matrix:-
// 1 2
// 3 4
// will be [1, 3, 4, 2].


// -----------------------------------------               Answer                 -----------------------------------



// vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols){
//    vector<int> ans;
//    for (int col = 0; col < mCols; col++)
//    {
//        if (col & 1)          // it will give the odd number -- hume pta hai jb index odd hai to hum bottom to top ja rhe hai 
//        {
//          for (int row = nRows - 1; row >= 0; row--)
//          {
//             ans.push_back(arr[row][col]);
//          }
         
//        }else{                                                // and jb index even hai to top to bottom ja rhe hai 
//          for (int row = 0; row < nRows; row++)
//          {
//             ans.push_back(arr[row][col]);
//          }
         
//        }
   
//    }
//    return ans;
// }


// int main() {
//     vector<vector<int>> matrix = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
//     int rows = 3;
//     int cols = 3;

//     vector<int> result = wavePrint(matrix, rows, cols);

//     cout << "Wave printed matrix: ";
//     for (int num : result) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }



// -------------------------------            Question 3                 ------------------------------------

// Spiral Matrix

// Given an m x n matrix, return all elements of the matrix in spiral order.  
//         -------------
//         ---------    | 
//        |    --    |  |          spiral like this
//        |   |      |  |
//        |    -----    |
//         -------------


// -------------------------------------              Answer              ----------------------------------------


// vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int> ans;
//         int rowsSize = matrix.size();
//         int colSize = matrix[0].size();

//         int total = rowsSize * colSize;
//         int count = 0;

//         int startingRow = 0;
//         int startingCol = 0;
//         int endRow = rowsSize -1;
//         int endCol = colSize - 1;

//         while(count < total){
//             for(int index = startingCol; count < total && index <= endCol; index++){
//                 ans.push_back(matrix[startingRow][index]);
//                 count++;
//             }
//             startingRow++;
//             for(int index = startingRow;count < total && index <= endRow; index++){
//                 ans.push_back(matrix[index][endCol]);
//                 count++;
//             }
//             endCol--;
//             for(int index = endCol; count < total && index >= startingCol; index--){
//                 ans.push_back(matrix[endRow][index]);
//                 count++;
//             }
//             endRow--;
//             for(int index = endRow; count < total && index >= startingRow; index--){
//                 ans.push_back(matrix[index][startingCol]);
//                 count++;
//             }
//             startingCol++;
//         }
//         return ans;
// }



// int main() {
//     vector<vector<int>> matrixarr = {{3,5,7,4},{1,2,6,8},{2,4,5,7},{10,11,12,13}};
//     vector<int> ans = spiralOrder(matrixarr);

//     cout<< "Spiral printed matrix: ";
//     for (int num : ans) {
//         cout<< num << " ";
//     }
//     cout<<endl;

//     return 0;
// }




//---------------------------------------             Question 4               ----------------------------------------

// Rotate Image

// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly.
//  DO NOT allocate another 2D matrix and do the rotation.

// example = Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
//           Output: [[7,4,1],[8,5,2],[9,6,3]]


// -------------------------------             Answer                 ------------------------------------------

// My approach ----- Space complexity jada hai isme bs kuki mene extra matrix bnai hai 

// void rotate(vector<vector<int>> &matrix){                // & tb usse hota hai jb hume issi parameter(jo bheja hai humne jese ye matrix) ke andr modify krna ho
//   int rowSize = matrix.size();
//   int colSize = matrix[0].size();
  
// //   to idhr mene ek extra space le liye 
//   vector<vector<int>> transpose(rowSize, vector<int> (colSize));      // double vector hai isliye ese liya hai 
// // transpose is same as swap column and rows
//   for (int row = 0; row < rowSize; row++)
//   {
//     for (int col = 0; col < colSize; col++)
//     {
//         transpose[col][row] = matrix[row][col];        // matrix ki row and col ki values transpose ke col and row mai daal do 
//     }

//   }

//   for (int row = 0; row < rowSize; row++)
//   {
//     for (int col = 0; col < colSize/2; col++)            // colSize/2 isliye liye hai kuki hume row ke half tk hi swap krna hai pure mai krenge to element frse apni jgh mai aa jaenge
//     {
//         swap(transpose[row][col], transpose[row][colSize - col - 1]);   // swap kre hai row wise that is basically reverse
//     }
//   }
//   // so swap that is reverse krke humare pass humara ans aa gya hoga rotated matrix
//   // now iss transpose array ko hum vapis aapne matrix real wale array mai daal denge 
  
//   matrix = transpose;
  
// }

// now optimal tarika dusro ka ------ ki hum jo alg se transpose le rhe hai row or col jo swap krne ke liye (row ko column mai dalne ke liye or column ko row mai)
// so uski jgh hum direct main(original) matrix mai hi kr skte hai

void rotate(vector<vector<int>>& matrix){
    int rowSize = matrix.size();            // mene sirf row size nikala kuki mujhe sirf issi ki need hai 
    
    for (int row = 0; row < rowSize; row++)
    {
        for (int j = row + 1; j < rowSize; j++)         // row size tk isliye chlaya hai kuki mujhe pta hai matrix jo hone wali hai 3*3 ya 4*4 type mai hogi same size of col and row
        {
            matrix[row][j] = matrix[j][row];       // so it will swap the rows and columns in the matrix
        }
        
    }
    //  now just reverse the matrix -- 
    for (int i = 0; i < rowSize; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());   // matrix[i] that is = 0 and begin that is also 0 and end that is rowSize-1
                                                       // so phli iteration mai 00 se 02 tk reverse hua 
                                                       // then second iteration mai 10 se lekar 12 tk reverse hua 
    }
    
    
}

int main(){
int row;
int col;
cout<<"Enter the number of rows and columns size of n * n "<<endl;
cout<<"Enter the rows = ";
cin>>row;
cout<<"Enter the columns = ";
cin>>col;
vector<vector<int>> matrix(row, vector<int>(col));
cout<<"Enter the elements of matrix "<<endl;
for(int i = 0; i < row; i++){
  for(int j = 0; j < col; j++){
    cin>>matrix[i][j];
  }
}
  cout<<"your given matrix is "<<endl;
  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      cout<<matrix[i][j];
    }
    cout<<endl;
  }

  rotate(matrix);
  cout<<"your rotated 90 degree matrix is "<<endl;
  for(int i = 0; i < row; i++){
    for(int j = 0;  j < col; j++){
      cout<<matrix[i][j];
    }
    cout<<endl;
  }
  return 0;
}