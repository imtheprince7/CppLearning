#include<bits/stdc++.h>
using namespace std;
 int binarySearch(int arr [], int target, int n){
        int left =0, right = n-1;

        while(left <=right){
            int middle = left + (right-left)/2;

            if(arr[middle] == target)
                    return middle;
            else if(arr[middle]< target)
                 left = middle +1 ; 
            else    
               right =middle-1;
        }
        return -1;
 }

int main(){

    int arr[] ={-1,0,3,5,9,12};
   int size = sizeof(arr)/ sizeof(arr[0]);
    cout<<binarySearch(arr,3, size)+1;
    return 0;
}