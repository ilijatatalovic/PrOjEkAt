#ifndef TAKMICAR_HPP_INCLUDED
#define TAKMICAR_HPP_INCLUDED
enum kategorija{pioniri=1, kadeti, juniori, seniori};
class Takmicar{
<<<<<<< HEAD
  protected:
=======
  protected: 
>>>>>>> 33d36fbcbe836dbcb495a520b640673447fac27b
  double vreme;
  string prezime;
  string klub;
  int godiste;
  kategorija k;
  public:
  Takmicar(double v, string p, string k, int g,kategorija k1){
<<<<<<< HEAD
    vreme=v;
    prezime=p;
    klub=k;
=======
    vreme=V;
    prezime=p;
    klub=kl;
>>>>>>> 33d36fbcbe836dbcb495a520b640673447fac27b
    godiste=g;
    k=k1;
  }
  void metoda(){
  if(godiste>2016 || godiste<1980)
  {
  cout << "Au sinko pa ti se bodes : /" << endl;
  }
  if(godiste>2005){
<<<<<<< HEAD
    k=pioniri;
    cout << "Pioniri" << endl;
  }
  if(godiste<2005 && godiste>2001){
    k=kadeti;
   cout << "Kadeti" << endl;
  }
  if(godiste<2000 && godiste>1998){
    k=kadeti;
    cout << "Juniori" << endl;
  }
  if(godiste<1997){
    k=seniori;
    cout << "Seniori" << endl;
  }

=======
    k=1;
    cout << "Pionir" << endl;
  }
  if(godiste<2005 && godiste>2001){
    k=2;
   cout << "Kadet" << endl; 
  }
  if(godiste<2000 && godiste>1998){
    k=3;
    cout << "Junior" << endl;
  }
  if(godiste<1997){
    k=4;
    cout << "Senior" << endl;
  }
  
>>>>>>> 33d36fbcbe836dbcb495a520b640673447fac27b
  }
};



#endif // TAKMICAR_HPP_INCLUDED
