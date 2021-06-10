#pragma once
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

class Point {
public:
    double x = 0, y = 0;
    Point();
    Point(double a, double b);
    void getPoint();
    void showPoint() const;
};

class Shape {
public:
    Point center;
    string color;
    Shape();
    void getColor();
};

class Rectangle: public Shape {
public:
    double width = 0, height = 0;
    Rectangle();
    Rectangle(Point c, double w, double h);
    void getSize();
    double area() const;
    void show();
};

class Circle: public Shape {
public:
    double radius = 0;
    Circle();
    Rectangle zone() const;
    double area() const;
};

class Square: public Shape {
public:
    double side = 0;
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