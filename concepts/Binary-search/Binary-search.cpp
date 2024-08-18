#include <iostream>
using namespace std;


int binarySearch(int arr[], int size, int key){

    int startIndex = 0;
    int endIndex  = size-1;
    
    while (startIndex <= endIndex)
    {    
        // updating midIndex each time
        //  int midIndex = (startIndex + endIndex)/2;  // isko hum modify kr denge taki integer ki value overflow na ho means agr starting index maxint ho
                                                    // and end index hi maxint ke hi aas pass ho to vo dono plus hoke to int ki value se bhr chle jaenge na isliye
         int midIndex = startIndex + (endIndex - startIndex)/2;                             // isko hum ese bhi likh skte hai 
         if (arr[midIndex] == key)
         {
            return midIndex;
         }
         else if (key > arr[midIndex])
         {
            startIndex = midIndex + 1;
         }else{
            endIndex = midIndex - 1;
         }
    }
    return -1;
}


int main(){
    int Evenarr[6] = {3,5,6,8,9,15};
    int Oddarr[7] =  {1,3,10,13,19,23,29};

    int evenIndex = binarySearch(Evenarr, 6, 5);
    cout<<"Index of key 5 is "<<evenIndex<<endl;

    int oddINdex = binarySearch(Oddarr, 7, 1);
    cout<<"index of key 1 for odd is "<<oddINdex;

  return 0;
}