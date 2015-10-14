//Name: Mario Martinez
//Date: 10/13/15
//Description: A single program that includes different functions.

#include <iostream>
#include <cassert>
#include <cmath>
#include <cstdlib>

using namespace std;

double feetToInches(double val); //converts feet to inches
void feetToInches(double val, double&  valB);

double computeRectangle(double valA, double valB);//computes the area of a rectangle
void computeRectangle(double valA, double valB, double& valC);

void computeArea (double valA, double valB, double& valArea, double& valPerimeter);//calculates the area and the parameter.

void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF);//computes the average and sum of 4 numbers.

void calcAreaPerimeter(double radius, double& area, double& perimeter);//computes the area and the parameter of a circle.

double calcArea(double length, double width);//computes the area of a rectangle

int main()
{
    const double e = 0.00001;
    double val, valB;

    //Test Cases for feetToInches return type double
    assert(fabs(feetToInches(1) - 12) < e);
    assert(fabs(feetToInches(5.3) - 63.6) < e);
    
    //Test cases for feetToInches void.
    feetToInches(2, val);
    assert(fabs(val - 24) < e);
    feetToInches(6.7, val);
    assert(fabs(val - 80.4) < e);
    
    //Test cases for computeRectangle return type double.
    assert(computeRectangle(4, 3) == 12);
    assert(computeRectangle(5.6, 7.9) == 44.24);
    
    //Test cases for computeRectangle void
    computeRectangle(4.3, 4, val);
    assert(fabs(val - 17.2) < e);
    computeRectangle(9.9, 7, val);
    assert(fabs(val - 69.3) < e);

    //Test cases for computeArea void
    computeArea(4.3, 1.2, val, valB);
    assert(fabs(val - 5.16) < e);
    assert(fabs(valB - 11) < e);
    
    //Test cases for stats
    stats( 4, 10, 2, 8, val, valB);
    assert(fabs(val - 6) < e);
    assert(fabs(valB - 24) < e);
    
    //Test cases for calcAreaPerimeter void
    calcAreaPerimeter(5.8, val, valB);
    assert(fabs(val - 105.6831549) < e);
    assert(fabs(valB - 36.4424672) < e);
    
    //Test cases for calcArea void
    assert(calcArea(3.2, 5.3) == 16.96);
    assert(calcArea(1.5, 1.7) == 2.55);

    return 0;
}

double feetToInches(double val)
{
    return 12 * val;
}

void feetToInches(double valA, double&  valB)
{
    valB = 12 * valA;
    return;
}

double computeRectangle(double valA, double valB)//computing area of a rectangle
{
    return valA * valB;
}

void computeRectangle(double valA, double valB, double& valC)//computing area of a rectangle
{
    valC = valA * valB;
    return;
}

void computeArea (double valA, double valB, double& valArea, double& valPerimeter)
{
    valArea = valA * valB;
    valPerimeter = 2 * valA + valB * 2;
}

void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF)
{
    valE = (valA + valB + valC + valD) / 4;
    valF = valA + valB + valC + valD;

}

void calcAreaPerimeter(double radius, double& area, double& perimeter)
{
    const double PI = 3.141592;
    area = PI * radius * radius;
    perimeter = 2 * PI * radius;

}

double calcArea(double length, double width)
{
    return length * width;

}
