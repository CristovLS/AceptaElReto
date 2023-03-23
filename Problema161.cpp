/* Cálculo de la Mediana

    Dado un conjunto (o muestra) de valores positivos ordenados, se define la mediana como el valor que ocupa la posición central de los datos dados:
                         Mediana
    1   2   6   17  18      22       35   46  109  143  200
        5 valores                       5 valores
    En el caso de tener un número impar de valores, la mediana está clara: será aquel valor que tenga el mismo número de valores más pequeños y más grandes que él en la muestra. En el caso de tener un número par de valores, habría dos candidatos a ser mediana. En vez de decidirnos por uno, en este caso la mediana viene dada por la media aritmética de esos dos valores que ocupan las posiciones centrales.

    Dada una colección de números positivos, nos piden calcular la mediana. Para evitar tener que trabajar con números decimales en algunos casos, habrá que calcular su doble.

    ENTRADA :
    La entrada consta de una serie de casos de prueba. Cada uno comienza con un número, menor o igual que 25.000, que indica la cantidad de valores que tiene la muestra. A continuación se dan los valores de la muestra, todos números enteros positivos, de los que habrá que calcular la mediana multiplicada por dos.

    La entrada terminará con una serie de 0 valores.
    ------------------------------------------------
    11
    1 2 6 17 18 22 35 46 109 153 200
    5
    5 3 1 2 8
    4
    4 5 9 2
    0
    ------------------------------------------------
    SALIDA :
    Para cada caso de prueba se mostrará el doble de la mediana de los valores dados.
    ------------------------------------------------
    44
    6
    9
    ------------------------------------------------
*/

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

    while (1)
    {
        int numeros;
        cin >> numeros;

        if (numeros == 0)
            break;

        vector<int> v(numeros);
        int ni;

        for (int i = 0; i < numeros; i++)
        {
            cin >> ni;
            v[i] = ni;
        }

        sort(v.begin(), v.end());
        int sol;

        if (numeros % 2 == 0)
        {
            sol = v[numeros / 2 - 1] + v[numeros / 2];
        }
        else
        {
            sol = v[numeros / 2] * 2;
        }

        cout << sol << endl;
    }

    return 0;
}