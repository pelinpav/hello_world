#include<iostream>
#include<cstdio>
#include<cmath>
#include<fstream>
#include<tuple>
#include<vector>
#include "clovek.h"
using namespace std;

tuple<string, string> nacti_jmeno(){
    cout << "Zadej jmeno a prijmeni" << endl;
    string jmeno, prijmeni;
    cin >> jmeno >> prijmeni;
    return make_tuple(jmeno, prijmeni);
}

int nacti_vek(int nejmensi_vek, int nejvetsi_vek){
    int vek = 0;
    do{
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Zadej vek" << endl;
        cin >> vek;
    }
    while(cin.fail() || vek > nejvetsi_vek || vek < nejmensi_vek);
    return vek;
}

float nacti_vysku(float nejmensi_vyska, float nejvetsi_vyska){
    float vyska = 0;
    do{
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Zadej vysku" << endl;
        cin >> vyska;
    }
    while(cin.fail() || vyska > nejvetsi_vyska || vyska < nejmensi_vyska);
    return vyska;
}

void uloz_do_souboru(string jmeno, string prijmeni, int vek, float vyska){
    ofstream vystup;
    vystup.open("soubor.txt", ios::app);
    vystup << jmeno << " " << prijmeni << ", " << vek << ", " << vyska << endl;
}

float urcit_prumerny_vek(vector<Clovek> seznam_osob){
    float prumerny_vek = 0;
    int pocet_osob = seznam_osob.size();
    for (int i = 0; i < pocet_osob; i++) {
        prumerny_vek += seznam_osob.at(i).vek;
    }
    prumerny_vek /= pocet_osob;
    return prumerny_vek;
};

float urcit_prumerna_vyska(vector<Clovek> seznam_osob){
    float prumerna_vyska = 0;
    int pocet_osob = seznam_osob.size();
    for (int i = 0; i < pocet_osob; i++) {
        prumerna_vyska += seznam_osob.at(i).vyska;
    }
    prumerna_vyska /= pocet_osob;
    return prumerna_vyska;
};
