#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>



int main(void){
const int defArraySize=1000;
int vals[defArraySize];
int bucket[16]={0};
float maxVal;
char extraVal[defArraySize];
int count;
int finalSize;

maxVal=1;
count=0;

printf("16 bins of size 1 for range [0,16)\n");
while (scanf("%s",extraVal)!= EOF ){//scan input in as a string
  if (atoi(extraVal)>0 || !strcmp(extraVal,"0")){
    //uses atoi to see if an integer is scanable or if 0 was entered
    vals[count]=atoi(extraVal);

    while (vals[count]>=pow(2,maxVal+3)){
      //keep doubling maxValue until max of the
      //bin is large enough to contain entered value
        maxVal++;
        printf("16 bins of size %g for range [0,%g)\n", pow(2,maxVal-1), pow(2,maxVal+3));
    }
    if (vals[count]>=0){
      //this if statement allows the program to ignore negative inputs because the
      //next positive input will overwrite the negative value stored or if it is the
      //last value, count won't increase so it won't be checked in the next loop
    count++;}
}}

finalSize=(int)pow(2,maxVal-1);
//save maximum final size
for(int i=0;i<count;i++){
  bucket[vals[i]/finalSize]++;}
//use integer division to find which bucket each entry falls into

for(int i=0;i<=15;i++){
  //print the histogram, using an if statement to not print 0 if a bucket is empty
  if (bucket[i]>0){
  printf("[%6d:%6d] %d\n",i*finalSize,(i+1)*finalSize-1,bucket[i]);
}
else {
  printf("[%6d:%6d]\n",i*finalSize,(i+1)*finalSize-1);
}
}

return 0;
}
