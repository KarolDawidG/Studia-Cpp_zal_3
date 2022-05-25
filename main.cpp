// zadanie zaliczeniowe 1.3
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
/////////////////////////////////////////////////////////////////////////////////////////////

    {

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
    }
/////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////
   {
    int h, n, a, x;
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
    }
/////////////////////////////////////////////////////////////////////////////////////////////
    {
        int nn=1;
        int licznik2=0;
        float suma2=0;
        float srednia_liczb;
        cout << "ZADANIE NR 3." << endl;
        cout<<"Podaj liczbe calkowita: "<<endl;
        while(nn!=0)
        {
            cin>>nn;
            licznik2++;
            suma2+=nn;
            cout<<"Podaj kolejna liczbe calkowita: "<<endl;
        }
        srednia_liczb=suma2/(licznik2-1);
        cout<<"Suma liczb calkowitych wynosi: "<<suma2<<endl;
        cout<<"Srednia liczb calkowitych wynosi: "<<setprecision(2)<<srednia_liczb<<endl<<endl;

    }


    return 0;
}
