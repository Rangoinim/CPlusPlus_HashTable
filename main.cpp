/***********************************************************
Name: Cory Munselle
Assignment: 04
Purpose: Does all of the testing for the hashtable
Notes: 
***********************************************************/

#include "main.h"

int main(int argc, char** argv)
{
    srand(time(NULL));
    string filename;
    int numTests = (rand() % NUM_TESTS_BASE) + TEST_CASE_OFFSET;
    
    //testing isEmpty
    emptyCheck(&table);
    if (argc > 1)
    {
        filename = argv[1];
        if (dumpToArray(filename, &contents) == true)
        {
            cout << "===================================================" << endl;
            cout << "Adding " << contents.size() << " items..." << endl;
            cout << "===================================================" << endl;
            for (int i=0; i <= contents.size()-1; i++)
            {
                cout << "   Adding " << contents[i].id << ": " << contents[i].data;
                table.add(contents[i].id, contents[i].data);
                cout << "   success" << endl;
                
            }
            cout << endl;
            emptyCheck(&table);
            cout << endl;
            cout << "===================================================" << endl;
            cout << "Checking contents " << numTests << " times..." << endl;
            cout << "===================================================" << endl;
            for (int i=0; i < numTests; i++)
            {
                containsCheck(&table);
            }
            cout << endl;
            if (table.isEmpty() == false)
            {
                cout << "===================================================" << endl;
                cout << "Finding " << numTests << " items..." << endl;
                cout << "===================================================" << endl;
                for (int i=0; i < numTests; i++)
                {
                    findIds(&contents, &table, &tempData);
                }
                cout << endl;
            }
            if (table.isEmpty() == false)
            {
                cout << "===================================================" << endl;
                cout << "Finding " << numTests << " random items..." << endl;
                cout << "===================================================" << endl;
                for (int i=0; i < numTests; i++)
                {
                    findRandIds(&table, &tempData);
                }
                cout << endl;
            }
            if (table.isEmpty() == false)
            {
                cout << "===================================================" << endl;
                cout << "Removing " << numTests << " items..." << endl;
                cout << "===================================================" << endl;
                for (int i=0; i < numTests; i++)
                {
                    removeIds(&contents, &table);
                }
                cout << endl;
            }
            if (table.isEmpty() == false)
            {
                cout << "===================================================" << endl;
                cout << "Removing " << numTests << " random items..." << endl;
                cout << "===================================================" << endl;
                for (int i=0; i < numTests; i++)
                {
                    removeRandIds(&table);
                }
                cout << endl;
            }
            if (table.isEmpty() == false)
            {
                cout << "===================================================" << endl;
                cout << "Finding " << numTests << " items..." << endl;
                cout << "===================================================" << endl;
                for (int i=0; i < numTests; i++)
                {
                    findIds(&contents, &table, &tempData);
                }
                cout << endl;
            }
            emptyCheck(&table);
            cout << endl;
            cout << "===================================================" << endl;
            cout << "Printing out table..." << endl;
            cout << "===================================================" << endl;
            table.traverse();
            cout << endl;
            cout << "Clearing the table...";
            table.clear();
            cout << "   success" << endl;
            emptyCheck(&table);
        }
        else
        {
            cout << "File doesn't exist or is empty" << endl;
        }

    }
    else
    {
        cout << "Please provide the filename of the data you wish to insert into the hashtable." << endl;
    }
    return 0;
}
