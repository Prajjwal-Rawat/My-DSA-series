#include <iostream>
using namespace std;

// void print(int *poi){                   // * dikha rha hai idhr ki p jo hai vo ek pointer hai 
//    cout<<poi<<endl;
//    cout<<*poi<<endl;
// }



// int main(){
//   int num = 5;
//   int *poi = &num;

//   print(poi);             // idhr mene sirf address bheja hai ok
// }

// ------------------------------------------------------------------------------------------------------------


// void update(int *ptr){
//     ptr = ptr + 1;
// }

// int main(){
//     int num = 5;
//     int *ptr = &num;

//     cout<<"Before update "<<ptr<<endl;
//     update(ptr);
//     cout<<"after the update "<<ptr<<endl;       // so idhr koi change nhi hua kuki update function apna alg ek pointer p hai vo usme address change krega 
//     // but update function ke pass apna ek pointer to hai but usme jo address hai uski value nhi hai so vo address ko update krega to sirf apne block
//     // mai krega kuki uske pass hai ptr pointer and uske andr address but agr hum *ptr ko update krte hai mtlv uske andr jo address hai uski value ko
//     // to vo update function ke block mai nhi hai isliye usko main function mai aana pdega and then usko update krna hoga iska mtlv value agr 
//     // update krenge to vo dono ke liye hogi main ke liye bhi 

// }



// ------------------------------   value update krte hai to ---------------------

// void update(int *p){
//     *p = *p + 1;
// }

// int main(){
//     int num = 5;
//     int *p = &num;

//     cout<<"before "<<*p<<endl;
//     update(p);
//     cout<<"after "<<*p<<endl;
// }


