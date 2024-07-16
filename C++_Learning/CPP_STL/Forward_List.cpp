#include<iostream>
#include<forward_list>
using namespace std;

int main(){
    forward_list<int> list1 ={ 2,6,8,10};
    forward_list<int> list2 ={ 22,24,26,28,30};
    list1.insert_after(list1.begin(), 04);    
    // list1.clear();
    list1.emplace_front(0);
    // list1.reverse();

    list1.merge(list2);
    list1.remove(2);
    // list1.remove_if(2);

    for(auto const it : list1){
       std:: cout<<it<<" ";
    }
    std::cout<<endl;

    return 0;
}