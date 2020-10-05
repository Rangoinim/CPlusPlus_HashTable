/***********************************************************
Name: Cory Munselle
Assignment: 04
Purpose: Header file for main, contains all includes needed and prototypes
Notes: 
***********************************************************/

#ifndef MAIN_H
#define MAIN_H

#define TEST_CASE_OFFSET 5
#define NUM_TESTS_BASE 20

#include "functions.h"
#include "data.h"
#include "hashtable.h"
#include "openfile.h"
#include <stdlib.h>
#include <time.h>  
#include <string>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

HashTable table;
//Data container for passing in to getvalue
Data tempData;
//vector of structs containing the properly sliced ids and data
vector<Data> contents;

#endif /* MAIN_H */