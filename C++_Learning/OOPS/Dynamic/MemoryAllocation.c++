#include<iostream>
#include<stdlib.h>
using namespace std;

class DynamicMemory{
    public:
        void malloc_dynamic_memory(int, int* &);
        void calloc_dynamic_memory(int, int* &);
        void realloc_dynamic_memory(int, int* &);
        void printElement(int, int* &);
};

//Memory allocation using malloc()
void DynamicMemory :: malloc_dynamic_memory(int size, int* &ptr){
    
        ptr = (int*) malloc(size* sizeof(int));
        if(ptr ==nullptr)
            cout<<"Memory hasn't been allocated "<<endl;
        else    
            // Assign value if memory has been allocated
            for(int i=0; i<size; i++){
                ptr[i] = i+1;
            }

        // Print element from allocated space.
        printElement(size, ptr);    
}

// Memory allocation using calloc()
void DynamicMemory :: calloc_dynamic_memory(int size, int* & ptr){

    if(ptr ==nullptr )
        cout<<"pointer is null"<<endl;
    else{    
        ptr = (int*)calloc(size, sizeof(int));
        if(ptr ==nullptr)
            cout<<"Memory hasn't been allocated "<<endl;
        else    
            // Assign value if memory has been allocated
            for(int i=0; i<size; i++){
                ptr[i] = i+1;
            }
    }

        // Print element from allocated space.
        printElement(size, ptr); 
}



// Memory allocation using realloc()
void DynamicMemory :: realloc_dynamic_memory(int size,  int* & ptr){
        int new_size, confirm;
        cout<<"Would you like to re_size the allocated memory yes/no (1/0):"<<endl;
        cin>>confirm;       
       do{
            cout<<"Enter the new Size"<<endl;
             cin>>new_size;
            ptr = (int*) realloc(ptr, new_size * sizeof(int));
                if(ptr ==nullptr)
                    cout<<"Memory hasn't been allocated "<<endl;
                else    
                // Assign value if memory has been allocated
                    for(int i=0; i<size; i++){
                        ptr[i] = i+1;
            }
            cout<<"Do you wanna continue yes/no (1/0):"<<endl; 
            cin>>confirm;

        }while(confirm == 1);

        // Print element from allocated space.
        printElement(new_size, ptr); 


}

// print value from dynamic allocated memory
void DynamicMemory :: printElement(int size, int* &ptr){
    for(int i=0; i<size; i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    free(ptr);
}


int main(){
    DynamicMemory dynamic_memory;
    int size =0;
    int *ptr =nullptr;
    cout<<"How many block of memory want to create: \t";
    cin>>size;
    
    dynamic_memory.malloc_dynamic_memory(size, ptr);
    dynamic_memory.calloc_dynamic_memory(size, ptr);
    dynamic_memory.realloc_dynamic_memory(size, ptr);

        // Print the element from allocated element of memory
        for(int i=0; i<size; i++){
            cout<<ptr[i]<<" ";
        }
        cout<<endl;

        return 0;
}