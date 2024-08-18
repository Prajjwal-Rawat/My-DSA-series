#include <iostream>
using namespace std;


//          2D ARRAYS


bool isPresent(int arr[][4], int row, int target){
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
            
        }
        
    }
    return false;
}


int main(){
    // int arr[3][4];
    // cout<<"Enter the values"<<endl;

    // // row wise input -- mtlv phle row mai jaengi values

    // for (int row = 0; row < 3; row++)
    // {
    //     for (int colum = 0; colum < 4; colum++)
    //     {
    //         cin>>arr[row][colum];
    //     }
        
    // }
    // // printing
    // cout<<"Printing row wise -means phle value row mai jaengi"<<endl;
    // for (int row = 0; row < 3; row++)
    // {
    //     for ( int colum = 0; colum < 4; colum++)
    //     {
    //         cout<<arr[row][colum]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // int arr2[3][4];
    // cout<<"Enter the values for column wise printing "<<endl;

    // for (int col = 0; col < 4; col++)
    // {
    //     for (int row = 0; row < 3; row++)
    //     {
    //         cin>>arr2[row][col];
    //     }
    // }
    
    // cout<<"Printing column wise - means phle column mai jaengi values"<<endl;

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout<<arr2[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    // // when i will give input 

    // int arr3[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};  // so row wise honge assign 
    // cout<<"row-wise"<<endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout<<arr3[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    

    // // but mai chata hu ki mai khud dalu elements ki merko kon kha chaiye to

    // int arr4[3][4] = {{1,4,7,10},{2,5,8,11},{3,6,9,12}};   // so mai row wise daal skta hu aapne hisab se like first row mai kon kon se element aaenge 
    // cout<<"my wise mere tarike se "<<endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout<<arr4[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }




// ----------------------------            search Target value               --------------------------------



    // function mai kese bheje 2d array ko 

    int array[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int target;
    cout<<"Enter the element you want to search in the array "<<endl;
    cin>>target;


    

    if (isPresent(array,3,target))
    {
        cout<<"Yes your element is present "<<endl;
    }else{
        cout<<"No your element is not present "<<endl;
    }
   
}