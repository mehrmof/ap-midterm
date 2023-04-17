#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include<bits/stdc++.h>
#include "cell2.h"
#include"Genome2.h"
using namespace std;

class Animal : public Cell{
	private :
		
		
	public :
		double similarity(Cell animal1 , Cell animal2);
		Cell nonsexual(Cell animal3);
		Cell sexual(Cell animal4 , Cell animal5);	
		friend class Genome;
		friend class Cell;
};