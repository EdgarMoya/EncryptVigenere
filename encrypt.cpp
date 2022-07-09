#include <iostream>
#include <string>
#include "encrypt.h"
#define LENGTH 26
using namespace std;

//Generate periodic key
string generateKey(string text, string key){
    string temp;
    int i, j=0;
    for (i = 0; i < text.length(); i++){
        if(text.at(i) == ' '){ temp += " "; continue;} 
        if(j==key.length()){
            j=0;
        }
        temp += key.at(j);
        j++;
    }
    return temp;
}

string encrypt(string text, string key_period, char alph[]){
    string temp;
    int *arr_text = chartoInt(text, alph);
    int *arr_key = chartoInt(key_period, alph);

    int i;
    for (i = 0; i < text.length(); i++){
        if(text.at(i) == ' '){
            temp += " ";
            continue;
        }
        if(arr_text[i] == -1){  //ignore unknown characters
            temp += text.at(i);
            continue;
        }
        int num = (arr_text[i] + arr_key[i]) % LENGTH;
        temp += alph[num]; 
    }
    return temp;
}

int searchPos(char ch, char alph[]){
    int i;
    for (i = 0; i < LENGTH; i++){
        if(alph[i] ==  ch){
            return i;
        }
    }
    return -1;
}

int* chartoInt(string text, char alph[]){
    int *temp = (int*) calloc(text.length(), sizeof(int));
    int i;
    for (i = 0; i < text.length(); i++){
        if(text.at(i) == ' ') i++;
        temp[i] = searchPos(text.at(i), alph);
    }
    return temp;
}

string toLower(string text){
    int i;
    for (i = 0; i < text.length(); i++){
        text[i] = tolower(text[i]);
    }
    return text;
}