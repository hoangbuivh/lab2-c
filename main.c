// Author: Hoang Bui hhb5051@psu.edu
// Collaborator: John Patrowicz jhp5270@psu.edu
// Collaborator: Jennifer Lee jml7322@psu.edu 
// Collaborator: Ojas Gupta oqg5053@psu.edu
// Section: 11
// Breakout: 3
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h> 
int main(void) {
  char *scoreGrade = readline("Enter your CMPSC 131 grade: ");
  double scoreGrade2  = atof(scoreGrade);
  char *letterGrade = "";
  if (scoreGrade2 >= 93.0){
    letterGrade =  "A";
  }
  else if (scoreGrade2 <=93.0 && scoreGrade2 >= 90.0) {
    letterGrade =  "A-";
  }
  else if (scoreGrade2 <=90 && scoreGrade2 >= 87.0) {
    letterGrade =  "B+";
  }
  else if (scoreGrade2 <=87.0 && scoreGrade2 >= 83.0) {
    letterGrade =  "B";
  }
  else if (scoreGrade2 <=83.0 && scoreGrade2 >= 80.0) {
    letterGrade =  "B-";
  }
  else if (scoreGrade2 <=80 && scoreGrade2 >= 77.0) {
    letterGrade =  "C+";
  }
  else if (scoreGrade2 <=77.0 && scoreGrade2 >=70.0)  {
    letterGrade =  "C";
  }
  else if (scoreGrade2 <=70.0 && scoreGrade2 >=60.0) {
    letterGrade =  "D";
  }
  else if (scoreGrade2 <=60.0)  {
    letterGrade =  "F";
  }
  else {
    letterGrade = "F";
  }

  printf("Your letter grade for CMPSC 131 is %s.\n", letterGrade );
  return 0;
}