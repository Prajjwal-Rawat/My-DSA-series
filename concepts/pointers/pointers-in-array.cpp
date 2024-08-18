#include <iostream>
using namespace std;


// int main(){
//     int arr[10] = {2,5,6,7,9};

//     cout<<"Adress of first element in array is "<<arr<<endl;
//     // arr is basically a pointer
    
//     // we can also access address by this
//     cout<<"0th index address is "<<&arr[0]<<endl;
//     cout<<"address of 1st index is "<<&arr[1]<<endl;

//     // agr mai * lga du arr ke aage jese pointer mai krte hai to vo value deta hai star mtlv value so let's see
//     cout<<"value of the first element jisme arr ka address store hai "<<*arr<<endl;
//     cout<<"1st index ki value is "<<*(arr + 1)<<endl;   // arr phle address ko point kr rha hai and plus 1 mtlv dusre address ko and star mtlv uski value
//     cout<<"agr mai ese kru to "<<*(arr) + 1<<endl;  // to arr phla index and star uski value mtlv 2 and plus 1 mtlv 3 

//     int *poi = &arr[0];
//     cout<<"poi mai jo save hai address "<<poi<<endl;
//     cout<<"arr mai jo save hai address "<<arr<<endl;
//     cout<<"agr mai & lgau arr ke aage to "<<&arr<<endl;   // arr ka jo address hai vo hi arr ke andr jo address save hai same hai 
//     cout<<"agr mai & lgau poi ke aage to "<<&poi<<endl;   // pointer ka address alg hai 
//     cout<<"value of poi "<<*poi<<endl;
//     cout<<"value of arr "<<*arr<<endl;

//     cout<<"size of pointer poi is "<<sizeof(poi)<<endl;    // pointer ek box hai jisme address hai jo ki 8 byte ka hota hai
//     cout<<"size of arr is "<<sizeof(arr)<<endl;        // but in arr 4 byte ka ek box hai and 10 usme int block hai to 4*10 = 40bytes
//     cout<<"*poi ka size nikalu to mai 4 aaega ku kuki usme ek int value store hai jo ki 4 byte ki hai "<<sizeof(*poi)<<endl;
//     cout<<"agr mai arr mai & lga ke size nikalta to vo bhi 8 hi deta kuki hum address ka size nikal rhe hai "<<sizeof(&arr)<<endl;

// }



// -----------------------------      pointers in character array          ----------------------------------------

int main(){
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";     // 4 character isliye daale hai kuki 1 box null character ke liye hota hai 


    // so cout jo hai character array ke liye different tarike se kaam krta hai so agr mai khu ki 

    cout<<"arr ko print kru to "<<arr<<endl;
    cout<<"ch ko print kru to "<<ch<<endl;       // so ye content dega // output = abcde
    cout<<"agr mai & lga ke print kru to ch ko dekhte hai "<<&ch<<endl;   // ye to address de rha hai 
    cout<<"agr mai & lga ke index bhi sath mai du to kya hoga "<<&ch[0]<<endl;  // but mai index daal de rha hu to ye frse content dene lg ja rha hai 
    cout<<"star lga ke kya hoga isme "<<*ch<<endl;   // so phla character de rha hai 
    // cout<<"agr star lga ke index ke sath du to "<<*ch[0]<<endl;   // ye kaam nhi kr rha hai error de rha hai ku pr 

    // now agr pointer se kru to 

    char *ptr = &ch[0];
    cout<<"pointer ptr "<<ptr<<endl;   //so pointer ptr bhi content print krega kuki cout ki working alg hai char ke liye
    // so ptr mai address to hoga ch ke phle character ka but jb hum print kre hai isko to compiler uss address se null value tk print kr rha hai 

    cout<<"agr mai star lga ke print kru to ptr ko "<<*ptr<<endl;  // so jo address store tha uski value aa gai mtlv 'a'
    cout<<"address of ptr "<<&ptr<<endl;
    cout<<"mai 1st index print krna chau to "<<*(ptr + 1)<<endl;

    char temp = 'z';   // isme null character nhi hai kuki ek hi charcter ke liye initialize kia hai 
    char *poi = &temp;
    cout<<poi<<endl;   // so phle to z print krega then ye 4byte agge bdta jaega mtlv agle address mai jb tk isko koi null character nhi milta 
    // so ye kch bhi ant sant print krta jaega
}