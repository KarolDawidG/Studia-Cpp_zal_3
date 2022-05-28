// zadanie zaliczeniowe 1.3
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
/////////////////////////////////////////////////////////////////////////////////////////////

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

{
int wybor;
do
{
string nazwa_hotelu;
int liczba_pieter=0, liczba_pokoi=0, pietro_bezpokoi=0, liczba_zajetych_pokoi=0;
int i=0;
double procent=0, suma_pokoi=0, suma_zajetych_pokoi=0;
    cout <<"=================================================="<<endl;
    cout << "ZADANIE NR 5." << endl;
    cout<<"Podaj nazwe hotelu: "<<endl;
    cin>>nazwa_hotelu;
    cout<<"Podaj liczbe pieter: "<<endl;
    cin>>liczba_pieter;
        if (liczba_pieter<1)
        {
            cout<<"Liczba pieter nie moze byc mniejsza od 1"<<endl;
        }
        else
        {
            cout<<"Podaj numer pietra na ktorym nie ma pokoi: "<<endl;
            cin>>pietro_bezpokoi;
        if (pietro_bezpokoi>liczba_pieter ||pietro_bezpokoi<=0)
        {
            cout<<"ERROR! Podana zla wartosc, sproboj jeszcze raz! "<<endl;
        }
        else
        {
        while(i<liczba_pieter)
        {
            cout<<"Ile pokoi jest na pietrze "<<i+1<<"?"<<endl;
            cin>>liczba_pokoi;
        if (liczba_pokoi<10)
        {
            cout <<"Liczba pokoi musi byc wieksza od 10."<<endl;
        }
        else
        {
            cout<<"Podaj liczbe zajetych pokoj."<<endl;
            cin>>liczba_zajetych_pokoi;
        if (liczba_zajetych_pokoi<0 || liczba_zajetych_pokoi> liczba_pokoi )
        {
            cout<<"ERROR! Wprowadzono niepoprawna wartosc. Wpisz dane jeszcze raz. "<<endl;
        }
        else
        {
        {
            i++;
        if (i==pietro_bezpokoi)
        {
            cout<<"To pietro jest bez bez pokoi. Podane wartosci nie zostana wliczone."<<endl<<endl;
        continue;
        }
        suma_pokoi+=liczba_pokoi;
        suma_zajetych_pokoi+=liczba_zajetych_pokoi;
        }
        }
        }
        }
        cout<<"Suma pokoi: "<<suma_pokoi<<endl;
        cout<<"Suma zajetych pokoi: "<<suma_zajetych_pokoi<<endl;
        procent=(suma_zajetych_pokoi/suma_pokoi)*100;
        cout<<"Pokoje zajete stanowia: "<<setprecision(2)<<procent<<"% wszystkich pokoi w hotelu."<<endl;
        }
        }
        getchar();
cout<<"Czy chcesz wprowadzic dane jeszcze raz? Jesli tak, nacisnij 1."<<endl;
cout<<"Jesli chcesz zakonczyc, nacisnij dowolny inny znak, a pozniej ENTER"<<endl;
cin>>wybor;
}while (wybor==1);
}


/////////////////////////////////////////////////////////////////////////////////////////////
    return 0;
}
