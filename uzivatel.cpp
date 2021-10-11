#include<iostream>
#include<cstdio>
#include<cmath>
#include<fstream>

using namespace std;

int main (){

cout << "Zde zadejte vase jmeno a prijmeni" <<endl;
string jmeno, prijmeni;
cin >> jmeno >> prijmeni;

cout << "Zde zadejte vas vek" <<endl;
 int vek;
    do  {
        cin >> vek;
        }
    while (vek > 150);

cout << "Zde zadejte vasi vysku" <<endl;
float vyska;
        do  {
        cin >> vyska;
        }
    while (vyska > 250.0);


cout << "Jake je vase vzdelani? (zs/ss/vs)" <<endl;
string vzdelani;
cin >> vzdelani;

if (vzdelani == "zs" || vzdelani == "ss" || vzdelani == "vs") {
        cout << jmeno << " " << prijmeni << " je stary/a " << vek << " let, je vysoky/a " << vyska << " cm a dosahl/a " << vzdelani << " vzdelani" << endl;
    }
    else{
        cout << jmeno << " " << prijmeni << " je stary/a " << vek << " let, je vysoky/a " << vyska << " cm " << endl;
        cout << "Uzivatel nezadal zadnou z uvedenych moznosti vzdelani." << endl;
    }
//ofstream vystup_do_souboru ("uzivatel.txt");
//vystup_do_souboru << jmeno << " " << prijmeni << " je stary/a " << vek << " let, je vysoky/a " << vyska << " cm a dosahl/a " << vzdelani << " vzdelani" << endl;

}
