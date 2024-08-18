#include<iostream>
using namespace std;

// Q --> linear search
// koi key di hui hai user ke duara usse hume linearly search krna hai ki vo array mai hai ki nhi 


bool Search(int arr[], int size, int key){
     for (int i = 0; i < size; i++)
     {
        if (arr[i] == key)
        {
            return 1;
        }
        
     }
     return 0;

}

int main(){

   int arr[10] = {4,10,11,5,2,9,3,6,8,1};
   int key;
   cout<<"Enter the value you want to search if it is there or not "<<endl;
   cin>>key;
    
    bool ispresent = Search(arr,10,key);
   if (ispresent)
   {
      cout<<"Your key is present ";
   }else{
    cout<<"Your key is not present ";
   }
   

}