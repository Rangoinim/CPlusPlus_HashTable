/***********************************************************
Name: Cory Munselle
Assignment: 04
Purpose: contains functions to help facilitate testing of hashtable
Notes: 
***********************************************************/

#include "functions.h"

//srand(time(NULL));

void findRandIds(HashTable * table, Data * tempData)
{
    int randId = rand() % MAX_ID;
    cout << "Looking for ID " << randId << "..." << endl;
    if (table->getValue(randId, tempData) == true)
    {
        cout << "ID " << randId << " is associated with " << tempData->id << ": " << tempData->data << endl;
    }
    else
    {
        cout << "   ID not found" << endl;
    }
}

void findIds(vector<Data>* contents, HashTable * table, Data * tempData)
{
    int randaccess = rand() % (contents->size()-1);
    cout << "Looking for ID " << (*contents)[randaccess].id << "..." << endl;
    if (table->isEmpty() == false && table->getValue((*contents)[randaccess].id, tempData) == true)
    {
        cout << "   ID " << (*contents)[randaccess].id << " is associated with " << tempData->id << ": " << tempData->data << endl;
    }
    else
    {
        cout << "   ID not found" << endl;
    }
}

void emptyCheck(HashTable * table)
{
    cout << "Checking if the table is empty..." << endl;
    if (table->isEmpty() == true)
    {
        cout << "Table is empty!" << endl;
    }
    else
    {
        cout << "Table is not empty. There are " << table->getNumberOfEntries() << " items in the table." << endl;
    }
}
void containsCheck(HashTable * table)
{
    int id = rand() % SIZE;
    cout << "   Checking if slot " << id << " contains anything...";
    if (table->contains(id) == true)
    {
        cout << "   yes" << endl;
    }
    else
    {
        cout << "   no" << endl;
    }
}
void removeRandIds(HashTable * table)
{
    int randId = rand() % MAX_ID;
    cout << "   Removing " << randId << "...";
    if (table->remove(randId) == true)
    {
        cout << "   success" << endl;
    }
    else 
    {
        cout << "   failed" << endl;
    }
}
void removeIds(vector<Data>* contents, HashTable * table)
{
    int randaccess = rand() % (contents->size()-1);
    cout << "   Removing " << (*contents)[randaccess].id << "...";
    if (table->isEmpty() == false && table->remove((*contents)[randaccess].id) == true)
    {
        cout << "   success" << endl;
    }
    else 
    {
        cout << "   failed" << endl;
    }
}