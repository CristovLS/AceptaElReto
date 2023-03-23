/* Paréntesis balanceados

    Se entiende que una secuencia de caracteres está correctamente equilibrada con respecto a los paréntesis si cada uno de los paréntesis de apertura tiene su paréntesis cerrado. Cuando añadimos otros mecanismos de agrupación (como los corchetes, [ y ] o las llaves, { y }), el equilibrio se da si el número de aperturas de cada símbolo coincide con el de cierres y además se cierran en el orden correcto.

    Se trata de implementar un programa que indique si una cadena está correctamente balanceada con respecto a paréntesis, corchetes y llaves.

    ENTRADA : 
    La entrada consistirá en distintos casos de prueba, cada uno en una línea. Cada línea no tendrá más de 10.000 caracteres.
    ------------------------------------------------
    ({[]})()
    Tengase en cuenta (obviamente) que puede haber otros simbolos.
    :)
    ------------------------------------------------

    SALIDA : 
    Para cada caso de prueba se indicará si la entrada está correctamente balanceada (se escribirá un simple YES) o hay algún error (NO).
    ------------------------------------------------
    YES
    YES
    NO
    ------------------------------------------------
*/

#include <string.h>
#include <stdio.h>

int main()
{
    char frase[10001], simbolos[10001];
    int result, longitud;
    int i, j;
    while (1)
    {
        if (scanf("%[^\n]%*c", frase) == EOF)
            return 0;
        result = 1;
        j = -1;
        longitud = strlen(frase);
        for (i = 0; i < longitud && result; i++)
        {
            if (frase[i] == '(')
            {
                j++;
                simbolos[j] = '(';
            }
            else if (frase[i] == ')')
            {
                if (simbolos[j] == '(')
                    j--;
                else
                    result = 0;
            }
            if (frase[i] == '{')
            {
                j++;
                simbolos[j] = '{';
            }
            else if (frase[i] == '}')
            {
                if (simbolos[j] == '{')
                    j--;
                else
                    result = 0;
            }
            if (frase[i] == '[')
            {
                j++;
                simbolos[j] = '[';
            }
            else if (frase[i] == ']')
            {
                if (simbolos[j] == '[')
                    j--;
                else
                    result = 0;
            }
        }
        if (result && j == -1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}