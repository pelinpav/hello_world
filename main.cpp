#include<iostream>
#include<cstdio>
#include<cmath>
#include<fstream>
#include<tuple>
#include<vector>
#include "clovek.h"
using namespace std;

int main()
{
    vector<Clovek> seznam_osob;
    string dalsi_osoba = "y";

    do {
    Clovek osoba;

    string jmeno, prijmeni;
    tie(jmeno, prijmeni) = nacti_jmeno();
    cout << "Cele jmeno uzivatele: " << jmeno << " " << prijmeni << endl;
    osoba.jmeno = jmeno;
    osoba.prijmeni = prijmeni;

    int vek = nacti_vek(0, 150);
    cout << "Vek uzivatele: " << vek << endl;
    osoba.vek = vek;

    float vyska = nacti_vysku(0, 250);
    cout << "Vyska uzivatele: " << vyska << endl;
    osoba.vyska = vyska;

    seznam_osob.push_back(osoba);
    uloz_do_souboru(jmeno, prijmeni, vek, vyska);

    cout << "Pridat dalsi osobu? (Y/N)" << endl;
    cin >> dalsi_osoba;
    } while(dalsi_osoba == "y" || dalsi_osoba == "Y");

    float prumerny_vek = urcit_prumerny_vek(seznam_osob);
    cout << "Prumerny vek osob: " << prumerny_vek << endl;

    float prumerna_vyska = urcit_prumerna_vyska(seznam_osob);
    cout << "Prumerna vyska osob: " << prumerna_vyska << endl;

    return 0;
}
