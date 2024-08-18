#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){

    vector<int> arr;

    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(8);

    cout<<binary_search(arr.begin(),arr.end(), 5)<<endl;    // 5 element hai ki nhi if hai to it will return true(1) otherwise 0

    rotate(arr.begin(), arr.begin()+3, arr.end());       // rotarte array from begin +3 to the end
    for (int i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    sort(arr.begin(), arr.end());    // is sort function ki working kya hai kese chl rha hai ye
    for (int i:arr)                  // so ye sort function based hai introsort mai means -- 3 algorithm ke combination se bna hai ye 
    {                                // quick sort , heap sort, insertion sort
        cout<<i<<" ";
    }
}