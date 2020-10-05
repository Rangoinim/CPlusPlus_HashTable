/***********************************************************
Name: Cory Munselle
Assignment: 04
Purpose: contains the class declaration and all method prototypes
Notes: 
***********************************************************/

#ifndef HASHTABLE_H
#define HASHTABLE_H

#define SIZE 19

#include "linkedlist.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class HashTable
{
public:
    HashTable();
    ~HashTable();
    
    bool isEmpty();
    int getNumberOfEntries();
    bool add(int, string);
    bool remove(int);
    void clear();
    bool getValue(int, Data*);
    bool contains(int);
    void traverse();
    
private:
    int hash(int);
    LinkedList list[SIZE];
    
};
#endif /* LINKEDLIST_H */
    