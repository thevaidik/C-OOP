#include <iostream>
#include <memory>
#include <cmath>
using namespace std;

class Shape
{
public:
    virtual double getArea() = 0;
};

class Cylinder: public Shape
{
    double radius, height;
public:
    Cylinder(double radius, double height):radius{radius}, height{height}{}
    double getArea() override { return 2 * M_PI * radius * height; }
};

class Sphere : public Shape
{
    double radius;
public:
    Sphere(double radius):radius{radius}{}
    double getArea() override { return 4 * M_PI * radius * radius;  }
};

int main()
{
    string choice;

    cout << "please enter s for sphere or c for cylinder\n";

    cin >> choice;

    unique_ptr<Shape> shape;

    if ( choice == "s")
    {
        double radius;
        cout << "please enter radius\n";
        cin >> radius;
        shape = make_unique<Sphere>( radius );
    }
    else if ( choice == "c")
    {
        double radius, height;
        cout << "please enter radius and height\n";
        cin >> radius >> height;
        shape = make_unique<Cylinder>( radius, height);
    }
    else
    {
        cout << "invalid choice\n";
        return -1;
    }

    cout << "the area of the shape is " << shape->getArea() << "\n";
}