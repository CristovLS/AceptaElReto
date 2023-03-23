/* El tren del amor

    En la república de Alipandia los jóvenes ya no salen por las noches para ligar. Ahora lo que se estila es ir a probar suerte al tren del amor.

    Este tren es bastante peculiar. Admite tanto personas como mercancías pero, eso sí, en cada vagón únicamente entra una persona. Por otro lado, la regla no escrita es que una vez que el tren se pone en marcha las mujeres no se mueven de su vagón, sino que son los hombres los que van en su busca. Además, siempre lo hacen hacia delante, hacia la locomotora; dicen que si van andando hacia atrás se marean y no llegan en buenas condiciones para tener posibilidades. Cuando un hombre ve en el vagón siguiente a una mujer, da unos golpecitos en la puerta que los separa y ambos esperan con ansia la siguiente estación para bajarse y encontrarse en el andén. Eso sí, en Alipandia son bastante exigentes, y a los hombres bajos sólo les interesan las mujeres bajas, mientras que los altos sólo se emparejan con altas.

    Por si no fuera suficiente el mareo, la pasividad de las mujeres y el tema de la altura, los hombres en su avance tienen que ir esquivando las mercancías que se van encontrando en los vagones. La mayoría de las veces pueden saltar por encima de ellas, pero hay algunas ocasiones en las que les es imposible seguir avanzando y se quedan sin ninguna posibilidad de conquista.

    Dada la configuración inicial de un tren, ¿eres capaz de decir cuántas parejas se formarán?

    ENTRADA : 
    La entrada consta de una serie de descripciones de trenes (de no más de 10.000 vagones), una por línea. Las descripciones no son más que cadenas de caracteres (que no contendrán espacios), donde cada uno de esos caracteres representa el contenido de un vagón. El primer carácter representa el último vagón del tren, o lo que es lo mismo, el tren se mueve "hacia la derecha", pues la locomotora está situada al final de la línea, tras el último carácter.

    El significado de cada carácter es el siguiente: una H representa un hombre, una M una mujer. Las versiones en mayúscula representan a las personas altas, mientras que las equivalentes en minúsculas representan a las bajas. Cualquier otro carácter fuera de estos cuatro representa una mercancía. Las mercancías que taponan el vagón no permitiendo avanzar están representadas por una @.
    ------------------------------------------------
    H.$.*M
    H==@M
    MHMHMHHMM
    ------------------------------------------------

    SALIDA : 
    Por cada caso de prueba se escribirá una línea en la que aparecerá el número de parejas que se podrán formar en el tren dado.
    ------------------------------------------------
    1
    0
    4
    ------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

    string datos;

    while (cin >> datos)
    {
        int numParejas = 0;
        stack<char> tren;
        tren.push('@');

        for (char c : datos)
        {
            if (c == 'H' || c == 'h' || c == '@')
                tren.push(c);
            else if (c == 'M')
            {
                if (tren.top() == 'H')
                {
                    numParejas++;
                    tren.pop();
                }
                else
                    tren.push('@');
            }
            else if (c == 'm')
            {
                if (tren.top() == 'h')
                {
                    numParejas++;
                    tren.pop();
                }
                else
                    tren.push('@');
            }
        }

        cout << numParejas << endl;
    }

    return 0;
}