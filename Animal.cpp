#include"Genome.h"
#include "Cell.h"
#include "Animal.h"
#include<bits/stdc++.h>
using namespace std;

		double Animal::similarity(Cell animal1 , Cell animal2){
			double m = 0;
			// the two fors here is for to compare all the choromosomes of first animal to the second for similarity
			for(int i = 0; i < animal1.choromosomes.size(); i++)
				for(int k = 0; k < animal2.choromosomes.size(); k++)
				{
					int l =0;
					// check that if the size of first animal choromosomes is equal to the second and if not skip
					if(animal1.choromosomes[i].DNA[0].size() == animal2.choromosomes[k].DNA[0].size())
						for(int j = 0; j < animal1.choromosomes[i].DNA[0].size(); j++)
							if(animal1.choromosomes[i].DNA[0][j] != animal2.choromosomes[i].DNA[0][j])
								l++;
						if(l == 0) m++;
				}
			double x = animal1.choromosomes.size() + animal2.choromosomes.size();
			//now here m / x is the percentage of similarity
			return (m / x) * 100;
		}
		
		Cell Animal::nonsexual(Cell animal3){
			Cell duplicate;
			Cell kid1;
			// creats a copy of the animal cell to double the n
			for(int i = 0; i < animal3.choromosomes.size(); i++) duplicate.choromosomes.push_back(animal3.choromosomes[i]);
			int p = 0;
			// while is for if the similarity wasn't over 70 redo the procces 
			while(p != 1)
			{
				// randomly choose a chromosome and put it the kid choromosomes
				for(int i = 0; i < animal3.choromosomes.size(); i++)
				{
					mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
					if(rng() % 2 == 0) kid1.choromosomes.push_back(animal3.choromosomes[i]);
					if(rng() % 2 == 1) kid1.choromosomes.push_back(duplicate.choromosomes[i]);
				}
				if(similarity(kid1 , animal3) >= 70) p = 1;			
			}
			return kid1;
		}
		
		Cell Animal::sexual(Cell animal4 , Cell animal5){
			Cell kid2;
			Cell kid3;
			// first we do the nonsexual step
			kid2 = nonsexual(animal4);
			kid3 = nonsexual(animal5);
			Cell sexualkid;
			// the next step is to take half chromosomes of first on and half of the second one and put it on final kid
			int k = kid2.choromosomes.size() / 2;
			while(kid2.choromosomes.size() > k)
			{
				mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
				int x = rng() % (kid2.choromosomes.size());
				sexualkid.choromosomes.push_back(kid2.choromosomes[x]);
				kid2.choromosomes.erase(kid2.choromosomes.begin()+ x);
			}
			k = kid3.choromosomes.size() / 2;
			while(kid3.choromosomes.size() > k)
			{
				mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
				int x = rng() % (kid3.choromosomes.size());
				sexualkid.choromosomes.push_back(kid3.choromosomes[x]);
				kid3.choromosomes.erase(kid3.choromosomes.begin()+ x);
			}
			return sexualkid;
		}