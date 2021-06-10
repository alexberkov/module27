#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Branch {
public:
    string elf = "None";
    bool empty = true;
    Branch();
    Branch* find(const string& name);
};

class BigBranch: public Branch {
public:
    int branches = 0;
    vector<Branch> middleBranches;
    BigBranch();
    int tenants();
    int neighbours(const string& name);
    friend class Tree;
};

class Tree {
    int totalBranches = 0;
    vector<BigBranch> BigBranches;
public:
    Tree();
    int getNeighbours(const string& name);
};