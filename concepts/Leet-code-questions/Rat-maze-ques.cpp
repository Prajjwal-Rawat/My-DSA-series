#include <iostream>
#include <vector>
using namespace std;

// -----------------------------           Rat - In - Maze - problem         ---------------------------------

// Consider a rat placed at (0, 0) in a square matrix mat of order n* n. It has to reach the destination at (n - 1, n - 1). Find all possible paths 
// that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' 
// (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents 
// that rat can be travel through it.
// Note: In a path, no cell can be visited more than one time. If the source cell is 0, the rat cannot move to any other cell. In case of no path, 
// return an empty list. The driver will output "-1" automatically.

// -----------------------------------------        Answer         ----------------------------------------


bool isSafe(int x, int y, vector<vector<int>> &matrix, vector<vector<int>> &visited, int n){
    if (x >= 0 && x < n && y >= 0 && y < n && matrix[x][y] == 1 && visited[x][y] == 0)     // isme humne conditions check kri hai ki rat aage ja skta hai ki nhi 
    {
        return true;
    }else{
        return false;
    }
    
}


void ratMaze(vector<vector<int>> &matrix, vector<vector<int>> &visited, int n, int x, int y, string str, vector<string> &ans){
    //   base case
    if (x == n-1 && y == n-1)
    {
        ans.push_back(str);
        return ;
    }

    visited[x][y] = 1;                 // tu iss function ke andr aa gya hai mtlv (0,0) location mai 1 tha isliye mene visited matrix mai bhi 1 kr diya 
    
    // Down
    int newx = x + 1;              // new variable liya hai agr down ja ske rat to position uski (x+1, y) ho jaegi 
    int newy = y;
    if (isSafe(newx, newy, matrix, visited, n))
    {
        str.push_back('D');                                    // D push kr diya agr rat down ja pata hai to 
        ratMaze(matrix, visited, n, newx, newy, str, ans);     // now new positions ke liye recursive call kr diya ek case humne smhal liya baki recursion smhal lega
        str.pop_back();                                        // now isme hume str se jb-jb base case reach hoga jb hum back-track krenge to hume vo str mai jo last tym dala tha usko khali bhi krte rhna hai 
    }

    // left

    newx = x;
    newy = y - 1;
    if (isSafe(newx, newy, matrix, visited, n))
    {
        str.push_back('L'); 
        ratMaze(matrix, visited, n, newx, newy, str, ans);
        str.pop_back(); 
    }

    // right

    newx = x;
    newy = y + 1;
    if (isSafe(newx, newy, matrix, visited, n))
    {
        str.push_back('R'); 
        ratMaze(matrix, visited, n, newx, newy, str, ans);
        str.pop_back(); 
    }

    // Up

    newx = x - 1;
    newy = y;
    if (isSafe(newx, newy, matrix, visited, n))
    {
        str.push_back('U'); 
        ratMaze(matrix, visited, n, newx, newy, str, ans);
        str.pop_back(); 
    }
    

    visited[x][y] = 0;              // now back-track krte tym hume jo jo path hum back track krte ja rhe hai unhe vapas 0 bhi krte jana hai visited matrix mai 
}




vector<string> findPath(vector<vector<int>> &matrix, int n){
    vector<string> ans;
    if (matrix[0][0] == 0)
    {
        return ans;
    }
    vector<vector<int> > visited(n, vector<int>(n,0));
    string str = "";
    int x = 0;
    int y = 0;

    ratMaze(matrix, visited, n, x, y, str, ans);
    return ans;

}



int main(){

  vector<vector<int> > matrix = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
  int n = 4;        //because matrix is 4*4 that's why 

  vector<string> result = findPath(matrix,n);
  if (result.size() == 0)
  {
    cout<< -1;
  }else {
    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
  }
    
}