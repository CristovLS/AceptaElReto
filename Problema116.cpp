/*  ¡Hola Mundo!

    Dicen los viejos que en este país el latín era una asignatura obligatoria por la que todos los estudiantes de bachillerato tenían que pasar.

    Dicen los viejos que el primer día de clase de latín cualquiera esperaba que los alumnos salieran sabiendo el "rosa rosae".

    Dicen los viejos que esa era la primera declinación.

    Quizá, dentro de muchos años, nosotros seamos los viejos que contemos batallitas de cómo se enseñaba infromática. Y quizá entonces, digamos que en la primera clase de cualquier curso en el que se explicara un lenguaje de programación, se tenía que salir habiendo escrito "un hola mundo".

    Y eso es lo que vamos a hacer. Escribir un programa que escriba tantos "hola mundo" como nos pidan.

    ENTRADA : 
    La entrada consta de una única línea que contiene un número n, 0 <= n <= 5, que indica cuántos mensajes hay que emitir.
    ------------------------------------------------
    3
    ------------------------------------------------

    SALIDA : Cada mensaje a escribir aparecerá en una única línea y será la cadena "Hola mundo".
    ------------------------------------------------
    Hola mundo.
    Hola mundo.
    Hola mundo.
    ------------------------------------------------
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        cout << "Hola mundo." << endl;
    }

    return 0;
}
