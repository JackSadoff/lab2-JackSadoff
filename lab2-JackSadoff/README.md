Jack Sadoff  
CS 50  
Lab2 README

#chill.c  
Chill takes in zero, one or two floating point arguments. If one argument is given, it is treated as a temperature and the range of valid inputs is -99 to 50 (degrees F). If two arguments are given, the first will be interpreted as a temperature described above, and the second will be interpreted as a windspeed which must be greater than .5 MPH. The program will then calculate the wind chill based on the inputs.  

#words.c  

Words.c can take in any file name or "-" signifying stdin. If no arguments are given, the program will take stdin. Then, the program will in order of the inputs output each word in the files on its own line.

#histo.c  

Histo.c will take any number (up to 1000) of positive integer inputs and then break them into 16 bins of equal size such that the maximum bin contains is $2^{floor(log_{2}(maxValue))+1}-1$. Any non-positive integer inputs will be ignored and the program will continue to run until EOF is entered.  

#regression.sh  

Regression.sh takes at least 2 arguments, the first of which is a directory and any following input will be read as test file, which should contain a bash line. The program then executes all of the test scripts, saving a copy of the test script, the exit code of the script and the output of the script to a folder given by a date in the form "YYYYMMDD.HHmmSS". If the directory name already exists, then the script will compare the test files. If the directory does not exist, the directory will be renamed to the directory name.
