#ifdef __io__
#define __io__
#endif

#include<iostream>
using namespace std;

class Toy{
public:
       string name ;
       float price = 1100.50;
       virtual void prepareParts() = 0;
       virtual void combineParts() = 0;
       virtual void assembleParts()= 0;
       virtual void applyParts()= 0;
       virtual void showProduct() =0; 
       
};

class Car : public Toy{
    // make all constructor private or proctected !
public:
    void prepareParts() override { cout << "Preparing car parts...!!" << endl; }
    void combineParts() override { cout << "Combining car parts...!!" << endl; }
    void assembleParts() override { cout << "Assembling car parts...!!" << endl; }
    void applyParts() override { cout << "Applying car parts...!!" << endl; }
    void showProduct(){ cout<< "Name is:"<<name <<endl<<"Price"<<" "<<price<<endl; }
};
class Bike : public Toy{
public:
    void prepareParts() override { cout << "Preparing bike parts...!!" << endl; }
    void combineParts() override { cout << "Combining bike parts...!!" << endl; }
    void assembleParts() override { cout << "Assembling bike parts...!!" << endl; }
    void applyParts() override { cout << "Applying bike parts...!!" << endl; }
    void showProduct(){ cout<< "Name is:"<<name <<endl<<"Price"<<" "<<price<<endl; }
};

class Plane : public Toy{
public:
    void prepareParts() override { cout << "Preparing plane parts...!!" << endl; }
    void combineParts() override { cout << "Combining plane parts...!!" << endl; }
    void assembleParts() override { cout << "Assembling plane parts...!!" << endl; }
    void applyParts() override { cout << "Applying plane parts...!!" << endl; }
    void showProduct(){ cout<< "Name is:"<<name <<endl<<"Price"<<" "<<price<<endl; }    
};

class Helicopter : public Toy{
public:
    void prepareParts() override { cout << "Preparing Helicopter parts...!!" << endl; }
    void combineParts() override { cout << "Combining Helicopter parts...!!" << endl; }
    void assembleParts() override { cout << "Assembling Helicopter parts...!!" << endl; }
    void applyParts() override { cout << "Applying Helicopter parts...!!" << endl; }
    void showProduct(){ cout<< "Name is:"<<name <<endl<<"Price"<<" "<<price<<endl; }    
};

class Boat : public Toy{
public:
    void prepareParts() override { cout << "Preparing Boat parts...!!" << endl; }
    void combineParts() override { cout << "Combining Boat parts...!!" << endl; }
    void assembleParts() override { cout << "Assembling Boat parts...!!" << endl; }
    void applyParts() override { cout << "Applying Boat parts...!!" << endl; }
    void showProduct(){ cout<< "Name is:"<<name <<endl<<"Price"<<" "<<price<<endl; }    
};