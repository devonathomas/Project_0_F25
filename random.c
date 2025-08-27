#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RANDOM_H


//develop the function to generate a random string of given size
void rand_string (char*s , size_t size){
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    for (int i = 0; i < size; i++){
        int key = rand() % (sizeof(charset) - 1);
        s[i] = charset[key];
    }
    
}