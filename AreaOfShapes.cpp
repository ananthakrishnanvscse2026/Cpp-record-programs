
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Shape
{
public:
    // Pure virtual function
    virtual float area() const = 0;

    // Virtual destructor
    virtual ~Shape() {}
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    float area() const override
    {
        return 3.14f * radius * radius;
    }
};

class Rectangle : public Shape
{
private:
    float length, breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    float area() const override
    {
        return length * breadth;
    }
};

class Triangle : public Shape
{
private:
    float base, height;

public:
    Triangle(float b, float h)
    {
        base = b;
        height = h;
    }

    float area() const override
    {
        return 0.5f * base * height;
    }
};

// Function using references
void displayArea(const Shape &s, const string &name)
{
    cout << "Area of " << name << ": "
         << s.area() << " sq.units" << endl;
}

int main()
{
    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(10, 8);

    // Base class pointer
    Shape *ptr;

    cout << fixed << setprecision(2);
    cout << "=== SHAPE AREA CALCULATOR ===" << endl;

    // Using pointers
    cout << "\nUsing Pointers:" << endl;

    ptr = &c;
    cout << "Circle Area: " << ptr->area() << endl;

    ptr = &r;
    cout << "Rectangle Area: " << ptr->area() << endl;

    ptr = &t;
    cout << "Triangle Area: " << ptr->area() << endl;

    // Using references
    cout << "\nUsing References:" << endl;

    displayArea(c, "Circle");
    displayArea(r, "Rectangle");
    displayArea(t, "Triangle");

    return 0;
}
