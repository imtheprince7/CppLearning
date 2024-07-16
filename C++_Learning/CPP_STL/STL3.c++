#include<bits/stdc++.h>
using namespace std;

class SetAlgorithms{
    public:
        void mergeElement(vector<int> &, vector<int> &,vector<int> &);
        void setUnion(vector<int> &, vector<int> &,vector<int> &);
        void setIntersection(vector<int> &, vector<int> &,vector<int> &);


};
void SetAlgorithms ::mergeElement(vector<int> &v1, vector<int> &v2, vector<int> &v3 ){
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    vector<int> :: iterator it;
    for(it = v3.begin(); it !=v3.end(); it++){
        cout<<(*it)<<" ";
    }
}


void SetAlgorithms :: setUnion(vector<int> &v1, vector<int> &v2, vector<int> &v3 ){
    set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    vector<int> :: iterator it;
    for(it = v3.begin(); it !=v3.end(); it++){
        cout<<(*it)<<" ";
    }
}


void SetAlgorithms ::setIntersection(vector<int> &v1, vector<int> &v2, vector<int> &v3 ){
    set_intersection(v1.begin(),v1.end(), v2.begin(), v2.end(), v3.begin());
    vector<int> :: iterator it;
    for(it = v3.begin(); it !=v3.end(); it++){
        cout<<(*it)<<" ";
    }
}

int main(){
    SetAlgorithms set_algorithms;
     vector<int> v1 = {1, 3, 4, 5, 20, 30};
     vector<int> v2 = {1, 5, 6, 7, 25, 30};
     vector<int> v3 (v1.size() + v2.size());

    // Merge_Element
    cout<<" Merge Element using set_algorithms:"<<endl;
    set_algorithms.mergeElement(v1, v2, v3);

    // Set_Union
    cout<<"\n Set_Union Element using set_algorithms:"<<endl;
    set_algorithms.setUnion(v1, v2, v3);

    // Set_Intersection
    cout<<"\n Set_Intersection Element using set_algorithms:"<<endl;    
    set_algorithms.setIntersection(v1, v2, v3);

    

    return 0;
}