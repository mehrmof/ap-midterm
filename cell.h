#pragma once
#include"Genome.h"
class Cell: public Genome{
	protected:
		vector<Genome> choromosomes;
    public:
        
        void tedad();
        void set_choromosomes();
        void sett(Genome genome);
        void cell_death();
        void big_jahesh(string a, int n, string b, int m);
        void small_jahesh(char a, char b, int n, int m);
        void reverses(string a, int n);
        char mokamel(int a);
        void pallindrome(int a);

};
