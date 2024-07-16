#include<bits/stdc++.h>
using namespace std;
void findDuplicates(vector<int>arr){
    unordered_set<int> unseen;
    unordered_set<int> seen;
    int total_duplicates = 0;
    for(auto nums : arr){
        if(unseen.find(nums) != unseen.end()){
            total_duplicates++;
            seen.insert(nums);
        }else{
            unseen.insert(nums);
        }
    }
    cout<<"Total numbers of duplicates:"<<" "<<total_duplicates<<endl;
    for( auto const elements : seen){
        cout<<elements<<" ";
    }
}

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9,10,11,9,6,5,4,3,2,1};
    // ,3,2,1,3,5,7,6,7,8,5,5,4,3,3,1,};

    findDuplicates(v);
    return 0;
}