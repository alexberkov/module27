#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Branch {
protected:
    string elf = "None";
    bool empty = true;
public:
    Branch();
    Branch* find(const string& name);
    bool status() const;
};

class BigBranch: protected Branch {
protected:
    int branches = 0;
    vector<Branch> middleBranches;
public:
    BigBranch();
    int tenants();
    int neighbours(const string& name);
};

class Tree {
    int totalBranches = 0;
    vector<BigBranch> BigBranches;
public:
    Tree();
    int getNeighbours(const string& name);
};