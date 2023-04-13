#include "cell2.h"


	int n;
    void Cell::tedad(){
        cin>>n;
    }
    void Cell::set_choromosomes(){
        for (int i =0; i<n ; i++){
            
            Genome g;
            g.vorodiCell();
            sett(g);
        }
    }
    void Cell::sett(Genome genome)
    {   
        choromosomes.push_back(genome);
    }
    void Cell::cell_death()
    {
        for (int i = 0; i < choromosomes.size(); i++)
        {
            Genome chromosome = choromosomes[i];
            string DNA1 = chromosome.get_DNA1();
            string DNA2 = chromosome.get_DNA2();
            int temp = 0;
            int A_T;
            int C_G;
            for (int j = 0; j < DNA1.size(); j++)
            {
                if (mokamel(DNA1[j]) != DNA2[j])
                {
                    temp++;
                }
            }
            for (int i = 0; i < DNA1.size(); i++)
            {
                if (DNA1[i] == 'T' && DNA2[i] == 'A')
                {
                    A_T++;
                }
                else if (DNA1[i] == 'A' && DNA2[i] == 'T')
                {
                    A_T++;
                }
                else if (DNA1[i] == 'C' && DNA2[i] == 'G')
                {
                    C_G++;
                }
                else if (DNA1[i] == 'G' && DNA2[i] == 'C')
                {
                    C_G++;
                }
            }
            if (temp > 5 && A_T > 3 * C_G)
            {
                delete this;
                break;
            }
        }
    }
    void Cell::big_jahesh(string a, int n, string b, int m)
    {
        choromosomes[n].big_jahesh(a, b);
        choromosomes[m].big_jahesh(b, a);
    }
    void Cell::small_jahesh(char a, char b, int n, int m)
    {
        choromosomes[m].small_jahesh(a, b, n);
    }
    void Cell::reverses(string a, int n)
    {
        choromosomes[n].reverses(a);
    }
    char Cell::mokamel(int a)
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
    void Cell:: pallindrome(int a)
    {
        string s= choromosomes[a].get_DNA1();
        for (int i=0 ;i<s.size();i++){
            for(int j=2; j<s.size();j+=2){
                string str=s.substr(i,j);
                for (int n=0; n<j/2;n++){
                    if (str[i]==mokamel(str[str.length()-1-i])){
                        if (n==j/2-1){
                            cout<<str;
                        }
                        else{
                            cout<<"Not pallindrome";
                        }
                    }
                    else{
                            break;
                        }
                }
            }
        }
        
    }


