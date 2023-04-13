#pragma once
#include<iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
class Genome{
    protected:
        string RNA;
        string DNA[2];
    public:
        Genome();
        void vorodi();
        void vorodiCell();
        string get_RNA();
        string get_DNA1();
        string get_DNA2();
        char mokamel(char a);
        void DNAfromRNA();
        void small_jahesh(char a, char b, int n);
        void big_jahesh(string a, string b);
        void reverses(string a);
};
