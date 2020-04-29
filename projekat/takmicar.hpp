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
    klub=k;
    godiste=g;
    k=k1;
  }
  void metoda(){
  if(g>2016 || g<1980)
  {
  cout << "Au sinko pa ti se bodes : /" << endl;
  }
  if(g>2005)
    k1=1;
  if(g<2005 && g>2001)
    k1=2;
  if(g<2000 && g>1998)
    k1=3;
  if(g<1997)
    k4=4;
  
  }
};



#endif // TAKMICAR_HPP_INCLUDED
