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
    vreme=V;
    prezime=p;
    klub=kl;
    godiste=g;
    k=k1;
  }
  void metoda(){
  if(godiste>2016 || godiste<1980)
  {
  cout << "Au sinko pa ti se bodes : /" << endl;
  }
  if(godiste>2005)
    k1=1;
  if(godiste<2005 && godiste>2001)
    k1=2;
  if(godiste<2000 && godiste>1998)
    k1=3;
  if(godiste<1997)
    k1=4;
  
  }
};



#endif // TAKMICAR_HPP_INCLUDED
