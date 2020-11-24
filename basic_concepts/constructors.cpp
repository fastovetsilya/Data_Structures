#include<iostream>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle() // Default constructor
    {
        length=0;
        length=0;
    }
    Rectangle(int l, int b) // Parameterized onstructor
    {
        length=l;
        breadth=b;
    }
    int area() // Actual methods 
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
    void setLength(int l) // Mutator functions
    {
        length=l;
    }
    void setBreadth(int b)
    {
        breadth=b;
    }
    int getLength() // Accessor functions
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    ~Rectangle() // Destructor
    {
        cout<<"Destructor";
    }
};

int main()
{
    Rectangle r(10,5);
    cout<<"Area "<<r.area()<<endl;
    cout<<"Perimeter "<<r.perimeter()<<endl;
    return 0;
}