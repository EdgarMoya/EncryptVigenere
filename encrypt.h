#ifndef ENCRYPT_H
#define ENCRYPT_H

std::string generateKey(std::string, std::string);
int searchPos(char, char[]);
int* chartoInt(std::string, char[]);
std::string toLower(std::string);
std::string encrypt(std::string, std::string, char[]);

#endif