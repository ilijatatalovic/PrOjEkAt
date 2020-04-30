#ifndef KAMERE_HPP_INCLUDED
#define KAMERE_HPP_INCLUDED
enum rezolucija{144=1,360,480,1080};
class Kamere{
  protected:
  int daljina;
  bool stanje;
  rezolucija p;
public: 
  Kamere(int d, bool sta, rezolucija p1){
  daljina=d;
  stanje=sta;
  p=p1;
  }
void Podesikameru(){
if(stanje==true)
  cout << "Upaljena kamera." << endl;
 else
   cout << "Ugasena kamera." << endl;
do{
p=p+1;
}while(daljina> 10);
do{
p=p-1;
}while(daljina< 5);

}

};


#endif // KAMERE_HPP_INCLUDED
