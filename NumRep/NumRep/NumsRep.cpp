#include <iostream>
#include <vector>

using namespace std;

void repetidos(vector<int>& r, vector<int>& a);

int main()
{
    vector<int> vecRepetidos;
    int num;
    vector<int> vec;

    cout << "Digita los n�meros que se almacenar�n dentro del vector hasta digitar 0" << endl;

    do
    {
        cin >> num;
        vec.push_back(num);

    } while (num != 0);

    cout << endl;
    repetidos(vecRepetidos, vec);

    cout << "Tu vector contiene lo siguiente: " << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }
    cout << endl;

    cout << "Los numeros que ingresaste en el son: " << endl;
    for (int i = 0; i < vecRepetidos.size(); i++)
    {
        cout << vecRepetidos[i] << endl;
    }
    cout << endl;


}

void repetidos(vector<int>& r, vector<int>& a)
{
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            if (a[i] == a[j])
            {
                if (a[i] == a[j] && i != j)
                {

                    break;

                }
                r.push_back(a[i]);
                break;
            }

        }
    }
}
