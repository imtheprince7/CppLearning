#include<iostream>
#include<unordered_set>


// It also follow caching property: Means same elements values come togther
using namespace std;

int main(){
    unordered_multiset<int> uos ={1,2,3,4,5,6,7,8,9,8,7,6,5,4,3,2,1,0,0};
    // Output:  1 1 2 2 3 3 4 4 5 5 6 6 7 7 8 8 9 0 0
    auto search = uos.find(32);
    if(search !=uos.end()){
        cout<<"Found"<<" "<<(*search)<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }

    for(auto &elem : uos){
        cout<<elem<<" ";
    }

    return 0;
}