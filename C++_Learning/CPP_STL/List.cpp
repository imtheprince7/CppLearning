#include<iostream>
#include<list>
using namespace std;

int main(){
list<int> lis1 ={2,6,8,10};
list<int> lis2 ={22,16,18,40};
lis1.insert(lis1.begin(), 0);

lis1.push_back(12);
lis1.push_front(-2);
lis1.merge(lis2);

lis1.reverse();

// lis1.emplace_after(8, 5);
lis1.emplace_back(10);



for(auto const it : lis1){
    cout<<it <<" "; 
}
cout<<endl;
return 0;
}