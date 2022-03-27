//Main.cpp 

#include<iostream>
using namespace std;
#include"CartesianSystem.h"

int main()
{
    // Creation of three objects
    CartesianSystem point_1(1,1);
    CartesianSystem point_2(5,8);
    CartesianSystem point_3(9,4);
    cout<<"The first point is:"<<endl;
    point_1.printXY();
    cout<<endl;
    cout<<"The second point is:"<<endl;
    point_2.printXY();
    cout<<endl;
    cout<<"The Third point is:"<<endl;
    point_3.printXY();
    return 0;
}


--------------------------------------------------------------------------------------------
//File CartesianSystem.h

// In this file, we will have our class
class CartesianSystem
{
    // In this class we are defining the points of the cartesian system(XOY)
    float x,y;
    //This is the Declaration of the default constructor--This Constructor will import by default the value Zero, to both of the variables(x and y), although 
    // Because we are at the beggining of understanding the classes, we will import the values of Zero, in the body of the constructor
    public:
    CartesianSystem();
    //Second Constructor, which has parameters(x,y). This parameters will take the new point, which is imported to them
    CartesianSystem(float new_x,float new_y);
    // Creation of getters and Setters
    //We start with Setters
    void set_x(float new_x);
    void set_y(float new_y);
    //getters
    float get_x()const;
    float get_y()const;
    //Function-Method, which will help us to print the values of x and y
    void printXY();
    
};
--------------------------------------------------------------------------------------------
//File CartesianSystem.h

#include<iostream>
using namespace std;
#include"CartesianSystem.h"
// In this File we will have the bodies of the functions and of the constructors, as well as the destractors
CartesianSystem::CartesianSystem()
{
    x=0.0;
    y=0.0;
}
CartesianSystem::CartesianSystem(float new_x,float new_y)
{
    x=new_x;
    y=new_y;
}
void CartesianSystem::set_x(float new_x)
{
    x=new_x;
}
void CartesianSystem::set_y(float new_y)
{
    y=new_y;
}
float CartesianSystem::get_x() const
{
    return x;
}
   float CartesianSystem::get_y() const
{
    return y;
} 
void CartesianSystem::printXY()
{
    cout<<"("<<x<<","<<y<<")";
}