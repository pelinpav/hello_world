#include "MC_Integrace.h"
#include <fstream>
using namespace std;
// V inicializacnim seznamu se provede inicializace nahodne distribuce
MC_Integrace::MC_Integrace(int _n, double a, double b) :n(_n), distribution(a,b),vystupni_soubor("tvar.txt")
{
    vol = (b-a)*(b-a);
}
//fstream vystupni_soubor ("tvar.txt", ios::out);
double MC_Integrace::vypocet(Shape const& s) {
    int n_trefy = 0;

   // fstream uloz_data ("hovno.txt", ios::out);
    for (int i=0;i<n;++i) {
        Point shot = Point(distribution(generator),distribution(generator));
        if (s.is_inside(shot))

         if (n_trefy %100==0) {
         vystupni_soubor<<shot.x<<" "<<shot.y;
         vystupni_soubor<<"\n" ;
         }     // uloz_data <<shot.x<<" "<<shot.y;
//uloz_data<<"\n";

n_trefy++;


    }
    return vol*double(n_trefy)/double(n);

}
