#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
  // Adding element in the vector  
    v.push_back(12); 
    v.push_back(14); 
    v.push_back(15); 
    v.push_back(16); 
    v.push_back(17); 
    v.push_back(18); 
    v.push_back(19); 
    v.push_back(20); 
    v.push_back(21); 
    v.push_back(22); 
    v.push_back(25);
    
    // Finding the vector size and capacity respectively
    cout<<"Vector size"<<v.size() <<" "<<"vector capacity"<<" "<<" "<<v.capacity()<<endl;

    // Vector element
    for(int vector_ele: v){
         cout<<"Vector size"<<v.size() <<" "<<"vector capacity"<<" "<<" "<<v.capacity()<<endl;
        cout<<vector_ele<<" ";
    }
    cout<<endl;
    return 0;
}