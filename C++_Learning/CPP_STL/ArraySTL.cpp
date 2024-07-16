#include<iostream>
#include<array>
using namespace std;


int main(){
    array<int, 6> arr;
    arr = {4,5,6,7};
    for(int i=0; i<arr.size(); i++){
        cout<<arr.at(i)<<" ";
    }
    cout<<endl;
    //STL array some basic funtion uses:

    // Finding the front element directly from the array_stl"
        cout<<"Array front element"<<arr.front()<<endl;

    // Finding the back element directly from the array_stl"
        cout<<"Array back element"<<arr.back()<<endl;

    
    // Finding the size of array directly from the array_stl"
        cout<<"Size of array"<<arr.size()<<endl;


    // Finding whether array is empty or not
        if(arr.empty() ==0)
            cout<<"Array is not empty:"<<endl;
        else   
            cout<<"Array is empty:"<<endl;
    
    return 0;
}