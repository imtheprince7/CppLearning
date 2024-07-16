#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int, int> ump ={
        {2,3}, {4,5},{6,7},{8,9},{10,11}
    };

    for(auto const &elem : ump){
        cout<<elem.first <<" "<<elem.second<<endl;
    }
    
    auto search = ump.find(10);
    if(search != ump.end()){
        cout<<"Found"<<" "<<search->first <<" "<<search->second<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }


    return 0;
}