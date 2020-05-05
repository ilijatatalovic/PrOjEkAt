#ifndef TAKMICAR_HPP_INCLUDED
#define TAKMICAR_HPP_INCLUDED
enum kategorija{pioniri=1, kadeti, juniori, seniori};
class Takmicar{
  protected:
  double vreme;
  string prezime;
  string klub;
  int godiste;
  kategorija k;
  public:
  Takmicar(double v, string p, string k, int g,kategorija k1){
    vreme=v;
    prezime=p;
    klub=k;
    godiste=g;
    k=k1;
  }
  void metoda(){
  if(godiste>2016 || godiste<1980)
  {
  cout << "Au sinko pa ti se bodes : /" << endl;
  }
  if(godiste>2005){
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

  }
};



#endif // TAKMICAR_HPP_INCLUDED
