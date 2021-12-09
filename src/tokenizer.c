#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

char **tokenize(char *str){
  int limit= count_words(str);
  //array created to hold amount of words
  char array= (char *)malloc(sizeof(char) * limit);
  //pointer for list of words
  char **words=(char **)malloc(sizeof(char *) * limit);
  //for loop to grab those words and put them into the array
  int length = 20;//hardcoding for testing
  for(char **str; char **str < length; char **str ++){ //made another pointer to traverse thru str
    for(char **words; char **words < limit-1; char **words++){//inner for loop for array
      //check if a space character
      if(char **str == '/t' or '/0'){
	char **str-1==array[char **words];
	//pointer will minus 1 to get rid of space_charcter and keep those characters as one word
      }
    }
  }
  printf(char array);//printing the entire array

  return 0;
}
      
