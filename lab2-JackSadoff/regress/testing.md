To test regression.sh, I first tried to reach each exit condition to make sure each control statement properly caught the error it was created to catch. After that, I wrote a simple bash script

````
echo The first argument is $1
exit 0
```` 

and then wrote several test cases which called the bash script with different inputs. Then, I ran the code several times with different test directories to make sure that the comparison function worked and that the script could handle multiple arguments.
