#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
//hello
class Genome
{
protected:
    string RNA;
    string DNA[2];

public:
    
    void vorodi(){
        cin>>RNA>>DNA[0]>>DNA[1];
    }
    void vorodiCell(){
        cin>>DNA[0]>>DNA[1];
    }
    string get_RNA(){
        return RNA;
    }
    string get_DNA1(){
        return DNA[0];
    }
    string get_DNA2(){
        return DNA[1];
    }

    char mokamel(char a)
{
    switch (a)
    {
    case 'A':
        return 'T';
        break;
    case 'T':
        return 'A';
        break;
    case 'C':
        return 'G';
        break;
    case 'G':
        return 'C';
        break;
    }
}

    void DNAfromRNA()
    {
        string RNAres=RNA;
      
        for (int i = 0; i < RNA.length(); i++)
        {
            RNAres[i] = mokamel(RNA[i]);
        }
        cout << RNAres << endl;
    }
    void small_jahesh(char a, char b, int n)
    {
        string tempRNA=RNA;
        int temp1 = 0;

        int temp = 0;
        for (int i = 0; i < RNA.length(); i++)
        {
            if (RNA[i] == a)
            {
                tempRNA[i] = b;
                temp1++;
            }
            if (temp1 == n)
            {
                break;
            }
        }
        cout << tempRNA << endl;
        string tempDNA[2];
        tempDNA[0]=DNA[0];
        tempDNA[1]=DNA[1];
        for (int i = 0; i < DNA[0].length(); i++)
        {
            if (DNA[0][i] == a)
            {
                temp++;
                tempDNA[0][i] = b;
                tempDNA[1][i] = mokamel(b);
            }
            if (temp == n)
            {
                break;
            }
            if (DNA[1][i] == a)
            {
                temp++;
                tempDNA[1][i] = b;
                tempDNA[0][i] = mokamel(b);
            }
            if (temp == n)
            {
                break;
            }
        }
        cout<<tempDNA[0]<<'\n'<<tempDNA[1]<<endl;
    }
    void big_jahesh(string a, string b)
    {
        string tempRNA=RNA;
        int temp1 = 0;
        auto loc = RNA.find(a);
        for (int i = 0; i < a.length(); i++)
        {
            tempRNA[loc + temp1] = b[i];
            temp1++;
        }
        cout<<tempRNA<<endl;
        auto loc1 = DNA[0].find(a);
        string tempDNA[2];
        tempDNA[0]=DNA[0];
        tempDNA[1]=DNA[1];
        if (loc1 == string::npos)
        {
            loc1 = 10000;
        }
        auto loc2 = DNA[1].find(a);
        if (loc2 == string::npos)
        {
            loc2 = 10000;
        }
        if (loc1 < loc2)
        {
            int temp = loc1;
            for (int i = 0; i < a.length(); i++)
            {
                tempDNA[0][temp] = b[i];
                temp++;
            }
            for (int i = 0; i < a.length(); i++)
            {
                tempDNA[1][temp] = mokamel(b[i]);
                temp++;
            }
        }
        else
        {
            int temp = loc2;
            for (int i = 0; i < a.length(); i++)
            {
                tempDNA[1][temp] = b[i];
                temp++;
            }
            for (int i = 0; i < a.length(); i++)
            {
                tempDNA[0][temp] = mokamel(b[i]);
                temp++;
            }
        }
        cout<<tempDNA[0]<<'\n'<<tempDNA[1]<<endl;
    }
    void reverses(string a)
    {   
        string tempRNA = RNA;
        string tempDNA[2];
        tempDNA[0]=DNA[0];
        tempDNA[1]=DNA[1];
        auto loc = RNA.find(a);
        reverse(tempRNA.begin()+loc,tempRNA.begin()+loc+a.length());
        cout<<tempRNA<<endl;
        
        auto loc1 = DNA[0].find(a);
        if (loc1 == string::npos)
        {
            loc1 = 10000;
        }
        auto loc2 = DNA[1].find(a);
        if (loc2 == string::npos)
        {
            loc2 = 10000;
        }
        if (loc1 < loc2)
        {
            int temp = loc1;
            reverse(tempDNA[0].begin()+loc1,tempDNA[0].begin()+loc1+a.length());
            reverse(tempDNA[1].begin()+loc1,tempDNA[1].begin()+loc1+a.length());
        }
        else
        {
            int temp = loc2;
            reverse(tempDNA[0].begin()+loc2,tempDNA[0].begin()+loc2+a.length());
            reverse(tempDNA[1].begin()+loc2,tempDNA[1].begin()+loc2+a.length());
        }
        cout<<tempDNA[0]<<'\n'<<tempDNA[1]<<endl;
    }
};


