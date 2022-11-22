#include <iostream>
#include <vector>

using namespace std;

void res(vector<int> x, vector<int> y, int c);

int main()
{
    vector<int> N;
    vector<int> M;

    int t, n, m;


    cout << "Ingresa el tamaño de los vectores: " << endl;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cout << "Ingresa el valor " << i + 1 << " de N: " << endl;
        cin >> n;
         
        N.push_back(n);

        cout << "Ingresa el valor " << i + 1 << " de M: " << endl;
        cin >> m;

        M.push_back(m);
    }

    res(N, M, t);
}


void res(vector<int> x, vector<int> y, int c)
{
    vector<int> NM;
    int suma = 0;


    for (int i = 0; i < c; i++) {
        suma = x[i] + y[i];

        NM.push_back(suma);


    }

    for (int i = 0; i < c; i++) {
        for (int j = i + 1; j < c; j++) {
            if (NM[i] < NM[j]) {
                int aux = NM[j];
                NM[j] = NM[i];
                NM[i] = aux;
            }
        }

        cout << NM[i] << ",";
    }

}