#include <iostream>
#include <vector>

using namespace std;

void mult(int x, int y);
int main() {
    vector<int> num1;
    vector<int> num2;
    int n1, n2;

    cout << "Escriba el valor del primer vector: " << endl;
    cin >> n1;

    cout << "Escriba el valor del segundo vector: " << endl;
    cin >> n2;

    num1.push_back(n1);
    num2.push_back(n2);

    mult(num1[0], num2[0]);
}

void mult(int x, int y) {
    vector<int> prod;
    int res;

    res = x * y;

    prod.push_back(res);

    cout << "El producto de los valores es: " << prod[0] << endl;
}