/***********************************************************
Name: Cory Munselle
Assignment: 04
Purpose: header file for functions which test the hashtable
Notes: 
***********************************************************/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#define MAX_ID 999

#include "data.h"
#include "hashtable.h"
#include <stdlib.h>
#include <time.h>
#include <string>
#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::vector;

void emptyCheck(HashTable*);
void findIds(vector<Data>*, HashTable*, Data*);
void findRandIds(HashTable*, Data*);
void containsCheck(HashTable*);
void removeIds(vector<Data>*, HashTable*);
void removeRandIds(HashTable*);

#endif /* FUNCTIONS_H */