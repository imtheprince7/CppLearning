#include<iostream>
#include<vector>
using namespace std;


template<typename T>

T addAll(vector<T> list){
    T totalSum =0;
    for(auto &element : list){
        totalSum +=element;
    }
    return totalSum;
}


template<typename U>
U addAllString( vector<U> list){
        U asciiValueSum =0;

        for( int i=0; i<list.size(); i++){
            cout<<list[i]<<" ";
            // int ch = 'a' - element;
            // asciiValueSum += ch;
        }
        return asciiValueSum;

    }

int main(){
    vector<int> vectInt ={1, 3, 5, 7, 9, 11, 13, 15};
    vector<double> vectDouble ={2.0, 4.0, 6.0, 8.0, 10.0, 12.0, 14.0, 16.0};
    vector<string> vectString = {"abc", "def", "ghi"};
    vector<string> vectString = {"abcdefghijkl"};

    cout<<addAll(vectInt)<<endl;
    cout<<addAll(vectDouble)<<endl;
    cout<<addAllString(vectString)<<endl;


    return 0;
}