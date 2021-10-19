#ifndef CLOVEK_H_INCLUDED
#define CLOVEK_H_INCLUDED
#include<iostream>
#include<cstdio>
#include<cmath>
#include<fstream>
#include<tuple>
#include<vector>
using namespace std;

class Clovek{
    public:
        string jmeno, prijmeni;
        int vek;
        float vyska;
};

tuple<string, string> nacti_jmeno();
int nacti_vek(int nejmensi_vek, int nejvetsi_vek);
float nacti_vysku(float nejmensi_vyska, float nejvetsi_vyska);
void uloz_do_souboru(string jmeno, string prijmeni, int vek, float vyska);
float urcit_prumerny_vek(vector<Clovek> seznam_osob);
float urcit_prumerna_vyska(vector<Clovek> seznam_osob);

#endif // CLOVEK_H_INCLUDED
