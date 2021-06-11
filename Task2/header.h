#pragma once
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

class Point {
    double x = 0, y = 0;
public:
    Point();
    Point(double a, double b);
    void setPoint();
    pair<double, double> getPoint() const;
    void showPoint() const;
};

class Shape {
protected:
    Point center;
    string color;
public:
    Shape();
    void getColor();
};

class Rectangle: public Shape {
    double width = 0, height = 0;
public:
    Rectangle();
    Rectangle(Point c, double w, double h);
    void getSize();
    void setCenter();
    double area() const;
    void show();
};

class Circle: public Shape {
    double radius = 0;
public:
    Circle();
    Rectangle zone() const;
    double area() const;
};

class Square: public Shape {
    double side = 0;
public:
    Square();
    double area() const;
    Rectangle zone() const;
};

class Triangle: public Shape {
    double side = 0, support = 0;
public:
    Triangle();
    double height() const;
    double area() const;
    Rectangle zone() const;
};