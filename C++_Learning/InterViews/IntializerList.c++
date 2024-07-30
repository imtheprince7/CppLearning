#include<bits/stdc++.h>
using namespace std;

/*
    ------------- Initializer List ---------------------------
    This is used to initialize data members of the class
    ----- Two WAYS ----
    1. Using { } this is uniform initialization & should be prefered.
    2. Using ( ) this is rarely used to set the value within the range of dataType [ Not preferable]

    { } :- If we are narrowing the dataType during initialization of data member then
            --> It will warn and show the output based on range of narrowed data-type.
            -->  It comes under initialization parts.
            
    ( ):- It will directly narrow the value without warning.
          -->  It comes under assignment parts.
          --> Not recommended to use commonly. 
          --> Use when you already know the range of dataType and value limit which you're accepting.

*/

class Test{
private:
    int firstInt, secondInt;
    char firstChar, secondChar;

public:
    Test(int fi, int si, char fc) : firstInt{fi}, secondInt{si}, firstChar{fc} {  } // Initializer List:

    void display(){
        cout<<"value of FirstInt    "<< firstInt<<endl;
        cout<<"value of secondInt   "<< secondInt<<endl;        
        cout<<"value of firstChar   "<< firstChar<<endl;
    }
};
int main(){
    Test tt(56,65,788);
    tt.display();

    return 0;
}