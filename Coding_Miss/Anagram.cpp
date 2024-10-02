#include<bits/stdc++.h>
using namespace std;

bool checkAnagram(string &str1, string &str2){
    // base case:
    if(str1.size() != str2.size())
        return 0;

 // --------------------------------------------  Method - 1  ----------------------------------------
    // logic to check anagram
   /*  sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for(int i=0; i<str1.size(); i++){
        if(str1[i] != str2[i])
                return false;
    }
    return true; 
    */
    
 // --------------------------------------------  Method - 2  ----------------------------------------
    // logic to check anagram

    if(str1.length() != str2.length())
        return false;

    unordered_map<char, int> umap;
    //Firstly store the value with its frequency
    for(int i=0; i<str1.length(); i++){
        umap[str1[i]]++;
    }

    // Now iterate and removce -1 from its frequency if it's availabe in existing umap.
    for(int i=0; i<str2.length(); i++){
        if(umap.find(str2[i]) !=umap.end()){
            umap[str2[i]] -= 1;
        }else{
            return false;
        }
    }

    // Loop over all keys and check if all keys are 0.
    // If so it means it is anagram.
    for(auto elem : umap){
        if(elem.second != 0)
            return false;
    }
    return true;




}
int main(){
    string a ="geeksforgeeks", b = "forgeeksgeek";
    bool answer = checkAnagram(a, b);
    if(answer == 1)
        cout<<"Given string follow anagram"<<endl;
    else
        cout<<"Given string doesn't follow anagram"<<endl;
    cout<<"Let's check the anagram or not this string"


    return 0;
}