#ifdef __io__
#define __io__
#include<iostream>
using namespace std;
#endif

#include "Object.cpp"

class Toyfactory{
    public:
        static Toy *createToy(int type){
        Toy *toy = nullptr; 

       switch (type) {
                case 1:
                    toy = new Car();
                    break;
                
                case 2: 
                    toy = new Bike();
                    break;
                
                case 3: 
                    toy = new Plane();
                    break;
                case 4: 
                    toy = new Helicopter();
                    break;
                case 5: 
                    toy = new Boat();
                    break;
                
                default: 
                    cout << "Invalid toy type, please re-enter type:" << endl;
                    return nullptr;
            }

            // After creating the toy, call its methods
            if (toy != nullptr) {
                toy->prepareParts();
                toy->combineParts();
                toy->assembleParts();
                toy->applyParts();
            }
            return toy;
    }
};
//Class end here