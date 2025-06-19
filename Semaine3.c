What is gcc ?
     GNU Compiler Collection
     Une commande pour compiler un fichier et le rendre executable

What is betty?
     Un outil pour verifier la bonne tenue d'un code.
     Un style de codage pour Holberton School

What is the common extension for a C source file?
     .c
     
What is the common extension for a C header file?
     .h

What does printf() do ?
     Imprime un texte

What are the steps of gcc?
     Preprocessing Compile Assembly Linking

What is puts()in C?
     Imprime une chaine de caractère

Questions for the project C - Variables, if, else, while
What is the size of the unsigned int data type?
       4 bytes

What is int putchar(char) in C?
       Declaration de la fonction putchar et declaration de type de la variable

To use printf in C , which standard library that we should include
       stdio.h

What should main() return in C?
        0 if is correct or 1 otherwise

What does while loop do in C?
        Test une condition et l'execute tant qu'elle est vraie

What is for loop in C?
        Créer une boucle et l'execute

Do unsigned int and int have the same size? If yes, what is their size? If no, what are their sizes?
         Yes , their size is 4 bytes

What is the result of following program?
#include <stdio.h>
int main(void) {
    int i = '1';
    char j;
    
    for (j = 's'; j <= 'w'; j++)
        putchar(j);
    while (i <= '7')
    {
        putchar(i);
        i++;
    }
    return 0;
}
      stuvw1234567$

Questions for the projects C - Functions, nested loops, more functions, more loops..
What is an index?
         A travailler avec toi

What are the 3 part of a loop?
         Declaration et initialisation de la varible, condition et incrementation

What's the major difference between a for and a while loop?
         For connaissance du depart et de l'arrivee
         While test une condition

What's a nested loop?
         Boucle imbrique dans une autre
         
What's a function signature?
         C'est le prototype de la function

What should the function prototype contain ?
         Le type, le nom de la fonction et ses arguments

What does a function return ?
         Resultat de la fonction

What does happen when a function returns something (does it continue executing ?) ?
          soit la fonction s'arrete soit ca plante

What is the difference between a declaration and a definition of a function ?
          declaration  A revoir avec toi
          definition   A revoir avec toi
What's a header file in C ?
          Un fichier qui contient les prototypes pour main.h et les librairies standard.

What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89 ?
          Une commande qui nous annonce les erreurs de syntaxe de notre code de la version 89.

What's the difference between printf and putchar?
           putchar affiche un seul caractere a la fois contrairement a printf qui peut afficher des chaines de caractere.

what is the difference between return 0 and return 1 in c ?
           0 is a success code and 1 is for an error.

What does modulo (%) operator do?
           il garde le reste d'une division

What's the ASCII and the ASCIItable?
           Une table de comparaison qui attirbut plusieurs valeurs a un meme caractere.

What does %d mean in printf ?
        Affiche un chiffre.

What does %s mean in printf ?
           Affiche une chaine de caractere.

What is the result of the following program?
#include <stdio.h>

int main(void) {
    int n = 2;
    
    if (n > 2) {
        printf("%d", n);
        return 0;
    }
    return 1;
}
          1

19. What is the result of the following program?
#include <stdio.h>

int main(void) {
    int i = 0;
    int j = 0;


    for (; i < 10; i++) {
        for (; j < 10; j++) {
            putchar('#');
        }
    }
    return (0);
}
           imprime une ligne de 10 #
           Mais besoin d'explication
