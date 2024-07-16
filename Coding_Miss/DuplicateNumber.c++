#include<bits/stdc++.h>
using namespace std;

int find_duplicate(int arr[], int n){
    set<int> unseen;
    int answer = -1;
    for(int i=0; i<n; i++){
        if(unseen.find(arr[i]) != unseen.end()){
            answer = arr[i];
        }else{
            unseen.insert(arr[i]);
        }
    }
    return answer;

}
int main(){
   int arr[]  = {1,3,4,2,2};
   int n = sizeof(arr) / sizeof(arr[0]);
   cout<<"Duplicate Number:"<<" "<<find_duplicate(arr, n)<<endl;
    return 0;
}