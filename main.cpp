#include "Genome.h"
#include "cell.h"
#include <stdlib.h>

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
    break;
    }
}
