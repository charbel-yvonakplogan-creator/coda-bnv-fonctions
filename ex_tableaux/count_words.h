#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

int count_words(char *str){

    int length = 0;



    int counter = 0;

    for(int i = 0; str[i] != '\0'; i++){

        if (str[i] == ' ' || str[i] == '\'' || str[i] == '\n') { 
            counter++;
        }
        if (length == 0){
            length++;
        }

        else {
            length = 0;
        }
            
        

    } return counter;

}


#endif