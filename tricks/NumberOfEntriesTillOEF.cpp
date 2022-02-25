/*
En una linea recibiremos K enteros, no se indica cuánto vale K. Por cada linea de enteros ingresados, regresaremos el valor
de la suma, hasta que nos topemos con "EOF", cada output debe estar separado por un espacio, incluyendo el EOF final, pero no debe
haber espacios después de este.
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
 
    while(1){ // Bucle Infinito
        int ans = 0,v;
        char dummy;
        while(scanf("%d%c", &v,&dummy) != EOF){
            ans += v;
            if (dummy == '\n') break; // Buscar EOLN
        }
        if (feof(stdin)) break; // Buscar EOF (¿End of File?)
        printf("%d\n", ans);
    }

    return 0;
}

/*  
La rutina de entrada puede ser un poco más problemática si no recibimos el entero K al principio de cada línea/caso. Para
realizar la misma tarea, asumiendo que k >= 1 y que dos enteros en una misma línea estarán separados por, EXACTAMENTE, un espacio,
deberemos leer pares de un entero y otro carácter y detectar la señal de fin de línea (EOF)
*/

/*  SCANF: %c

Matches a character or a sequence of characters if a width specifier is used, matches exactly width characters (the argument must be 
a pointer to an array with sufficient room). Unlike %s and %[, does not append the null character to the array.

*/

/*  feof
Check end-of-file indicator

Checks whether the end-of-File indicator associated with stream is set, returning a value different from zero if it is.

This indicator is generally set by a previous operation on the stream that attempted to read at or past the end-of-file.

Notice that stream's internal position indicator may point to the end-of-file for the next operation, but still, the end-of-file 
indicator may not be set until an operation attempts to read at that point.

This indicator is cleared by a call to clearerr, rewind, fseek, fsetpos or freopen. Although if the position indicator is not 
repositioned by such a call, the next i/o operation is likely to set the indicator again.


*/


/*  stdin

Standard input stream

The standard input stream is the default source of data for applications. In most systems, it is usually directed by default to the 
keyboard.

stdin can be used as an argument for any function that expects an input stream (FILE*) as one of its parameters, like fgets or fscanf.
 
Although it is commonly assumed that the source of data for stdin is going to be a keyboard, this may not be the case even in regular 
console systems, since stdin can generally be redirected on most operating systems at the time of invoking the application. 
For example, many systems, among them DOS/Windows and most UNIX shells, support the following command syntax:
myapplication < example.txt

to use the content of the file example.txt as the primary source of data for myapplication instead of the console keyboard.

It is also possible to redirect stdin to some other source of data from within a program by using the freopen function.

If stdin is known to not refer to an interactive device, the stream is fully buffered. Otherwise, it is library-dependent whether the
stream is line buffered or not buffered by default (see setvbuf).

*/