#include <iostream>
#include <iomanip> // Necessário para setprecision e fixed

using namespace std;

int main() {
    double raio;
    cin >> raio;

    // Calcula a área do círculo
    double area = 3.14159 * raio * raio;

    // Exibe a área com 4 casas decimais após o ponto
    cout << fixed << setprecision(4);
    cout << "A=" << area << endl;

    return 0;
}
