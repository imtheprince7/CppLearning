#include<bits/stdc++.h>
using namespace std;


int main(){    
    vector<int> vect = {5, 10, 15, 20, 20, 23, 42, 45};

    sort(vect.begin(), vect.end());
    for(auto const elem: vect){
        cout<<elem<<" ";
    }
    cout<<endl;
    vector<int> :: iterator lower = lower_bound(vect.begin(), vect.end(),20);
    auto upper = upper_bound(vect.begin(), vect.end(),20);

    std::cout<<"Lower bound of 20 is    "<<(*lower)<<endl;
    std::cout<<"Upper bound of 20 is    "<<(*upper) <<endl;

    cout<<binary_search(vect.begin(), vect.end(), 23);


    return 0;
}