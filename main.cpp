// zadanie zaliczeniowe 1.3
#include <iostream>

using namespace std;

int main()
{
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
    }
    return 0;
}
