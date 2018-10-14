#include <stdio.h>
#include <string.h>

int main(){
 while(1){
  //create some space for our strings
  char line[500];
  char argsarray[20][100];

  //print prompt
  //read line from terminal
   printf("CS361 >:");
  fgets(line, 500, stdin);

  //break the string up into words
  char *word = strtok(line, " ");
  int i = 0;

  
  while (word) {
    printf("word: %s\n", word);
    //copy a word to the arg array
    strcpy(argsarray[i], word);
    //get next word
    word = strtok(NULL, " ");
    i = i + 1;
  }
 }
}
