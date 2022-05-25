// zadanie zaliczeniowe 1.3
#include <iostream>

using namespace std;

int main()
{{

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
            cout<<endl;
        }
    }
    else
    {
        cout << "Liczba n spoza przedzialu. " << endl;
    }}


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
       cout<<"Funkcja y(x)=3^2+3x-1 dla x = "<<x<<" wynosi: "<<3*x*x+3*x-1<<"\t"<<endl;
    }}

    return 0;
}
