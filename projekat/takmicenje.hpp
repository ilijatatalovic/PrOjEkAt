#ifndef TAKMICENJE_HPP_INCLUDED
#define TAKMICENJE_HPP_INCLUDED
#include "osoblje.hpp"
#include "tabela.hpp"
#include "camac.hpp"
class Takmicenje{
protected:
  Osoblje o;
  Tabela t;
  string trka;
  Camac c;
public:
  Takmicenje(string t,string i, string p, int g,int brP, double vr,string disc, int br):o(i,p,g),t(brP,vr),c(disc, br){
    trka=t;
  }
};


#endif // TAKMICENJE_HPP_INCLUDED
