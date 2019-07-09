For words.c, I attempted several combinations of inputs similar to those posted on the assignment page. Entering no inputs yields the program outputting nothing, entering an echo command pipelined into the program with no other arguments outputted as expected. Then, I created two .txt files and tested giving the program multiple files to handle at once which it properly handled and finally I called 

```` echo the quick brown fox | ./words.c testfile1.txt - testfile2.txt ````

which the program handled properly, outputting the words in the echo command in between printing each of the test files. 
