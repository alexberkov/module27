#pragma once
#include <iostream>
#include <vector>

using namespace std;

enum Types {
    NA = -1, A = 0, B, C
};

class Task {
    int type = NA;
public:
    void setType(int t);
    void putType();
    int getType() const;
};

class Worker {
protected:
    Task currentTask;
public:
    Task getTask();
    void setTask(int t);
};

class Manager: public Worker {
protected:
    int number = 0;
    vector<Worker> team;
public:
    explicit Manager(int i);
    void delegate();
    int freeEmployees();
    vector<Worker> getTeam();
};

class Director: public Worker {
    vector<Manager> management;
public:
    Director();
    void setTask();
    void delegate();
    bool busy();
    void show();
};