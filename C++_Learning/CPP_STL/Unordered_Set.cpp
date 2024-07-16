#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
    unordered_set<int> uos ={1,2,3,4,5,6,7,8,9,8,7,6,5,4,3,2,1,0,0};

    auto search = uos.find(3);
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