PLD Questions - C pointers, arrays and strings (first 2 projects)
Melissa, Loic, Matthieu, Valentin, Mathis Roy, Florian


What is a pointer ?
Une variable qui a pour valeur l'adresse de la variable pointee.

What is the size of a pointer (on a 32-bits machine and on a 64-bits one) ?
4 bytes pour un systeme 32-bits    8 bytes pour un systeme 64-bits

How do we declare a pointer ?
Type *nomDuPointeur

How do we give a value to a pointer ?
*pointeur = &variablePointee

What are variable declaration and variable initialization and what's the difference between the two of them ?
Declaration: TYPE NOM;
Initialisation:  NOM = VALEUR;

How do we dereference a pointer (you can use this pointer as an example to answer the following questions int *ptr; ) ?
*pointeur

Using a pointer, how can we modify the value of the variable to which it points to ?
*pointeur = valeur

Using a pointer, how can we modify the value of the variable to which it points to ?
*pointeur = valeur

What is passing by reference and how do we do it (student can give a simple example) ?
&  exemple:(int *ptr = &a) 

What is the main difference between an array and pointer in C ?
Tableau:   Memoire contigue d'éléments de meme types
Pointeurs: Variables qui stockent les adresses pointees

What are the main characteristics of an array in C ?
Taille fixe a la declaration et memoire contigue

What is passing by value in C ?
Copie des donnees et stockee via le nom du variable
