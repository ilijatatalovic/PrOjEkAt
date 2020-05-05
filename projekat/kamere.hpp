#ifndef KAMERE_HPP_INCLUDED
#define KAMERE_HPP_INCLUDED
<<<<<<< HEAD
enum rezolucija{p144=1,p360,p480,p1080};
=======
enum rezolucija{144=1,360,480,1080};
>>>>>>> 33d36fbcbe836dbcb495a520b640673447fac27b
class Kamere{
  protected:
  int daljina;
  bool stanje;
  rezolucija p;
<<<<<<< HEAD
public:
=======
public: 
>>>>>>> 33d36fbcbe836dbcb495a520b640673447fac27b
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
<<<<<<< HEAD
p=p1080;
}while(daljina> 10);
do{
p=p360;
=======
p=p+1;
}while(daljina> 10);
do{
p=p-1;
>>>>>>> 33d36fbcbe836dbcb495a520b640673447fac27b
}while(daljina< 5);

}

};


#endif // KAMERE_HPP_INCLUDED
