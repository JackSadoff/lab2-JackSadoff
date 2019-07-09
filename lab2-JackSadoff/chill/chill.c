#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// function prototype *declarations*
void printTable(float minT, float maxT, float minV, float V);
//takes the user inputs and displays proper table

int main(const int argc, const char *argv[]){

float tempF;
float minTempF;
float velocity;
float minV;

// interpret arguments
  if (argc == 1) {
    // no arguments (other than the command) - use default value
    printTable(-10, 40, 5, 15);

  } else if (argc == 2) {
    // one argument - display various windspeeds corresponding to given temp
    sscanf(argv[1], "%f", &tempF);
    if (tempF < -99 || tempF > 50) {
      printf("Temperature must be less than 50 degrees Fahrenheit and greater than -99 degrees");
      exit(1);
    }
    printTable(tempF, tempF, 5, 15);
  } else if (argc == 3) {
    //If both are given, just print one entry
    sscanf(argv[1], "%f", &tempF);
    sscanf(argv[2], "%f", &velocity);
    if (tempF < -99 || tempF > 50) {
      printf("Temperature must be less than 50 degrees Fahrenheit and greater than -99 degrees");
      exit(2);
    }
    else if (velocity <= .5){
        printf("Wind velocity must be greater than or equal to 0.5 MPH");
        exit(2);}
    printTable(tempF,tempF,velocity,velocity);

  } else {
    // too many arguments
    printf("usage: %s [numArg]\n", argv[0]);
    exit(3);
  }
  return 0;
}
void printTable(float minT, float maxT, float minV, float V){
    float currV;
    float currT;
    printf("Temp\tWind\tChill\n-----\t-----\t-----\n");
    currT=minT;
    do{
        currV=minV;
        do{
        printf("% 3.10g\t% 4.10g\t% 4.1f\n",currT,currV,35.74 + 0.6215*currT - (35.75-.4275*currT)*pow(currV,0.16));
        //use %g with proper precision to not
        //print trailing zeros of floating point values
        currV+=5;
        }while(currV<=V);
        currT+=10;
        //Do while loops gurantee that at least one iteration of the loop occurs,
        //allowing same logic for all cases
    }while(currT<=maxT);
return;
}
