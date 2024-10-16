#include <iostream>
using namespace std;

int main() {
  int k, l, ns;
  float v, somma, media;
  string n;
  do {
    cout << "Quanti studenti ci sono in una classe?" << endl;
    cin >> ns;
  } 
  while (ns<0);
  k = 0;
  l=0;
  somma=0;
  while (k < ns)
  {
    cout << "Qual è il nome dello stdente?" << endl;
    cin >> n;
    cout << "Qual è il suo voto medio?" << endl;
    cin>> v;
    if (v<6)
    {
      cout << "Prenderai il debito" << endl;
      l=l+1;
    }
    else 
    {
      cout << "sei stato promosso" << endl;
    }
    somma = somma + v;
    k = k + 1;
  }
  cout << "Gli studenti che prenderanno il debito sono " << l << endl;
  media = somma/ns;
  cout << "Il voto medio della classe è " << media << endl;

}


