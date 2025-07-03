Made with everybody.
PLD questions - C - Even more pointers, arrays and strings
1- What's the correct output of the following program ?
The value of number is: 999
2- What's the correct output of the following program ?
The value of number is: 99
3- What's the correct output of the following program ?
The value of n is: 555
4- Is it possible to do an addition (+) operation between two pointers ?
Yes, (« *dest + *src »)
5- What's the size of a pointer to another pointer (double pointer) ?
A pointer of pointer is still a pointer and is 4 bytes for 32x or 8 for a 64x.
6- What is the value of a double pointer ?
Its value is the address of the pointed pointer.
7- What is a matrix (matrice) ?
It is a 2 dimensional array.
8- What are the different ways to iterate over/access pointer data with
loops, supposing that we have this as a pointer char *str ?
You can either int and index and iterate it or iterate the pointer directly.
PLD Questions - C - Recursion
1. What's a recursive function ?
A function that call itself.
2. What happens if a recursive function doesn't have a stop
condition ?
It is stuck in a infinite loop.
3. In what case you should use recursion ?
For factorial operation.
4. What does this code print?
This code will print 4 then decrement until it reach it’s base
« O ».
So 4 -> 3,2,1.
5.What does the following code print ?
The function will print the starting number « 5 » then decrement until the
base is reached « <0 » and so it will print.
5,4,3,2,1,0.
And not -1 since -1 < 0.
6.What is the result of the following function ? Explain its behavior on
the whiteboard (faites le tournage à la main sur le tableau).
The end result is « The result of the factoriel = 120 »
The recursive program will start with 5 and take it in its
« memory » and decrement it to 1 then will multiply all its
iteration with itself.
The calcul would be : 5 * 4 * 3 * 2 * 1 = 120.
7.What is the result of the following function ? Explain its behavior on
the whiteboard (faites le tournage à la main sur le tableau).
We are not sure of the result.
We found that the program will return « the result of the exp
function = 8 » but cannot comprehend how the program compute since
the first result is 8 then 4 then 2 but only keep the 8.
PLD Questions - C - argc, argv
1. What is argc in main (in the C programming language)?
It counter of argument always in « int » and the counter start a 0.
2. What is argv ?
It is the argument vector in an array.
3. Why use argc and argv ?
To use user input, it makes a program more dynamic & flexible.
ex:
./mul 2 3
6
./mul 2 -3
-6
./mul 2 0
0
./mul 245 3245342
795108790
4. What does the following program do ?
The first line of code will print how many argument there’s stored
in string.
The second line of code will print the index and what is stored in
it.
ex:
0 - argv[0]
1 - argv[1]
…
argc-1 - argv[argc-1]
