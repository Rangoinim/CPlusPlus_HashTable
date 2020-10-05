/***********************************************************
Name: Cory Munselle
Assignment: 04
Purpose: contains the code for the methods of the hashtable class, for interacting and modifying the hashtable
Notes: 
***********************************************************/

#include "hashtable.h"

HashTable::HashTable()
{
    
}

HashTable::~HashTable()
{
    clear();
}
    
bool HashTable::isEmpty()
{
    for (int i=0; i < SIZE; i++)
    {
        if (list[i].getCount() != 0)
        {
            return false;
        }
    }
    return true;
}

int HashTable::getNumberOfEntries()
{
    int entries = 0;
    for (int i=0; i < SIZE; i++)
    {
        entries += list[i].getCount();
    }
    return entries;
}

bool HashTable::add(int id, string data)
{
    if (list[hash(id)].addNode(id, data) == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool HashTable::remove(int id)
{
    if (list[hash(id)].deleteNode(id) == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void HashTable::clear()
{
    for (int i=0; i < SIZE; i++)
    {
        list[i].clearList();
    }
}

bool HashTable::getValue(int id, Data *tempData)
{
    if (list[hash(id)].getNode(id, tempData) == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool HashTable::contains(int pos)
{
    if (list[pos].getCount() > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void HashTable::traverse()
{
    for (int i=0; i < SIZE; i++)
    {
        cout << "   There are " << list[i].getCount() << " nodes." << endl;
        list[i].printList();
    }
}

int HashTable::hash(int id)
{
    return id % SIZE;
}