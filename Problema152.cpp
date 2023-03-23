/* Va de modas...

    Dado un conjunto, o distribución, de valores se define la moda como el valor (o valores) que más se repite en dicho conjunto.

    En este problema te pedimos que calcules la moda de un conjunto de números.

    ENTRADA :
    La entrada consta de una serie de casos de prueba.

    Cada caso comienza con un número que representa el número de valores que tiene el conjunto, que nunca será mayor de 25.000. En la siguiente línea se proporcionan, separados por espacio, los valores de todos los elementos del conjunto. Todos ellos serán números enteros.

    La entrada terminará con una serie de 0 valores.
    ------------------------------------------------
    11
    1 2 2 3 3 3 4 4 4 4 5
    17
    1 8 9 6 3 2 1 5 4 7 9 6 3 2 1 4 7
    0
    ------------------------------------------------

    SALIDA :
    Para cada caso de prueba se mostrará la moda de la distribución, es decir el número que más se repite.

    Se garantiza que ningún caso de prueba contendrá más de una moda, es decir únicamente habrá un valor que aparezca el mayor número de veces.
    ------------------------------------------------
    4
    1
    ------------------------------------------------
*/
#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{

    int n;

    while (scanf("%d", &n) != EOF && n != 0)
    {
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int ni;
            scanf("%d", &ni);
            (m.count(ni) == 0) ? m[ni] = 1 : m[ni]++;
        }

        int best_value = 0;
        int best_key;

        for (auto mi : m)
        {
            int key = mi.first;
            int value = mi.second;

            if (value > best_value)
            {
                best_value = value;
                best_key = key;
            }
        }

        printf("%d\n", best_key);
    }

    return 0;
}
