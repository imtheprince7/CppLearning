#include<iostream>
using namespace std;
/*
    structure & Union will comes for Embedded engineer
    becuase there have to optimize the memory and perform extra task in small amount of the memory.
*/
union myUnion{
    char bytes[4];
    unsigned int  value;
};

int main(){
    myUnion un;
    un.value = 0;
    un.value = 257;
    cout<<"H    "<<(int)un.bytes[0]<<endl;
    cout<<"E    "<<(int)un.bytes[1]<<endl;
    cout<<"L    "<<(int)un.bytes[2]<<endl;
    cout<<"L    "<<(int)un.bytes[3]<<endl;

    

    return 0;
}