#include<iostream>
using namespace std;

// question --> finding min max value of given array

int maxValue(int arr[],int size){      // parameters ya arguments mai humne bta diya ki ye array hai by this arr[]
    
    int max = arr[0];                            // agr hum niche wala in build func use krte to maxi = arr[0] (maxi is just a variable name )
    for (int i = 0; i <size; i++)
    {
            //  maxi = max(maxi,arr[i]);        // so ek ye inbuilt function bhi hai isme agr hum iska use krte to hume if lgane ki jrurt nhi thi
        if (max < arr[i])                       // ye line mtlv check kregi ki maxi or arr[i] mai se kon max hai then usko maxi variable mai store kr dega
        {
            max = arr[i];
        }
    }
    return max;
    
}
int minValue(int arr[],int size){
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        //    mini = min(mini,arr[i]);       // same for the minimum
        if (min > arr[i])
        {
            min = arr[i];
        }
        
    }
    return min;
    
}
int Sum(int array[],int Soize){
     int sumof = 0;
     for (int i = 0; i < Soize; i++)
     {
        sumof += array[i];
     }
     return sumof;
     
}

int main(){
   
   int size;
   cout<<"Enter the size of the array "<<endl;
   cin>>size;
   // now hum size variable nhi dalenge iske andr kuki vo bad practice hogi so hum jada hi leke chlte hai arr ki length 
   //In C++, using an input variable directly for array size declaration is not allowed in standard C++. 
   // This is because C++ requires array sizes to be known at compile time, while the value of an input variable is only determined at runtime.
   //Compile-time vs. Runtime:
   // C++ allocates memory for arrays on the stack at compile time. This means the compiler needs to know the exact size of the array beforehand. 
   //  Input variables, however, receive their values during program execution, which is too late for the compiler to allocate the correct amount of memory.
   int arr[100];     
   cout<<"Enter the values "<<endl;
   for (int i = 0; i < size; i++)
   {
        cin>>arr[i];                // humne for loop chlaya hai taki hum value le ske array ke index ke hisab se
   }

   cout<<"Your max value is = "<<maxValue(arr,size)<<endl <<"And the min value is = "<<minValue(arr,size)<<endl;

  

//   Q---> 2
// question --> take arrays values and size and give the sum of the arrays values

  int Soize;
  cout<<"Enter the soize of the array "<<endl;
  cin>>Soize;

  int array[100];
  cout<<"Enter the values "<<endl;
  for (int i = 0; i < Soize; i++)
  {
    cin>>array[i];
  }

  cout<<"Sum of the values is = "<<Sum(array,Soize);
  
}

