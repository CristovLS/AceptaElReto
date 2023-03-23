/* Suma de dígitos

    Se trata de implementar un programa que sume los dígitos de un número entero no negativo. Por ejemplo, la suma de los dígitos del 3433 es 13.

    Para darle un poco más de emoción, el programa no se limitará a escribir el resultado de la suma, sino que también escribirá todos los sumandos utilizados: 3 + 4 + 3 + 3 = 13.

    ENTRADA : 
    La entrada consta de una serie de casos de prueba terminados con un número negativo. Cada caso de prueba es una simple línea con un número no negativo no amyor que 10^9 del que habrá que sumar todos sus dígitos.
    ------------------------------------------------
    3433
    64323
    8
    -1
    ------------------------------------------------

    SALIDA : 
    Para cada caso de prueba se mostrará una línea en la que aparecerán cada uno de los dígitos separados por el signo +, tras lo cual aparecerá el símbolo = y la suma de todos los dígitos.

    Ten en cuenta que antes y después de cada símbolo (+ y =) hay un espacio.
    ------------------------------------------------
    3 + 4 + 3 + 3 = 13
    6 + 4 + 3 + 2 + 3 = 18
    8 = 8
    ------------------------------------------------
*/

// VERSION RÁPIDA

#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{

    char num[11];
    int suma;

    while (1)
    {
        scanf("%s", num);
        if (num[0] == '-')
            break;
        suma = 0;
        for (int i = 0; i < strlen(num); i++)
        {
            suma = suma + num[i] - 48;
            if (i == strlen(num) - 1)
                printf("%d = %d\n", num[i] - 48, suma);
            else
                printf("%d + ", num[i] - 48);
        }
    }

    return 0;
}

/* Versión lenta
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long numero, res, aux, potencia;
    cin >> numero;

    while (numero >= 0)
    {
        res = 0;
        aux = numero;
        int i = 0;
        if (numero == 0)
        {
            cout << "0 = 0" << endl;
        }
        else
        {

            while (numero > 0)
            {
                numero /= 10;
                i++;
            }

            for (int j = i - 1; j >= 0; j--)
            {
                potencia = 1;
                for (int k = 0; k < j; k++)
                {
                    potencia *= 10;
                }

                long long div = aux / (long long)potencia;
                res += div;
                if (j == 0)
                    cout << div;
                else
                    cout << div << " + ";
                aux = aux - (div * (long long)potencia);
            }
            cout << " = " << res << endl;
        }
        cin >> numero;
    }

    return 0;
} */