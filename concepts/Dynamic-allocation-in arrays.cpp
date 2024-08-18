#include <iostream>
using namespace std;

                                                        // Heap Memory
// ----------------------------------------       Dynamic allocation in 1D array            ------------------------------------


// Syntax = int *arr = new int[n];

// int sumArr(int *arr, int n){
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }
//     return sum;
// }

// int main()
// {
//    int n;
//    cout<<"Enter the size of array "<<endl;
//    cin>>n;

//    int *arr = new int[n];

//    cout<<"Enter the values of array "<<endl;
//    for (int i = 0; i < n; i++)
//    {
//        cin>>arr[i];
//    }
   
//    cout<<"your array values is "<<endl;
//    for (int i = 0; i < n; i++)
//    {
//       cout<<arr[i]<<" ";
//    }cout<<endl;


//    cout<<"Sum of the values of the array is "<<sumArr(arr, n);
//    delete [] arr;
   
// }




// ----------------------------------           Dynamic allocation of 2D array                 -----------------------------

// Synatx =>      int **arr = new int*[n];



int main()       
{
    // so let's say merko n*n ki matrix bnani hai 3*3 ki
    int n;
    cout<<"Enter the row of matrix "<<endl;
    cin>>n;

    int m;
    cout<<"Enter the column of the matrix "<<endl;
    cin>>m;

    int **arr = new int* [n];                           // it created a pointer array in heap memory which points the multiple array
  
    // now i will create array corrosponding to these pointers

    for (int i = 0; i < n; i++)          // idhr n rows ko hi drsha rha hai kuki merko array rows jitni hi bnane hai 
    {
        arr[i] = new int [m];            // so idhr mene hr ek pointer ke liye array bnaya hai m(column) size ka
    }                                  

    cout<<"Enter the values for the matrix "<<endl;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Your matrix is looks like "<<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    // Deallocating memory for arrays
    for (int i = 0; i < n; i++)
    {
        delete [] arr[i];
    }

   // Deallocating memory for pointer array 
   delete [] arr;
       
    
}

