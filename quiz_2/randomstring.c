Frank Eslami, Quiz 2

inputchar()
===========
This function simply return a random generated character from
the ASCII table. The range is from 32 - 127, which are the 
printable characters.

inputString()
=============
This function creates a null-terminated c-string of random
length 3 to 14. The function calls inputchar() to create each
of the array's characters.

Testing testme()
================
After 100 million iterations, I was unable to hit the error 
message. Unfortunately, killing the program manually does not provide
gcov results. Therefore, I was unable to analyze each line.

It is clear that random testing is not good enough. Even random
testing must be done within bounds of the scope of the test,
not just within all possible domains.