#include<iostream>

void addition(int firstNumber, int secondNumber){
    std::cout<<"Addition of two number is:"<<" "<<firstNumber+secondNumber<<std::endl;
}

void subtraction(int firstNumber, int secondNumber ){
   std::cout<<"Subtraction between two number is:"<<" "<<firstNumber - secondNumber<<std::endl;
}

void multiplication(int firstNumber, int secondNumber){
    std::cout<<"multiplication between two number is:"<<" "<<firstNumber * secondNumber<<std::endl;
}

void division(int firstNumber, int secondNumber){
     std::cout<<"division between two number is:"<<" "<<firstNumber / secondNumber<<std::endl;
}

void remainder(int firstNumber, int secondNumber){
     std::cout<<"Remainder between two number is:"<<" "<<firstNumber % secondNumber<<std::endl;
}
int main(){
    // creating function_pointer_array for all arithmetic_operation()
    int choice, firstNumber, secondNumber;
        
    void (*function_pointer_array[]) (int, int) = {addition, subtraction, multiplication, division, remainder};
    std::cout<<"Chose any one option to perform arithmatic operation"<<std::endl;
    std::cout<<"1. Addition \n2. Subtration \n3. Multiplication  \n4. Division \n5. Remainder"<<std::endl;
    std::cin>>choice;

    if(choice<1 || choice >5){
        std::cout<<"Please chose your option between 1 to 5"<<std::endl;
        return 0;
    }else{
        std::cout<<"Enter two number to perform the operation"<<std::endl;
        std::cin>> firstNumber >> secondNumber;
        function_pointer_array[choice-1](firstNumber, secondNumber);
    }


    

    return 0;

}