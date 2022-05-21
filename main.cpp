#include <iostream>

using namespace std;

int main()
{
    cout << "Tabliczka mnozenia" << endl;
    cout<<endl;
    int n;
    cout <<"Podaj wartosc n z przedzialu <1, 10>: "<<endl;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            cout<<i*j<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
