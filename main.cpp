// zadanie zaliczeniowe 1.3
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
/////////////////////////////////////////////////////////////////////////////////////////////
/*
    {
    cout <<"=================================================="<<endl;
    cout << "ZADANIE NR 1." << endl;
    cout << "Tabliczka mnozenia" << endl;
    cout<<endl;
    int n;
    cout <<"Podaj wartosc n z przedzialu <1, 10>: "<<endl;
    cin>>n;
    if (n >=1 && n<=10)
    {
        for (int i=1; i<=n; i++)
        {
            for (int j=1; j<=n; j++)
            {
                cout<<i*j<<"\t";
            }
            cout<<endl<<endl;
        }
    }
    else
    {
        cout << "Liczba n spoza przedzialu. " << endl<<endl;
    }
    cout <<"=================================================="<<endl<<endl<<endl;
    }
/////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////
   {
    int h, n, a, x;
    cout <<"=================================================="<<endl;
    cout << "ZADANIE NR 2." << endl;
    cout <<"a - punkt poczatkowy x. "<<endl;
    cin>>a;
    cout <<"Podaw wartosc h - krok. "<<endl;
    cin >> h;
    cout <<"Podaw wartosc n - liczba krokow. "<<endl;
    cin>>n;
    x=a;
    for(int i = 1; i<=n; i++)
    {
       x=a+i*h;
       cout<<"Funkcja y(x)=3^2+3x-1 dla x = "<<x<<" wynosi: "<<3*x*x+3*x-1<<"\t"<<endl<<endl;
    }
    cout <<"=================================================="<<endl<<endl<<endl;
    }
/////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////
    {
        int nn=1;
        int licznik2=0;
        float suma2=0;
        float srednia_liczb;
        cout <<"=================================================="<<endl;
        cout << "ZADANIE NR 3." << endl;
        cout<<"Podaj liczbe calkowita: "<<endl;
        while(nn!=0)
        {
            cin>>nn;
            licznik2++;
            suma2+=nn;
            cout<<"Podaj kolejna liczbe calkowita: (albo cacisnij 0, aby zakonczyc)"<<endl<<endl;
        }
        srednia_liczb=suma2/(licznik2-1);
        cout <<"=================================================="<<endl;
        cout<<"Suma liczb calkowitych wynosi: "<<suma2<<endl;
        cout<<"Srednia liczb calkowitych wynosi: "<<setprecision(2)<<srednia_liczb<<endl<<endl;
        cout <<"=================================================="<<endl<<endl<<endl;
    }
/////////////////////////////////////////////////////////////////////////////////////////////

{
    double nn, suma1=0;
    double jj=0;
    cout <<"=================================================="<<endl;
    cout<<"Oblicz sume szeregu od j=0, do m, wedlug wzoru: 1+j/2j^3+3"<<endl;
    cout<<"Podaj wartosc m: "<<endl;
    cin>>nn;
    do
    {
        suma1+=(1+jj)/((2*jj*jj*jj)+3);
         jj++;
    }   while (jj<=nn);
    cout <<"=================================================="<<endl;
    cout<<"S wynosi: "<<setprecision(6)<<suma1<<endl;
    cout <<"=================================================="<<endl<<endl<<endl;
}
/////////////////////////////////////////////////////////////////////////////////////////////
*/
{
string nazwa_hotelu;
int liczba_pieter, liczba_pokoi, pietro_bezpokoi;

  cout <<"=================================================="<<endl;
  cout << "ZADANIE NR 5." << endl;
  cout<<"Podaj nazwe hotelu: "<<endl;
  cin>>nazwa_hotelu;
  cout<<"Podaj liczbe pieter: "<<endl;
  cin>>liczba_pieter;
  cout<<"Podaj liczbe pokoi: "<<endl;
  cin>>liczba_pokoi;
  cout<<"Podaj numer pietra na ktorym nie ma pokoi: "<<endl;
  cin>>pietro_bezpokoi;
  cout<<"Hotel o nazwie "<<nazwa_hotelu<<" ma "<<liczba_pieter<<" pieter, po "<<liczba_pokoi<<" pokoje."<<endl;
  cout<<"Pietro nr "<<pietro_bezpokoi<<" jest bez pokoi."<<endl;
}
/////////////////////////////////////////////////////////////////////////////////////////////
    return 0;
}
