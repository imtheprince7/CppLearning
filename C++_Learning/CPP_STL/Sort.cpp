#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
        int age;

};

int main(){
    vector<int> vect ={5,3,8,1,2,9,2,10,2,6,14,4,2,13,7,2,15,2,16};
    vector<int> :: iterator it;

    cout<<"Vector element before sorting"<<endl;
    for( it = vect.begin(); it !=vect.end(); it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;

    // Sorting the vector element
    sort(vect.begin(), vect.end());
    
    cout<<"Vector element after sorting"<<endl;
    for(auto const &elem : vect){
        cout<<elem<<" ";
    }
    cout<<endl;


 // Sorting the vector element in descending order
    sort(vect.begin(), vect.end(),greater<int>());
    
    cout<<"Vector element after sorting in descending order"<<endl;
    for(auto const &elem : vect){
        cout<<elem<<" ";
    }
    cout<<endl;

 // Count the occurance of '2' in the vector container

    cout<<"Occurance of 2 in vector:    "<<count(vect.begin(), vect.end(), 2);

 // Find the particula element into vector container : 16
    find(vect.begin(), vect.end(), 16) != vect.end() ? cout<<"\nElement found" : cout<<"\nElement not found";

    return 0;
}