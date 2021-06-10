#pragma once
#include <iostream>
#include <vector>

using namespace std;

enum Types {
    NA = -1, A = 0, B, C
};

class Task {
public:
    int type = NA;
};

class Worker {
public:
    Task currentTask;
};

class Manager: public Worker {
public:
    int number = 0;
    vector<Worker> team;
    explicit Manager(int i);
    void delegate();
    int freeEmployees();
};

class Director: public Worker {
public:
    vector<Manager> management;
    Director();
    void getTask();
    void delegate();
    bool busy();
    void show();
};