#include <iostream>
#include <list>
using namespace std;

struct myHash
{
    int BUCKET;
    list<int> *table;

    // NOTE:- Its a constructor, bcoz we want to give value into the structure while defining it only.
    myHash(int val)
    {
        BUCKET = val;
        table = new list<int>[BUCKET];
    }
    // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

    void insert(int key)
    {
        int i = key % BUCKET;
        table[i].push_back(key);
    }

    void remove(int key)
    { 
        int i = key % BUCKET;
        table[i].remove(key);
    }

    bool search(int key)
    {
        int i = key % BUCKET;
        int count = 0;
        // int sizeOfTable = sizeof(table) / sizeof(table[0]); -- Its wrong bcoz, when we do "sizeof(table)" then here we are finding size of the pointer "table" and not the "table" as an array! --
        list<int>::iterator iter;
        while (count < BUCKET)
        {
            /* code */
            for (iter = table[count].begin(); iter != table[count].end(); iter++)
            {
                if ((*iter) == key)
                    return 1;
            }
            count++;
        }
        return 0;
    }

    void printingTheHash()
    {
        // int sizeOfTable = sizeof(table) / sizeof(table[0]); -- Its wrong bcoz, when we do "sizeof(table)" then here we are finding size of the pointer "table" and not the "table" as an array! --
        list<int>::iterator iter;
        int count = 0;
        while (count < BUCKET)
        {
            // Iterate over the vector using the iterator
            for (iter = table[count].begin(); iter != table[count].end(); ++iter)
            {
                std::cout << *iter << " ";
            }
            count++;
        }
        cout << endl;
    }
};

int main()
{
    myHash newTable(7);
    newTable.insert(15);
    newTable.insert(20);
    newTable.insert(22);
    newTable.insert(29);

    newTable.printingTheHash();
    cout << newTable.search(22) << endl;

    newTable.remove(22);
    cout << newTable.search(22) << endl;
}
