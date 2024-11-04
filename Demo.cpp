#include<iostream>
using namespace std;
class Point{
    public:
    int x,y;
    
    Point(){ } 
    Point(int x, int y): x{x}, y{y} {  }
    
    // Operator overloading  ( + )
    Point operator + (const Point &rhs){
        Point result;
        result.x = x + rhs.x;
        result.y = y + rhs.y;  
        return result;
     }


    // Operator overloading  ( * )
    Point operator* (const Point &rhs){
        Point result;
        result.x = x * rhs.x;
        result.y = y * rhs.y;  
        return result;
     }


    // Operator overloading  ( * )  DIAGONAL_SUBTRACTION
    Point operator - (const Point &rhs){
        Point result;
        result.x = x - rhs.y;
        result.y = y - rhs.x;  
        return result;
     }
};

int main(){
    Point point1(1,2), point2(3,4);
    cout<<point1.x << " " <<point1.y<<endl;
    cout<<point2.x << " " <<point2.y<<endl;

// Operator overloading  ( + )
     Point point3 = point1.operator+ (point2);     
     cout<<"Sum of two points are:"<<endl;
     cout<<point3.x << " " <<point3.y<<endl;

// Operator overloading  ( * )     
     Point point4 = point1.operator* (point2);     
     cout<<"Multiplication of two points are:"<<endl;
     cout<<point4.x << " " <<point4.y<<endl;

// Operator overloading  ( * )  DIAGONAL_SUBTRACTION
     Point pt5 = point1.operator- (point2);     
     cout<<"Sum of two points are:"<<endl;
     cout<<pt5.x << " " <<pt5.y<<endl;


    return 0;
}


