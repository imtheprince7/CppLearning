#include<bits/stdc++.h>
using namespace std;

vector<int> findDuplicate(vector<int> array,int size){
    set<int>unseen;
    vector<int> answer;

    for(int i=0; i<size; i++){
            if(unseen.find(array[i]) != unseen.end()){
                answer.push_back(array[i]);
            }else{
                unseen.insert(array[i]);
            }
    }
    return answer;


}
int main(){
    vector<int> array={1, 2, 3, 6, 3, 6, 1};
    vector<int> answer = findDuplicate(array, array.size());
    for(auto const elem : answer){
        cout<<elem<<" ";
    }
    return 0;
}