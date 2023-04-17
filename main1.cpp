#include "Genome2.h"
#include "cell2.h"
#include "Animal.h"
using namespace std;
void animal();
int main() 
{
    int n;
    cout << "welcome to class of life" << endl;
    cout << "option1 = Genome'\n'option2 = Cell'\n'option3 = Animal ";
    cin >> n;

    switch (n)
    {
    case 1:
    {
        Genome gene;
        gene.vorodi();
        int a;
        cout << "option1 = DNAfromRNA" << endl;
        cout << "option2 = jahesh koochak" << endl;
        cout << "option3 = jahesh bozorg" << endl;
        cout << "option4 = reverse" << endl;
        cin >> a;
        switch (a)
        {
        case 1:
            gene.DNAfromRNA();
            break;
        case 2:
        {
            char m, n;
            int p;
            gene.small_jahesh(m, n, p);
        }
        break;
        case 3:
        {
            string s1, s2;
            gene.big_jahesh(s1, s2);
        }
        break;
        case 4:
            string j;
            gene.reverses(j);
            break;
        }
    }
    case 2:
    {
        Cell cell;
        cell.vorodi();
        cell.set_choromosomes();
        cout << "option 1 = cell_death" << endl;
        cout << "option 2 = jahesh bozorg" << endl;
        cout << "option 3 = jahesh koochak " << endl;
        cout << "option 4 = reverse" << endl;
        cout << "option 5 = pallindrome " << endl;
        int b;
        cin >> b;
        switch (b)
        {
        case 1:
        {
            string q, r;
            int y, x;
            cin>>q>>y>>r>>x;
            cell.big_jahesh(q, y, r, x);
        }
        break;
        case 2:{
            char b1,b2;
            int c1,c2;
            cin>>b1>>b2>>c1>>c2;
            cell.small_jahesh(b1, b2, c1,c2);
        }
        break;
        case 3 :{
            string e;
            int t;
            cin>>e>>t;
            cell.reverses(e, t);
        }
        break;
        case 4 :{
            int z;
            cin>>z;
            cell.pallindrome(z);
        }
        break;

        }
        
    }
    case 3:{
        animal();
    }
    break;
    }
}
void animal(){
	vector<Cell> animals;
	Animal obj1;
	int n;
	cout << "How many animal you want to enter ?" << endl; 
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		Cell k;
		cout << "How many choromosomes you want animal" << i+1 << " to have ?" << endl;
		k.tedad();
		k.set_choromosomes();
		animals.push_back(k);
	}
	int f;
	cout << "Select the methode you want :" << endl;
	cout << "1 . checking similarity" << endl << "2 . nonsexual reproduction" << endl << "3 . sexual reproduction" << endl;
	cin >> f;
	while(true){
		if(f == 1 || f == 2 || f == 3) break;
		else {
			cout << "False input , try agian : " << endl;
			cin >> f;
		}
	}
	if(f == 1){
		cout << "select the number of animals you want to compare :" << endl;
		int g[2];
		cin >> g[0] >> g[1];
		while(true){
			if(g[0] > 0 && g[0] <= n)
				if(g[1] > 0 && g[1] <= n) break;
			else {
				cout << "False input , try agian : " << endl;
				cin >> g[0] >> g[1];
			}
		}
		g[0] -= 1;
		g[1] -= 1;
		cout << "the percentage of similarity is :" << endl;
		cout << obj1.similarity(animals[g[0]], animals[g[1]]) << endl;
		if(obj1.similarity(animals[g[0]], animals[g[1]]) >= 70){
			if(animals[g[0]].choromosomes.size() == animals[g[1]].choromosomes.size()) cout << "True , they are from same species" << endl;
			else cout << "Flase , they are not from same species" << endl;
		}
	}
	if(f == 2){
		cout << "select the number of animal you want to nonsexualy reproduce :" << endl;
		int g;
		cin >> g;
		while(true){
			if(g > 0 && g <= n) break;
			else {
				cout << "False input , try agian : " << endl;
				cin >> g;
			}
		}
		g -= 1;
		Cell nonsexualykid;
		nonsexualykid = obj1.nonsexual(animals[g]);
		cout << "The child is :" << endl;
		for(int i = 0; i < nonsexualykid.choromosomes.size(); i++){
			cout << nonsexualykid.choromosomes[i].DNA[0] << endl << nonsexualykid.choromosomes[i].DNA[1] << endl << endl;
		}
	}
	if(f == 3){
		cout << "select the number of animal you want to sexualy reproduce :" << endl;
		int g[2];
		cin >> g[0] >> g[1];
		while(true){
			if(g[0] > 0 && g[0] <= n)
				if(g[1] > 0 && g[1] <= n) break;
			else {
				cout << "False input , try agian : " << endl;
				cin >> g[0] >> g[1];
			}
		}
		g[0] -= 1;
		g[1] -= 1;
		Cell sexualykid;
		sexualykid = obj1.sexual(animals[g[0]], animals[g[1]]);
		cout << "The child is :" << endl;
		for(int i = 0; i < sexualykid.choromosomes.size(); i++){
			cout << sexualykid.choromosomes[i].DNA[0] << endl << sexualykid.choromosomes[i].DNA[1] << endl << endl;
		}
	}
}
