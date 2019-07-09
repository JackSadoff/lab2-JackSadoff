#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(const int argc, const char *argv[]){
const int maxArrayLen=100;
char currWord[maxArrayLen];

int i=1;

FILE *currFile;

do {
  if (argc==1 || strcmp(argv[i],"-")==0){
    currFile=stdin;
    //If one of the two conditions is met, read from stdin
}else{
    currFile=fopen(argv[i],"r");
    //Otherwise, read from file
    if (!currFile){
      //check if file is found
      fprintf(stderr, "Error, %s file not found",argv[i]);
      return(1);
    }
  }
  while (fscanf(currFile,"%s",currWord)!=EOF){
    printf("%s\n",currWord);
    //read in word and print it
  }
  fclose(currFile);
  i++;
} while(i<argc);
//do while loop still runs once if argc=1 or if argc=2

return 0;
}
